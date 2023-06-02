//A)
if(age >= 65);//remove semicolon
  cout << "Age is greater than or equal to 65" << endl;
else
  cout << "Age is less than 65 << endl"; //quotes wrong
  
//B)
if(age >= 65)
  cout << "Age is greater than or equal to 65" << endl;
else;//remove semicolon
  cout << "Age is less than 65 << endl";//quotes wrong
  
//C)
unsigned int x = 1;
unsigned int total; //no value given before its used

while(x <= 10) {
  total += x;
  ++x;
}

//D)
While(x <= 100)//Not enclosed. Improper capitalization
  total += x;
  ++x;
  
//E)
while(y > 0) //Never outputs anything because of logic error
{
  cout << y << endl;
  ++y;
}