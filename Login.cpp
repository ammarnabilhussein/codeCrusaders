#include <iostream>
#include "Specification.h"
using namespace std;

user* login(user* head)
{
    string uname, pass;
    cout << "Enter username: ";
    cin >> uname;
    cout << "Enter password: ";
    cin >> pass;
    user* temp = head;
    while (temp != nullptr)
    {
        if (temp->getUserName() == uname && temp->getPassword() == pass)
        {
            cout << "Login successful" << endl;
            return temp;
        }
        temp = temp->next;
    }
    cout << "Invalid username or password." << endl;
    return nullptr;
}