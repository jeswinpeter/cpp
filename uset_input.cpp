#include <iostream>

using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your Name: ";
    
    getline(cin, name);
    cout << "Enter your age: ";

    cin >> age;

    cout << "\nHello " << name;
    
    return 0;
}