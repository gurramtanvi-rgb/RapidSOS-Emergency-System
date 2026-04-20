#include <iostream>
#include <fstream>
using namespace std;

// Function to add contact
void addContact() {
    ofstream file("contacts.txt", ios::app);

    string name;
    string phone;

    cout << "Enter Contact Name: ";
    cin >> name;

    cout << "Enter Phone Number: ";
    cin >> phone;

    file << name << " " << phone << endl;

    file.close();

    cout << "Contact saved successfully!\n";
}

// Function to view contacts
void viewContacts() {
    ifstream file("contacts.txt");

    string name, phone;

    cout << "\nSaved Contacts:\n";

    while (file >> name >> phone) {
        cout << "Name: " << name 
             << " Phone: " << phone << endl;
    }

    file.close();
}
