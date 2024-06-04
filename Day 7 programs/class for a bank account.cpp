#include <iostream>
#include <string>

class BankAccount {
  private:
    std::string accountNumber;
    double balance;

  public:
    BankAccount(const std::string &accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {
        std::cout << "Constructor called" << std::endl;
    }
    ~BankAccount() {
        std::cout << "Destructor called" << std::endl;
    }
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit Amount: " << amount << std::endl;
        std::cout << "Deposit successful. Current balance: " << balance << std::endl;
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal Amount: " << amount << std::endl;
            std::cout << "Withdrawal successful. Current balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient balance. Cannot withdraw." << std::endl;
        }
    }
};
int main() {
    BankAccount account("SB-123", 1000);
    account.deposit(1500);
    account.withdraw(750);
    account.withdraw(1800);

    return 0;
}
