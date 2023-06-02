#include <EEPROM.h>
#include <SPI.h>
#include <GD2.h>
int UD = 0;
int LR = 0;
int objy = 0;
int objx = 0;
bool objydir = 0;
bool objxdir = 0;
int x;
int y;
int lifecount = 3;

class Rectangle {
  public:
    float x, y, width, height;
    long color;
    bool kills;
    bool endlvl;

    Rectangle() {
      x = 0;
      y = 0;
      height = 0;
      width = 0;
      color = 0xFFFFFF;
    }

    Rectangle(int x, int y, int width, int height, int color = 0xFFFFFF)
      : x(x), y(y), width(width), height(height), color(color), endlvl(endlvl) {
      kills = false;
    }

    Rectangle& setKills(bool setting) {
      kills = setting;
      return *this;
    }

    Rectangle& setColor(long col) {
      color = col;
      return *this;
    }

    Rectangle& setEndlvl(bool ending) {
      endlvl = ending;
      return *this;
    }

    void draw() {
      GD.Begin(RECTS);
      GD.ColorRGB(color);
      GD.LineWidth(16);
      GD.Vertex2f(x * 16, y * 16);
      GD.Vertex2f((x + width) * 16, (y + height) * 16);
    }

    bool collides(Rectangle rect) {
      if (x > rect.x + rect.width || y > rect.y + rect.height || x + width < rect.x || y + height < rect.y) {
        return false;
      }

      return true;
    }
};

#define OBSTACLE_COUNT 25

Rectangle player;
Rectangle collisions[OBSTACLE_COUNT];

int activeLevelSize;
float xOffset = 0;
float yOffset = 0;

enum State {
  MENU,
  PLAY,
  GAMEOVER
};

State state = MENU;
void Control();

void resolveY() {
  for (int i = 0; i != activeLevelSize; ++i) {
    if (collisions[i].collides(Rectangle(x, y, 15, 15))) {
      if (collisions[i].kills) {
        if (lifecount > 0) {
          lifecount--;
          GD.ColorRGB(0xFFFFFF);
          GD.cmd_text(x, 136, 31, OPT_CENTER, lifecount);
          loadLevel();
        }
        else {
          state = GAMEOVER;
        }
        return;
      }
      else if (collisions[i].endlvl) {
        state = GAMEOVER;
        return;
      }
    }
  }
}

void resolveX() {
  for (int i = 0; i != activeLevelSize; ++i) {
    if (collisions[i].collides(Rectangle(x, y, 15, 15))) {
      if (collisions[i].kills) {
        if (lifecount > 0) {
          lifecount--;
          GD.ColorRGB(0xFFFFFF);
          GD.cmd_text(x, 136, 31, OPT_CENTER, lifecount);
          loadLevel();
        }
        else {
          state = GAMEOVER;
          lifecount = 4;
        }
        return;
      }
      else if (collisions[i].endlvl) {
        state = GAMEOVER;
        lifecount = 4;
        return;
      }
      break;
    }
  }
}

void setup() {
  GD.begin();
  loadLevel();
  Serial.begin(9600);
}

