//i felt like this was kind of a lot to put in one program but its all one problem
//No iostream 
using namespace std; 
//not an error, but would be better if it didn't have using namespace std
int main () 
{
    double number1, number2, sum;
    Cout << "Enter a number: "; //cout and cin are capitalized
    Cin << number1; //extraction operator used instead of assignment
    Cout << "Enter another number: ";
    Cin << number2;
    number1 + number2 = sum; //assignment operator on wrong side
    Cout "The sum of the two numbers is " << sum //missing semicolin
    return 0;
    
}

#include <iostream>
using namespace std;
int main() 
{
    int number1, number2;
    float quotient;
    cout << "Enter two numbers and I will divide\n";
    cout << "the first by the second for you.\n";
    cin >> number1, number2;
    quotient = float<static_cast>(number1) / number2; //i have no clue what float<static_cast> does. maybe sets number1 to a float
    cout << quotient //missing semicolin
    return 0;
}

#include <iostream>; //semicolin shouldnt be here
using namespace std;
int main() 
{
    const int number1, number2, product; //wont const keep the numbers the same so you cant do anything with them?
    cout << "Enter two numbers and I will multiply\n";
    cout << "them for you.\n";
    cin >> number1 >> number2;
    product = number1 * number2;
    cout << product //missing semicolin
    return 0;
    
}

#include <iostream>;//semicolin shouldnt be here
using namespace std;
main //no int or ()
{
    double number, half;
    cout << "Enter a number and I will divide it\n" //no semicolin
    cout << "in half for you.\n" //no semicolin
    cin >> number1; //incorrect variable name
    half =/ 2;
    cout << fixedpoint << showpoint << half << endl; //where did fixedpoint and showpoint come from?
    return 0;
    
}

#include <iostream>;
using namespace std;
int main() 
{
    char name, go; //name will only display 1st letter. go isnt used
    cout << "Enter your name: ";
    getline >> name;
    cout << "Hi " << name << endl;
    return 0;
    
}

