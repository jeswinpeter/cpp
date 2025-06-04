/* Get a line of string from the user and find the frequency of each words*/

#include <iostream>
#include <vector>
#include <sstream>


using namespace std; 

int main() {
    string input;
    string storage[20];

    cout << "Enter a sentence: ";
    getline(cin, input);

    istringstream sStream(input); 

    vector<string> words;
    string word;

    while (sStream >> word){
        words.push_back(word);
    }

    cout << "The string you entered :\n";
    for(string word : words) {
        cout << "\t" << word << "\n";
    }
}