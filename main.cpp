#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "\n--- RapidSOS System ---\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Trigger SOS\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Add Contact selected\n";
                break;
            case 2:
                cout << "View Contacts selected\n";
                break;
            case 3:
                cout << "SOS Triggered!\n";
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
}
