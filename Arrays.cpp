#include <iostream>

using namespace std;

int sum_of_elements(int aray[],int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += aray[i];
    }

    return sum;
}

int main() {
    int size; 

    // Getting user input 
    cout << "Enter the size of array: ";
    cin >> size;

    int array[size];
    
    cout << "Enter the numbers: ";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    for(int num : array) {
        cout << num << "\n";
    }

    // Calling function and printing output
    cout << "The sum of the numbers you entered is >> " << sum_of_elements(array, size);
    
    return 0;
}