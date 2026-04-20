#include <iostream>
using namespace std;

// Function declarations
void addContact();
void viewContacts();
void triggerSOS();
void showSafeRoute();

int main() {
    int choice;

    while (true) {
        cout << "\n--- RapidSOS System ---\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Trigger SOS\n";
        cout << "4. Find Safe Route\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
    case 1:
        addContact();
        break;
    case 2:
        viewContacts();
        break;
    case 3:
        triggerSOS();
        break;
    case 4:
        showSafeRoute();
        break;
     case 5:
       return 0;
    default:
        cout << "Invalid choice\n";
}
    }
}
