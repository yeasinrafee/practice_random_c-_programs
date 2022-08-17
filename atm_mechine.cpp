#include <iostream>
using namespace std;

void menu()
{
    cout << "**** MENU ****" << endl;
    cout << "1. Balance" << endl;
    cout << "2. Diposite" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "**** **** ****" << endl;
}

int main()
{
    // Menu;
    // Balance, Diposite, Withdraw, Exit;
    int option;
    double balance = 500.00;

    do
    {
        menu();
        cout << "Option: " << endl;
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
            cout << balance << " $" << endl;
            break;
        case 2:
            double diposite;
            cout << "Enter your diposite amount: " << endl;
            cin >> diposite;
            balance += diposite;
            break;
        case 3:
            double withdraw;
            cout << "Enter your withdraw amount: " << endl;
            cin >> withdraw;
            if (withdraw <= balance)
            {
                balance -= withdraw;
            }
            else
            {
                cout << "Not enough money." << endl;
            }
        default:
            cout << "Invalid option. Try again." << endl;
        }
    } while (option != 4);
    return 0;
}