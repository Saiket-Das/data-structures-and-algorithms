#include<iostream>
using namespace std;

int main () {

    // Switch Case in C++

    char a;

    cin >> a;

    // Check whether a Character is a Vowel or Consonant
    switch (a) {
        case 'a':
            cout << "Vowel";
            break;
        case 'e':
            cout << "Vowel";
            break;
        case 'i':
            cout << "Vowel";
            break;
        case 'o':
            cout << "Vowel";
            break;
        case 'u':
            cout << "Vowel";
            break;
        default:
            cout << "Consonant";
    }

    return 0;
}