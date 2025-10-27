/*COMSC 210 | Lab 23 | Lawrence Bryant
IDE used: Visual Studio Code*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();



void display_trip(list<Goat> t)
{
    int i = 1;
    for (Goat temp : t)
    {
        cout << "[" << i << "]  " << temp.get_name() << " (" << temp.get_age() << ", " << temp.get_color() << ")\n";
        i++;
    }
}

void add_goat(list<Goat> &t,string n[], string c[])
{
    int a = rand() % MAX_AGE;
    string name = n[rand() % SZ_NAMES];
    string color = c[rand()% SZ_COLORS];

    Goat *temp = new Goat(name,a,color);

    t.push_back(*temp);
}

void delete_Goat(list<Goat> &t)
{
    display_trip(t);
    
    int goat_obliterator;
    cout << "Please select which goat you wish to eradicate.";
    cin >> goat_obliterator;

    while (goat_obliterator >= t.size() && goat_obliterator != -1)
    {
        cout << "Please choose a number in range to remove a goat, or enter -1 to recind your judgement";
        cin >> goat_obliterator;
    }
    if(goat_obliterator != -1)
    {
        int i = 0;
        for(Goat temp : t)
        {
            i++;
            if(i = goat_obliterator)
            {
                t.erase(temp);
            }
        }
        

        
    }

}

int main() 
{
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();
 
    list<Goat> check;
    add_goat(check, names, colors);
    add_goat(check, names, colors);
    add_goat(check, names, colors);
    display_trip(check);

    return 0;
}

//Newly added functions. This is the menu
int main_menu()
    {
        int input = 5;
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
        return 0;
    }







