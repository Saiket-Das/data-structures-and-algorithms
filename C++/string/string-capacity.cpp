#include<bits/stdc++.h>
using namespace std;

int main () {

    // String capacity built-in functions

    string str = "Ahan Bryan";

    cout << str.size() << endl;         // Answer = 10 (Size of string)
    cout << str.max_size() << endl;     // Answer = 2147483647 (Max size of a string. But in online it's size 10^6)
    cout << str.capacity() << endl;     // Answer = 15 (Returns current available capacity of the string)
    cout << str.empty() << endl;        // Answer = 0 (Beacuse string isn't empty)

    str.clear();                        // Clear the string
    cout << str.empty() << endl;        // Answer = 1 (Beacuse string is empty now after clearing it)
    // cout << str.size() << endl;         // Answer = 0 (After clear the size is the string is 0)

    string str1;
    cin >> str1;                        // Take only one word
    cout << str1 << endl;               // Input = Hello_World (Answer = Hello_World) & Input = Is it (Answer = Is)

    cout << str1.size() << endl;
    str1.resize(2);
    cout << str1 <<endl ;               // Input = Hello_World (Answer = Hello)
    cout << str1.size() << endl;        // Answer = 2

    str1.resize(5, 'Z');
    cout << str1 <<endl ;               // Input = Hello_World (Answer = Hello)

    return 0;
}