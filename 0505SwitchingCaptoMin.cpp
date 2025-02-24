#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str; // string is const char* 
    cin >> str;

    // using the ascii code. 
    // 65 to 90 is Capital.
    // 97 to 122 is lowercases. 
    
    // get the ascii code of the every characters - change const char value to the int 
    converttoASCII(str); 
    // exepections for out of ranged characters like non alphabets, numbers extra 

    // add 32 for capitals, deduct 32 for the non-capitals. 

    // return the string (or char * ... )
    cout<< str;
    return 0;
}