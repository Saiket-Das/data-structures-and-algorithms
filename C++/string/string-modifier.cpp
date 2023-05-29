#include<bits/stdc++.h>
using namespace std;

int main () {

    // String modifier in-built functions

    string a = "Ahan";
    string b = "Bryan";

    // a = a + b;                       // Answer = AhanBryan (Concat two string)
    a.append(b);                        // Answer = AhanBryan (Concat two string using built-in function)
    cout << a << endl;


    string str = "XY";
    
    str.push_back('Z');                 // Add a new character at end of string
    cout << str << endl;                // Answer = "XYZ"

    str.pop_back();                     // Remove last new character from string 
    cout << str << endl;                // Answer = "XY"

    str.assign("ABC");                  // Assign a string (using function)
    cout << str << endl;                // Answer = "ABC"

    string str1 = "Hello World";
    
    str1.erase(6, 1);                   // Delete or erase a character from string (4 = Character position & 1 = How many characters I want delete or erase from 4 element's position)
    cout << str1 << endl;               // Answer = "Hello orld"

    str1.replace(6, 2, "Ko");           // Replace element (First 2 params same as erase function & "Co" is the replaced value)
    cout << str1 << endl;               // Answer = "Hello Kold"

    str1.insert(6, "Hi ");              // Insert new string into string (6 = Element positon & "Hi" is the value)
    cout << str1 << endl;               // Answer = "Hello Hi Kold"

    return 0;
}