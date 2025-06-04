#include <iostream>

using namespace std;

int main() {

    int num1, num2;
    int result;
    cout << "Enter First number: ";
    cin >> num1;

    char operato;
    cout << "The available operators are: +,-,/,*,^\nChose operator: ";
    cin >> operato;

    cout << "Enter Second number: ";
    cin >> num2;

    switch (operato){
    case '+':
        result = num1 + num2;
        break;
    case '-': 
        result = num1 - num2;
        break;
    case '*': 
        result = num1 * num2;
        break;
    case '^': 
        result = num1 ^ num2;
        break;
    case '/': 
        if(num2 != 0) {
            result = num1 / num2;
        }
        else {
            cout << "!! Cannot divide by zero !!";
            return 0;
        }
        break;
    default:
        cout << "!! Invalid operator !!";
        return 0;
        break;
    }

    cout << "\nThe result is => " << result;

    return 0;
}