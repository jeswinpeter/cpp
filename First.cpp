#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string Name = "Sthesh";
    string subject = "Social";
    char grade = 'C';
    double sgpa = 7.5;
    cout << "Hello " << Name << endl;
    cout << "You have secured " << grade << " in " << subject << endl;
    cout << "Your sgpa is " << sgpa << endl;

    // ----- Math functions -----
    cout << pow(4, 5);
    cout << sqrt(82) << "\n";
    cout << fmax(3, 5);
    
    return 0;
}