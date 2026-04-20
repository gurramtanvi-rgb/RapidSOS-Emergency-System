#include <iostream>
using namespace std;

void showSafeRoute() {
    cout << "\nFinding Safe Route...\n";

    string blocked;
    cout << "Enter blocked route (example: Market-Hospital): ";
    cin >> blocked;

    if (blocked == "Market-Hospital") {
    cout << "Safe Route: Home -> School -> Shelter -> Hospital\n";
    }
    else if (blocked == "Home-Market") {
    cout << "Safe Route: Home -> School -> Hospital\n";
    }
}
