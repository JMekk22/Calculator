
#include <iostream>

using namespace std;

int main()
{

    char grade = 'A';
    string phrase = "Giraffe Academy";
    int age = 50;
    double gpa = 2.3;
    bool isMale = true;

    cout << "grade" << endl;

    string phrase = "John Mekkelsen";
    phrase[0] = 'g';
    cout << phrase;



    return 0;
}


cout << phrase.find("Mekkelsen", 0);

cout << phrase.substr(8, 3);

    cout << phrasesub = phrase.substr(8, 3);
    cout << phrasesub;


 cout << 5 * 7;

 double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "enter second number: ";
    cin >> num2;

    cout << num1 + num2;



   string color, pluralNoun, celebrity;

   cout << "enter a color: ";
   getline(cin, color);
    cout << "enter a pluralNoun: ";
   getline(cin, pluralNoun);
    cout << "enter a celebrity: ";
   getline(cin, celebrity);


   cout << "roses are " << color << endl;
   cout << pluralNoun << " are blue" << endl;
   cout << "I love " << celebrity << endl;



    int luckyNums[20] = {4, 8, 15, 16, 23, 42};

    luckyNums[10] = 100;

    cout << luckyNums[10];


void sayHi(string name){
    cout << "Hello " << name;
}

int main()
{

    sayHi("Mike")

void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << endl;
}

int main()
{

    sayHi("Mike", 16);
    sayHi("Tom", 45);
    sayHi("Steve", 19);


void sayHi (string name, int age);

int main()
{

    sayHi("Mike", 16);
    sayHi("Tom", 45);
    sayHi("Steve", 19);



    return 0;

}



void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << endl;

double cube(double num){
    double result = num * num * num;
    return result;

}

int main()
{


    double answer = cube(5.0);
    cout << answer;


    return 0;


    bool isMale = false;

    if(isMale){
        cout << "You are a male";
    } else{
        cout << "you are not male";

bool isMale = false;
    bool isTall = false;

    if(isMale && isTall){
        cout << "You are a tall male";
    } else if(isMale && !isTall){
        cout << "you are a short male";


    } else if(!isMale && isTall){
        cout << "You are tall but not male";

    }

    else{
        cout << "you are not male and not tall";

int getMax(int num1, int num2){
    int result;

    if(num1 > num2){
        result = num1;
    } else{
        result = num2;
    }

    return result;
}

int main()
{
    cout << getMax(2, 5);
    return 

int getMax(int num1, int num2, int num3){
    int result;

    if(num1>= num2 && num1 >= num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
}     else {
        result = num3;
}

    return result;
}

int main()
{
    cout << getMax(100, 100, 10);


    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    int result;
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
    cout << result;


  int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    int result;
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
    cout << result;

string getDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;


    }
}





int main ()
{

    cout << getDayOfWeek();



    return 0;
}