void loadLevel() {
  collisions[0] = Rectangle(0, 0, 4, 480).setKills(true).setColor(0xFF0000); //left wall
  collisions[1] = Rectangle(475, 0, 4, 480).setKills(true).setColor(0xFF0000); //right wall
  collisions[2] = Rectangle(0, 0, 480, 4).setKills(true).setColor(0xFF0000); //roof
  collisions[3] = Rectangle(0, 260, 480, 26).setKills(true).setColor(0xFF0000); //floor
  collisions[4] = Rectangle(40, 180, 5, 90).setKills(true).setColor(0xFF0000); //wall at start
  collisions[5] = Rectangle(40, 180, 40, 5).setKills(true).setColor(0xFF0000); //2nd from start
  collisions[6] = Rectangle(80, 180, 20, 30).setKills(true).setColor(0xFF0000); //3rd
  collisions[7] = Rectangle(80, 240, 120, 30).setKills(true).setColor(0xFF0000); //4th
  //collisions[8] = Rectangle(80, 210, 25, 5).setKills(true).setColor(0xFF0000); //5th
  //collisions[9] = Rectangle(100, 150, 5, 60).setKills(true).setColor(0xFF0000); //6th
  collisions[10] = Rectangle(130, 120, 70, 70).setKills(true).setColor(0xFF0000);//big square
  collisions[11] = Rectangle(130, 190 + objy, 10, 10).setKills(true).setColor(0xFF0000);//first up/down
  collisions[12] = Rectangle(190, 230 - objy, 10, 10).setKills(true).setColor(0xFF0000);//second up/down
  collisions[13] = Rectangle(40, 150, 60, 5).setKills(true).setColor(0xFF0000);
  collisions[14] = Rectangle(0, 120, 105, 5).setKills(true).setColor(0xFF0000);
  collisions[15] = Rectangle(130, 60, 5, 60).setKills(true).setColor(0xFF0000);
  collisions[16] = Rectangle(230, 170, 5, 60).setKills(true).setColor(0xFF0000);
  collisions[17] = Rectangle(230, 230, 120, 5).setKills(true).setColor(0xFF0000);
  collisions[18] = Rectangle(380, 170, 5, 60).setKills(true).setColor(0xFF0000);
  collisions[19] = Rectangle(380, 230, 65, 5).setKills(true).setColor(0xFF0000);
  collisions[20] = Rectangle(440, 130, 5, 100).setKills(true).setColor(0xFF0000);
  collisions[21] = Rectangle(380, 90, 100, 5).setKills(true).setColor(0xFF0000);
  collisions[22] = Rectangle(80, 90, 50, 5).setKills(true).setColor(0xFF0000);
  collisions[23] = Rectangle(0, 90, 50, 5).setKills(true).setColor(0xFF0000);
  collisions[24] = Rectangle(40, 30, 5, 30).setKills(true).setColor(0xFF0000);
  collisions[25] = Rectangle(40, 30, 320, 5).setKills(true).setColor(0xFF0000);
  collisions[26] = Rectangle(360, 30, 5, 20).setKills(true).setColor(0xFF0000);
  collisions[27] = Rectangle(360, 45, 30, 5).setKills(true).setColor(0xFF0000);
  collisions[28] = Rectangle(170, 60, 90, 5).setKills(true).setColor(0xFF0000);
  collisions[29] = Rectangle(170, 60, 5, 30).setKills(true).setColor(0xFF0000);
  collisions[30] = Rectangle(260, 60, 5, 60).setKills(true).setColor(0xFF0000);
  collisions[31] = Rectangle(200, 120, 65, 5).setKills(true).setColor(0xFF0000);
  collisions[32] = Rectangle(345, 170, 5, 60).setKills(true).setColor(0xFF0000);
  collisions[33] = Rectangle(285, 170, 60, 5).setKills(true).setColor(0xFF0000);
  collisions[34] = Rectangle(300, 30, 50, 90).setKills(true).setColor(0xFF0000);
  collisions[35] = Rectangle(300, 110, 5, 60).setKills(true).setColor(0xFF0000);
  collisions[36] = Rectangle(230, 125 + objy, 10, 10).setKills(true).setColor(0xFF0000);//third up/down
  collisions[37] = Rectangle(420, 80 - (objy * 2), 10, 10).setKills(true).setColor(0xFF0000);//forth up/down
  
  collisions[40] = Rectangle(390, 0, 5, 50).setKills(true).setColor(0xFF0000);
  collisions[41] = Rectangle(430, 50, 60, 5).setKills(true).setColor(0xFF0000); //wall near goal
  collisions[42] = Rectangle(440, 10, 30, 30).setEndlvl(true).setColor(0x00F000); //goal
  x = 10;
  y = 220;
  activeLevelSize = 43;
}

