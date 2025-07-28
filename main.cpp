#include <iostream>
using namespace std;


int main()
{
    string password;
    int attempts = 0;
    bool access = false;

    while (attempts < 3) {
        cout << "Enter admin password: ";
        cin >> password;

        if (password == "cinema2025") {
            access = true;
            break;
        } else {
            cout << "Incorrect password! Try again.\n";
            attempts++;
        }
    }

    if (!access) {
        cout << "Access denied. Exiting program.\n";
        return 0;
    }

    cout << "\n Admin access granted. Customers can now buy tickets.\n";

    const float ticketPrice = 75.0;

    char repeat;
    do {
        string customerName;
        int ticketCount;
        float total = 0;

        cout << "\nWelcome to Cinema Box Office!\n";

        cout << "Ticket price: " << ticketPrice << " EGP per ticket.\n";

        cout << "Enter your name: ";
        cin >> customerName;

        cout << "Hello " << customerName << "! How many tickets would you like to buy? ";
        cin >> ticketCount;

        total = ticketCount * ticketPrice;

        cout << "\n==============================\n";
        cout << "Cinema Ticket Receipt\n";
        cout << "Customer: " << customerName << endl;
        cout << "Tickets: " << ticketCount << endl;
        cout << "Price per ticket: " << ticketPrice << " EGP\n";
        cout << "Total: " << total << " EGP\n";
        cout << "Enjoy your movie, " << customerName << "\n";
        cout << "==============================\n";

        cout << "\nWould you like to buy another ticket? (y/n): ";
        cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "\nThank you for visiting. See you again!\n";
    return 0;
}




	
	