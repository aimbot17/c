#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class bank
{
  private:
  char name[50];
  char acc_no[15];
  char acc_type[20];
  double balance;
  public:
    bank(const char* acc_name, const char* accNum, const char* type, double bal)
    {
      strcpy(name , acc_name);
      strcpy(acc_no , accNum);
      strcpy(acc_type , type);
      balance = bal;
    }
    void deposit(double amount)
    {
        if (amount > 0)
        {
          balance += amount;
          cout << "Deposited :" << amount << endl;
        }
        else
        {
         cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double amount)
    { 
        if (amount > 0 && amount <= balance)
        {
           balance -= amount;
           cout << "Withdrawn :" << amount << endl;
         }
        else
         {
           cout << "Insufficient funds or invalid withdrawal amount." <<endl;
         }
    }
    void display()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Account Type: " << acc_type << endl;
        cout << "Account Balance: " << balance << endl;
    }
};
int main()
{
    bank accounts[5] =
    {
         bank("Anshu Jha", "12345", "Savings", 1000.0),
         bank("Rahul Jha", "67890", "Current", 2500.0),
         bank("Sujal Jethva","54321", "Savings", 1500.0),
         bank("Mayank Daswani", "98765", "Current", 2000.0),
         bank("Salman khan", "13579", "Savings", 3000.0)
    };
     accounts[0].deposit(500.0);
     accounts[1].withdraw(200.0);
     accounts[2].deposit(1000.0);
     accounts[3].withdraw(300.0);
     accounts[4].withdraw(500.0);
    for (int i = 0; i < 5; i++)
    {
     cout << "Account " << i + 1 << " Information:" << endl;
     accounts[i].display();
     cout << endl;
    }
    getch();
    return 0;
}