/*Create a structure BankAccount with:

Account Holder Name
Account Number
Balance

Create functions for:

Deposit
Withdraw
Display Balance*/

#include <iostream>
using namespace std;
// ======BANK ACCOUNT STRUCTURE======
struct bankAccount
{
    string account_name;
    long long accountnumber;
    float balance;
};
// ========FUNCTONS=======
void deposit(bankAccount *acc)
{
    float amount;
    cout << "\nEnter Amount to deposit: ";
    cin >> amount;
    acc->balance += amount;
    cout << "Amount Deposit Successfully!" << endl;
}
void withdraw(bankAccount *acc)
{
    float amount;
    cout << "\nEnter Amount to Withdraw: ";
    cin >> amount;
    if (amount > acc->balance)
    {
        cout << "Insufficient Balance in Account!" << endl;
    }
    else
    {
        acc->balance -= amount;
        cout << "Amount Withdraw Successfully!" << endl;
    }
}
void display_Balance(bankAccount *acc)
{
    cout << "\nAccount Holder Name: " << acc->account_name << endl;
    cout << "Account Number: " << acc->accountnumber << endl;
    cout << "Current Balance: " << acc->balance << endl;
}
// =======MAIN FUNCTIONS======
int main()
{
    bankAccount acc;

    // INPUT
    cout << "\nEnter Account Name: ";
    getline(cin, acc.account_name);
    cout << "Enter Account Number: ";
    cin >> acc.accountnumber;
    cout << "Enter Balance: ";
    cin >> acc.balance;

    // CALLING FUNCTIONS BY REFERENCE
    deposit(&acc);
    withdraw(&acc);
    display_Balance(&acc);

    return 0;
}