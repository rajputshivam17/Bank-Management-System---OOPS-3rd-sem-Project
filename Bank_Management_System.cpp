#include <iostream>
#include <vector>
using namespace std;

class Bank_Account {
private:
    string name;
    int accountNum;
    double balance;

public:
    Bank_Account(string n, int ac, double bal) {
        name = n;
        accountNum = ac;
        balance = bal;
    }

    string getName() { return name; }
    int getAccountNum() { return accountNum; }
    double getBalance() { return balance; }

    void deposit(double amount) {
        balance += amount;
        cout << "\t\t" << amount << " Deposited Successfully...!!" << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "\t\t Withdraw Successful...!!" << endl;
        } else {
            cout << "\t\t Insufficient Balance...!!" << endl;
        }
    }
};

class BankManagement {
private:
    vector<Bank_Account*> accounts;  // storing pointers instead of copies

public:
    ~BankManagement() { // destructor to free memory
        for (auto acc : accounts)
            delete acc;
    }

    void AddAccount(string name, int accountNum, double balance) {
        accounts.push_back(new Bank_Account(name, accountNum, balance));
    }

    void showAllAccount() {
        cout << "\n\t\t All Account Holders:\n";
        for (int i = 0; i < accounts.size(); i++) {
            cout << "----------------------------------------\n";
            cout << "Name: " << accounts[i]->getName() << endl;
            cout << "Account Number: " << accounts[i]->getAccountNum() << endl;
            cout << "Balance: " << accounts[i]->getBalance() << endl;
        }
        cout << "----------------------------------------\n";
    }

    Bank_Account* findAccount(int accountNum) {
        for (auto acc : accounts) {
            if (acc->getAccountNum() == accountNum)
                return acc;
        }
        return NULL;
    }

    void SearchAccount(int accountNum) {
        Bank_Account* acc = findAccount(accountNum);
        if (acc) {
            cout << "\n\t\t Account Details:\n";
            cout << "Name: " << acc->getName() << endl;
            cout << "Account Number: " << acc->getAccountNum() << endl;
            cout << "Balance: " << acc->getBalance() << endl;
        } else {
            cout << "\t\tAccount not found!" << endl;
        }
    }
};

int main() {
    BankManagement bank;
    int choice;
    string op;

    do {
        system("cls");
        cout << "\t\t Bank Management System\n";
        cout << "\t\t Main Menu \n";
        cout << "\t\t1. Create Account\n";
        cout << "\t\t2. Show All Accounts\n";
        cout << "\t\t3. Search Account\n";
        cout << "\t\t4. Deposit Money\n";
        cout << "\t\t5. Withdraw Money\n";
        cout << "\t\t6. Exit\n";
        cout << ".........................................\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string name;
            int accountNum;
            double balance;
            cout << "Enter the Name: ";
            cin >> name;
            cout << "Enter the Account Number: ";
            cin >> accountNum;
            cout << "Enter the initial Balance: ";
            cin >> balance;
            bank.AddAccount(name, accountNum, balance);
            cout << "\t\tAccount Created Successfully...!\n";
            break;
        }

        case 2: {
            bank.showAllAccount();
            break;
        }

        case 3: {
            int accountNum;
            cout << "Enter Account Number: ";
            cin >> accountNum;
            bank.SearchAccount(accountNum);
            break;
        }

        case 4: {
            int accountNum;
            double amount;
            cout << "Enter Account Number to Deposit Money: ";
            cin >> accountNum;
            Bank_Account* account = bank.findAccount(accountNum);
            if (account != NULL) {
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                account->deposit(amount);
            } else {
                cout << "Account not found...!";
            }
            break;
        }

        case 5: {
            int accountNum;
            double amount;
            cout << "Enter Account Number to Withdraw Money: ";
            cin >> accountNum;
            Bank_Account* account = bank.findAccount(accountNum);
            if (account != NULL) {
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                account->withdraw(amount);
            } else {
                cout << "Account not found...!";
            }
            break;
        }

        case 6:
            exit(0);
        }

        cout << "\n\t\tDo you want to continue [Yes/No]: ";
        cin >> op;
    } while (op == "Yes" || op == "yes");

    return 0;
}

