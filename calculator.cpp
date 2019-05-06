#include <iostream>
#include <string>
using namespace std;

// make sure there is only ever 1 "main" function for a program
int main() {

    // It is best to declare all of your variables together right above where you start using them.
    int num1, num2;
    char op;
    int result;
    string keepRunning = "yes";

    // A do-while loop will always run at least once, and will keep running until the "while" is false
    do {

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator: ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        if(op == '+'){
            result = num1 + num2;
        } else if(op == '-'){
            result = num1 - num2;
        }else if(op == '/'){
            result = num1 / num2;
        }else if(op == '*'){
            result = num1 * num2;
        } else {
            cout << "Invalid Operator";
        }
        cout << num1 << " " << op << " " << num1 << " equals " << result;

       
        cout << "\nWould you like to keep using calculator? Type \"yes\" or \"no\": ";
        cin >> keepRunning;
 

    } while (keepRunning == "yes");
   

}