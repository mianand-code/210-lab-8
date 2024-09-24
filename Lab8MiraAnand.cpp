// COMSC-210 | Lab 8 | Mira Anand
// Module 5
// Coded using Visual Studio Code on Mac

// This is a simple C++ program that receives user input via the console and neatly summarizes/outputs it
// User input will relate to name, age, current city location, and outdoor temperature (F) of current city location

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declaration of variables related to user input
    string name; // to hold the user's first and last name
    int age; // to hold the user's age
    string city; // to hold the user's current city location
    double temperature; // to hold the outdoor temperature (F) of the current city location

    // get user input for name
    cout << "Please enter your first and last name: ";
    getline(cin, name);
    // user input validation, to ensure that the user does not leave the field blank
    while (name.empty())
    {
        cout << "ERROR: The field cannot remain blank. Please enter your first and last name and press enter: ";
        getline(cin, name);
    }

    // get user input for age
    // user input validation, to ensure that the user enters a value that is greater than 0
    while (true)
    {
        cout << "Please enter your age: ";
        cin >> age;

        if (age <= 0)
            cout << "ERROR: Age must be a value that is greater than 0. Please try again." << endl;
        else
        {
            cin.ignore();
            break;
        }
    }

    // get user input for city
    cout << "Please enter the name of the city you are currently located in: ";
    getline(cin, city);
    // user input validation, to ensure that the user does not leave the field blank
    while (city.empty())
    {
        cout << "ERROR: The field cannot remain blank. Please enter your current city location and press enter: ";
        getline(cin, city);
    }

    // get user input for outdoor city temperature
    // prompting user to enter temperature in Fahrenheit
    cout << "Please enter a VALID current outdoor temperature (in Fahrenheit) of the city you are located in - decimals are allowed: ";
    cin >> temperature;
    cin.ignore();

    // neatly summarizing/outputting all results
    cout << name << " is " << age << " years old." << endl;
    cout << "It is " << temperature << " degrees Fahrenheit in " << city << "." << endl;

    return 0;
}