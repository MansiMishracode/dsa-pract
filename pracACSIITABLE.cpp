//PRINT ACSII TABLE CHAR 
#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    cout << "Character: " << ch << endl;
    cout << "ASCII Value: " << (int)ch << endl;

    if (ch >= 'a' && ch <= 'z') {
        cout << "This is lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "This is uppercase" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "This is a digit" << endl;
    }
    else {
        cout << "This is a special character" << endl;
    }

    return 0;
}


