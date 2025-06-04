#include <iostream>

using namespace std;

class Book {
    public:
        string Title;
        string Author;
        int price;

    Book(string Title, string Author, int price) {
        this->Title = Title;
        this->Author = Author;
        this->price = price;
    }

    bool is_cheap() {
        if(price < 100) {
            return true;
        }
        return false;
    }
};

int main() {
    Book bok1("221 B", "Arther Conan", 350);

    cout << "Book details:\n " << bok1.Title << "\n " << bok1.Author << "\n " << bok1.price << "\n"; 
    if(bok1.is_cheap()) {
        cout << bok1.Title << "is Cheap";
    }
    else{
        cout << bok1.Title << " is not cheap";
    }

    return 0; 
}