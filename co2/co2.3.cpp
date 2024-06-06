#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;

public:
    void get_product() {
        std::cout << "Enter product name: ";
        std::cin >> name;
        std::cout << "Enter product price: ";
        std::cin >> price;
    }

    void print_product() const {
        std::cout << "Product Name: " << name << ", Price: " << price << std::endl;
    }
};

int main() {
    int n;
    std::cout << "Enter the number of products: ";
    std::cin >> n;

    Product *products = new Product[n];

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter details for product " << i + 1 << ":\n";
        products[i].get_product();
    }

    std::cout << "Product details:\n";
    for (int i = 0; i < n; ++i) {
        products[i].print_product();
    }

    delete[] products;
    return 0;
}
