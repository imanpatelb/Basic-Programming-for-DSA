//
//  Operators_conditionals.cpp
//  Operators
//
//  Created by Man Patel on 2024-01-25.
//

#include <iostream>
using namespace std;

int main() {
    
    
    // BITWISE OPERATOR
    
//    bool a = false;
//    bool b = false;
//    
//    cout << (a^b) << endl;    // check out XOR table
//    cout << (a | b) << endl;  // check out OR table
//    cout << (3 & 7) <<endl;   // check out AND table

//        cout << (~5) << endl;     // check out NOT table -
    //1st complement => 00000101 => 11111010 => 10000101 + 1 = 10000110 = -6
//
    
    //LEFT/ RIGHT SHIFT OPERATOR
//    int c = 12;
//    c = c << 1;   // it multiplies by 2 - at bit level it adds a zero from behind
//    c = c << 2;
//    c = c << 1;
//    c = c << -1;  // in case of nevagtive, it can throw garbage value
    
//    c = c >> 1;
//    c = c >> -1;
//
//    cout << c << endl;
    
    //PRE/POST -> INCREMENT/DECREMENT OPERATORS
    
    // a++ // first use, then increment
    // a-- // first use, then decrement
    // ++a // first increment, then use
    // --a // first decrement, then use
    
//    int a = 5;
//    int b = 3
    
//    cout << (++a)*(++a) << endl;
//    int c = (++a)*(--b);
//    cout << c << endl;
    
    
    //VARIABLE SCOPING
    
    //declaration
//    int a; // gloabal variable - we can use it anywhere in the file
    //initialization
//    int b; // gloabal variable
    //updation
//    b = 10;  //you can update but you can't redifine like this "int b = 10"
    
//    if(true){
//        //local variable - we can only use it in block scope
//        int b = 15;
//        cout << b << endl;
//    }
//    cout << b << endl;
    
//    operator precedence
    // - you can check out a operator precendence on internet
    // - Always use brackets, so don't have to remember the table
    
    
    //BREAK AND CONTINUE
 
    // Break: break the loop
    // Continue: Skips iterations
    
    
    //SWITCH CASE
    //we can't use String as a case in here
    // we cannot use "continue" in Switch Case
    int d;
    cout << "Enter a number"<< endl;
    cin >> d;
    
    switch (d) {
        case 1:
            cout << "Friday" << endl;
            break;
        case 2:
            cout << "Saturday" << endl;
            break;
        case 3:
            cout << "Sunday" << endl;
            break;
        case 4:
            cout << "Monday" << endl;
            break;
            
        default:
            cout << "Holiday" << endl;
            break;
    }
    
    
    
}
