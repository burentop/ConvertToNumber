//
//  main.cpp
//  ConvertToNumber
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    string input;
    
    cout << "Please type out the word for a number (e.g. 'one'): ";
    cin >> input;
    
    if (input == "one")
        cout << "1\n";
    else if (input == "zero")
        cout << "0\n";
    else if (input == "two")
        cout << "2\n";
    else if (input == "three")
        cout << "3\n";
    else if (input == "four")
        cout << "4\n";
    else
        cout << "Not a number I know.\n";
    
    return 0;
}
