/*Develop a bank account management system using nested structures.
Create the following structures:

Transaction
Transaction ID
Amount
Transaction Type (Deposit / Withdraw)

BankAccount
Account Holder Name
Account Number
Current Balance
Array of 10 transactions

The program should:
Allow deposit and withdrawal operations.
Record each transaction in the transaction list.
Display the complete transaction history.
Display the highest transaction amount recorded.*/


#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

// ============ENUM FOR TRANSACTION TYPE==========
enum transactiontype
{
    Deposit,
    Withdraw
};
// ==========TRANSACTION STRUCTURE=========
struct transaction
{
    int transaction_ID;
    float amount;
    transactiontype type; // Deposit or withdraw
};
// =========BANK ACCOUNT STRUCTURE========
struct bankaccount
{
    string accout_name;
    long long accout_number;
    float current_balance;
    transaction trans[10];
    int trans_count = 0;
};

// =========DEPOSIT FUNCTION=========
void deposit(bankaccount *acc)
{
    if (acc->trans_count >= 10)
    {
        cout << "Transaction limit Reached!" << endl;
        return;
    }

    float amount;
    cout << "Enter Amount to Deposit: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid Amount! Must be greater than 0!" << endl;
        return;
    }
    acc->current_balance += amount;

    // TRANSACTION RECORD
    acc->trans[acc->trans_count].transaction_ID = acc->trans_count + 1;
    acc->trans[acc->trans_count].amount = amount;
    acc->trans[acc->trans_count].type = Deposit;
    acc->trans_count++;
    cout << "Amount of " << amount << " " << "Deposited Successfully!" << endl;
}
// ========WITHDRAW FUNCTION========
void withdraw(bankaccount *acc)
{
    if (acc->trans_count >= 10)
    {
        cout << "Transaction limit Reached!" << endl;
    }

    float amount;
    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid Amount! Must be greater than 0." << endl;
    }
    if (amount > acc->current_balance)
    {
        cout << "Insufficient Balance!" << endl;
    }

    acc->current_balance -= amount;

    // TRANSACTION RECORD
    acc->trans[acc->trans_count].transaction_ID = acc->trans_count + 1;
    acc->trans[acc->trans_count].amount = amount;
    acc->trans[acc->trans_count].type = Withdraw;
    acc->trans_count++;
    cout << "Amount of " << amount << " " << "Withdraw Successfully!" << endl;
}
// ========TRANS HISTORY FUNCITON========
void display_trans_history(bankaccount *acc)
{
    if (acc->trans_count == 0)
    {
        cout << "No Transaction History!" << endl;
        return;
    }

    cout << "\nTransaction History\n";
    cout << left << setw(10) << "ID"
         << setw(15) << "Type"
         << setw(15) << "Amount" << endl;

    cout << "-----------------------------------\n";

    for (int i = 0; i < acc->trans_count; i++)
    {
        cout << left << setw(10) << acc->trans[i].transaction_ID;

        if (acc->trans[i].type == Deposit)
            cout << setw(15) << "Deposit";
        else
            cout << setw(15) << "Withdraw";

        cout << setw(15) << acc->trans[i].amount << endl;
    }
}
// =======HIGHEST TRANSACTIONS FUNCTION=======
void display_highest_trans(bankaccount *acc)
{
    if (acc->trans_count == 0)
    {
        cout << "No Transaction History!" << endl;
    }

    float maximum_amount = numeric_limits<float>::lowest();
    int max_index = 0;
    for (int i = 0; i < acc->trans_count; i++)
    {
        if (acc->trans[i].amount > maximum_amount)
        {
            maximum_amount = acc->trans[i].amount;
            max_index = i;
        }
    }

    cout << "\nHighest Transaction\n";
    cout << "----------------------\n";

    cout << "Transaction ID : " << acc->trans[max_index].transaction_ID << endl;

    if (acc->trans[max_index].type == Deposit)
        cout << "Type           : Deposit" << endl;
    else
        cout << "Type           : Withdraw" << endl;

    cout << "Amount         : " << acc->trans[max_index].amount << endl;
}
// ==========MAIN FUNCTION==========
int main()
{
    bankaccount acc;

    // TAKING INPUT

    cout << "Enter Account Holder Name: ";
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, acc.accout_name);
    cout << "Enter Bank Account Number: ";
    cin >> acc.accout_number;
    cout << "Enter Initial Balance: ";
    cin >> acc.current_balance;

    int choice;
    do
    {
        cout << "\n==============BANK MENU==============";
        cout << "\n1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Transaction History\n";
        cout << "4. Disppay Highest Transaction\n";
        cout << "5. Display Current Balance\n";
        cout << "6. Exit\n";
        cout << "\nEnter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            deposit(&acc);
            break;
        }
        case 2:
        {
            withdraw(&acc);
            break;
        }
        case 3:
        {
            display_trans_history(&acc);
            break;
        }
        case 4:
        {
            display_highest_trans(&acc);
            break;
        }
        case 5:
        {
            cout << "Current Balance: " << acc.current_balance;
            break;
        }
        case 6:
        {
            cout << "Exiting the Program!" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice! Try Again........." << endl;
        }
        }
    } while (choice != 6);

    return 0;
}