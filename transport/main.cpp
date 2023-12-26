#include <iostream>
#include "Car.h"
#include "Ship.h"
#include "Plane.h"
#include "Tram.h"
#include "Moto.h"
using namespace std;

int main() {

    Transport* transportPtr = nullptr;
    int userChoice;

    cout << "Choose a type of vehicle:\n\[1] Car\t\t[2] Ship\t[3] Plane\t[4] Tram\t[5] Motorcycle" <<  endl;
    cout << "Enter your choice: ";
    cin >> userChoice;

    switch (userChoice) {
    case 1:
        transportPtr = new Car();
        transportPtr->input();
        break;
    case 2:
        transportPtr = new Ship();
        transportPtr->input();
        break;
    case 3:
        transportPtr = new Plane();
        transportPtr->input();
        break;
    case 4:
        transportPtr = new Tram();
        transportPtr->input();
        break;
    case 5:
        transportPtr = new Moto();
        transportPtr->input();
        break;
    default:
        cout << "Invalid choice!\n";
        break;
    }

    cout << endl;

    if (transportPtr != nullptr) transportPtr->print();

}