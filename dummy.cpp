#include <iostream>
#include <vector>
#include <string>


// Function to display account information
void displayAccount(const BankAccount& account) {
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Account Holder Name: " << account.accountHolderName << endl;
    cout << "Balance: $" << account.balance << endl;
}

// Function to deposit money into an account
void deposit(BankAccount& account, double amount) {
    account.balance += amount;
    cout << "$" << amount << " deposited successfully." << endl;
}

// Function to withdraw money from an account
void withdraw(BankAccount& account, double amount) {
    if (amount <= account.balance) {
        account.balance -= amount;
        cout << "$" << amount << " withdrawn successfully." << endl;
    } else {
        cout << "Insufficient funds. Withdrawal failed." << endl;
    }
}

int main() {
    vector<BankAccount> accounts;

    while (true) {
        cout << "Welcome to the Dummy Bank!" << endl;
        cout << "1. Create a new account" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Display account information" << endl;
        cout << "5. Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                BankAccount newAccount;
                cout << "Enter account number: ";
                cin >> newAccount.accountNumber;
                cout << "Enter account holder name: ";
                cin >> newAccount.accountHolderName;
                newAccount.balance = 0.0;
                accounts.push_back(newAccount);
                cout << "Account created successfully." << endl;
                break;
            }
            case 2: {
                string accountNumber;
                double amount;
                cout << "Enter account number: ";
                cin >> accountNumber;
                cout << "Enter deposit amount: $";
                cin >> amount;
                for (auto& account : accounts) {
                    if (account.accountNumber == accountNumber) {
                        deposit(account, amount);
                        break;
                    }
                }
                break;
            }
            case 3: {
                string accountNumber;
                double amount;
                cout << "Enter account number: ";
                cin >> accountNumber;
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                for (auto& account : accounts) {
                    if (account.accountNumber == accountNumber) {
                        withdraw(account, amount);
                        break;
                    }
                }
                break;
            }
            case 4: {
                string accountNumber;
                cout << "Enter account number: ";
                cin >> accountNumber;
                for (const auto& account : accounts) {
                    if (account.accountNumber == accountNumber) {
                        displayAccount(account);
                        break;
                    }
                }
                break;
            }
            case 5:
                cout << "Exiting...";
                return 0;
            default:
                cout << "Invalid choice. Please select a number from 1 to 5." << endl;
        }
    }

    return 0;
}
