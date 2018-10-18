/**
Description: a function called get_string will prompt 
	     the user to enter a string and will return 
	     the string. Then, a function called char_count 
	     will accept 2 parameters, a string and a 
	     character, and will return the number of the 
	     given character in the given string.

Filename:    main.cpp

Author:      Jacob McGuire

Date:        October 18, 2018
*/

#include <iostream>
#include <string>
using namespace std;


string get_string(string s)
{
    cout << "Please Enter A Word: " << endl;
    cin >> s;
    return s;
}

int get_char(string h, char c)
{
    cout << "Please Enter The Character You Would Like To Know The Quantity Of: " << endl;
    cin >> c;
    int num = 0;
    for(int i = 0; i < h.length(); i++)
    {
        if(h.at(i) == c)
	{
	    num++;
	}

    }
    return num;
}

int main()
{
    string e;
    char l;
    e = get_string(e);
    cout << get_char(e, l) << endl;
}

