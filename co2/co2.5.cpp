#include <iostream>
#include <string>
#include <ctime>

class Customer {
private:
    std::string name;
    std::string address;
    std::string contact;

public:
    Customer(const std::string& n, const std::string& addr, const std::string& cont)
        : name(n), address(addr), contact(cont) {}

    friend class Account;
};

class Transaction {
private:
    time_t timestamp;
    std::string type;
    double amount;

public:
    Transaction(const std::string& t, double amt) : type(t), amount(amt) {
        timestamp = time(NULL);  // Get current time
    }

    friend class Account;
};

class Account {
private:
    static int nextAccountNumber;
    int accountNumber;
    Customer* owner;
    double balance;

public:
    Account(Customer* cust) : owner(cust), balance(0.0) {
        accountNumber = nextAccountNumber++;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit of $" << amount << " successful.\n";
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            std::cout << "Insufficient funds for withdrawal.\n";
        }
    }

    double getBalance() const {
        return balance;
    }

    void printTransactionHistory() const {
        // Print transaction history for the account
        // (Implementation omitted for brevity)
    }

    friend void performTransaction(Account& acc, const std::string& type, double amount);
};

// Initialize static member variable
int Account::nextAccountNumber = 1000;

// Friend function to perform transactions on an account
void performTransaction(Account& acc, const std::string& type, double amount) {
    if (type == "deposit") {
        acc.deposit(amount);
    } else if (type == "withdrawal") {
        acc.withdraw(amount);
    } else {
        std::cout << "Invalid transaction type.\n";
    }

    // Create and record the transaction
    Transaction t(type, amount);
    acc.printTransactionHistory(); // Example: Print transaction history after each transaction
}

int main() {
    // Create a customer
    Customer customer("John Doe", "123 Main St", "john.doe@example.com");

    // Create an account for the customer
    Account account(&customer);

    // Perform transactions
    performTransaction(account, "deposit", 1000.0);
    performTransaction(account, "withdrawal", 500.0);

    // Print account balance
    std::cout << "Current balance: $" << account.getBalance() << std::endl;

    return 0;
}

