#include <iostream>

using namespace std;

int main() {
    char response;

    cout << "Are you a Human, enter y for Yes and n for No: ";
    cin >> response;

    if(response == 'y') {
        cout << "User might be Human";
    }
    else if(response == 'n') {
        cout << "User is Human for sure :)";
    }
    else {
        cout << "\n\t!!!! ALIEN FOUND !!!!\n";
    }

    return 0;
}