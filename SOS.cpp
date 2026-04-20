#include <iostream>
#include <fstream>
using namespace std;

void triggerSOS() {
    ifstream file("contacts.txt");
    ofstream log("logs.txt", ios::app);

    string name, phone;

    cout << "\n🚨 SOS ACTIVATED!\n";
    cout << "Sending alerts to:\n";

    while (file >> name >> phone) {
        cout << "Contact: " << name << " Phone: " << phone << endl;
        log << "Alert sent to: " << name << " " << phone << endl;
    }

    cout << "\nEmergency Numbers:\n";
    cout << "Police: 100\nAmbulance: 108\nFire: 101\n";

    log << "SOS Triggered\n\n";

    file.close();
    log.close();
}
