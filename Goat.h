// Goat.h

#ifndef GOAT_H
#define GOAT_H
#include <iostream>
using namespace std;

class Goat {
private:
    string name;
    int age;
    string color;
public: 
    Goat()                          { name = ""; age = 0; color = ""; }
    // write three more constructors
    Goat(string n)
    {
        name = n;
        age = 0;
        color = "";
    }
    
    Goat(string n, int a)
    {
        name = n;
        age = a;
        color = "";
    }

    Goat(string n, int a, string c)
    {
        name = n;
        age = a;
        color = c;
    }

    // setters and getters
    void set_name(string n)         { name = n; };
    string get_name() const         { return name; };
    void set_age(int a)             { age = a; };
    int get_age() const             { return age; }
    void set_color(string c)        { color = c; }
    string get_color() const        { return color; }

    void main_menu()
    {
        int input = 0;
        while(input != 4)
        {
            cout << "*** GOAT MANAGER 3001 ***\n[1] Add a goat\n[2] Delete a goat\n[3] List goats\n[4] Quit\nChoice -->";
            cin >> input;
            if(input == 1)
            {

            }
            else if(input == 2)
            {

            }
            else if(input == 3)
            {

            }
            else if(input == 4)
            {

            }
            else
            {
                cout << "Invalid input, please type a valid number (1,2,3,4) to select an option\n";
            }
        }
        
        
    }

    // write overloaded < operator for the std::list
};

#endif