void loop() {
  GD.get_inputs();
  GD.ClearColorRGB(0x0000FF);
  GD.Clear();
  

  
  if (state == PLAY) {
    GD.ColorRGB(0xFFFFFF);
    GD.Tag(1);
    GD.PointSize(6 * 4);
    GD.Begin(RECTS);
    GD.Vertex2f(x * 16, y * 16);
    GD.Vertex2f((x + 15) * 16, (y + 15) * 16); //character
    GD.ColorRGB(0x0000FF);
    }

    const int xAbsOffset = abs(xOffset);
    for (int i = 0; i != activeLevelSize; ++i) {
      if (collisions[i].x > xAbsOffset + 480) {
        continue;
      }
      collisions[i].draw();
    }
    GD.ColorRGB(0x000000);
    GD.cmd_text(390, 20, 24, OPT_CENTER, "Lives: ");
    GD.cmd_number(430, 22, 24, OPT_CENTER, lifecount);
    if (state == MENU) {
    GD.Tag(10);
    Rectangle(200, 166, 80, 50).draw();
    if (GD.inputs.tag == 10) {
      loadLevel();
      state = PLAY;
      while (GD.inputs.x != -32768) {
        GD.get_inputs();
        if (GD.inputs.x == -32768)
          break;
      }

    }
    GD.cmd_text(240, 86, 30, OPT_CENTER, "Super Epic Maze Whatever");
    GD.cmd_text(240, 116, 24, OPT_CENTER, "Use stick to move to reach the green square");
      GD.cmd_text(240, 146, 24, OPT_CENTER, "Avoid that red stuff");
    GD.ColorRGB(0x000000);
    GD.cmd_text(240, 186, 24, OPT_CENTER, "Play");
  }
   if (state == GAMEOVER) {
    GD.Tag(9);
    Rectangle(160, 160, 160, 50).draw();
    GD.cmd_text(240, 136, 24, OPT_CENTER, "Game Over");
    GD.ColorRGB(0x000000);
    GD.cmd_text(240, 180, 24, OPT_CENTER, "Play again");
    if (GD.inputs.tag == 9) {
      loadLevel();
      state = MENU;
      while (GD.inputs.x != -32768) {
        GD.get_inputs();
        if (GD.inputs.x == -32768)
          break;
      }

    }
  }
  if (objydir == 0) //Move object
  {
  objy++;
  collisions[11] = Rectangle(130, 190 + objy, 10, 10).setKills(true).setColor(0xFF0000);
  collisions[12] = Rectangle(190, 230 - objy, 10, 10).setKills(true).setColor(0xFF0000);
  collisions[36] = Rectangle(230, 125 + objy, 10, 10).setKills(true).setColor(0xFF0000);//third up/down
  collisions[37] = Rectangle(420, 80 - (objy * 2), 10, 10).setKills(true).setColor(0xFF0000);//forth up/down
  if (objy >= 40)
    objydir = 1;
  }
  else if (objydir == 1)
  {
  objy--;
  collisions[11] = Rectangle(130, 190 + objy, 10, 10).setKills(true).setColor(0xFF0000);
  collisions[12] = Rectangle(190, 230 - objy, 10, 10).setKills(true).setColor(0xFF0000);
  collisions[36] = Rectangle(230, 125 + objy, 10, 10).setKills(true).setColor(0xFF0000);//third up/down
  collisions[37] = Rectangle(420, 80 - (objy * 2), 10, 10).setKills(true).setColor(0xFF0000);//forth up/down
  if (objy <= 0)
    objydir = 0;
  }

  
  
  
  GD.finish();
  GD.swap();
  UD = analogRead(A3);
  LR = analogRead(A4);
  Control();
}
void Control() {
  if (state == PLAY)
  {
    if (LR < 300)
    {
      x -= 2;
    }
    if (LR > 700)
    {
      x += 2;
    }
    if (UD < 300)
      y += 2;
    if (UD > 700) {
      y -= 2;
    }
  }
  resolveX();
  resolveY();
}





