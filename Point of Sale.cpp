#include <iostream>
using namespace std;

// Entity 1: Product
class Product {
public:
    int productID;
    string name;
    float price;

    void inputProduct() {
        cout << "Enter product ID: ";
        cin >> productID;
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter product price: ";
        cin >> price;
    }

    void getProductDetails() {
        cout << "Product ID: " << productID << ", Name: " << name << ", Price: $" << price << endl;
    }

    void updatePrice(float newPrice) {
        price = newPrice;
        cout << "Product price updated to $" << price << endl;
    }

    void applyDiscount(float percentage) {
        price = price - (price * percentage / 100);
        cout << "Discount applied. New price: $" << price << endl;
    }
};

// Entity 2: Customer
class Customer {
public:
    int customerID;
    string name;
    float balance;

    void inputCustomer() {
        cout << "Enter customer ID: ";
        cin >> customerID;
        cout << "Enter customer name: ";
        cin >> name;
        cout << "Enter customer balance: ";
        cin >> balance;
    }

    void viewDetails() {
        cout << "Customer ID: " << customerID << ", Name: " << name << ", Balance: $" << balance << endl;
    }

    void makePurchase(float amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << name << " made a purchase of $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void addLoyaltyPoints(float points) {
        balance += points;
        cout << "Added loyalty points: $" << points << ". New balance: $" << balance << endl;
    }
};

// Entity 3: Transaction
class Transaction {
public:
    int transactionID;
    Product products[2];
    float totalAmount;

    void addProductToTransaction(Product product, int index) {
        products[index] = product;
        cout << "Added product: " << product.name << " to the transaction." << endl;
    }

    void calculateTotal() {
        totalAmount = 0;
        for (int i = 0; i < 2; i++) {
            totalAmount += products[i].price;
        }
        cout << "Total amount for transaction: $" << totalAmount << endl;
    }

    void printReceipt() {
        cout << "Receipt:\n";
        for (int i = 0; i < 2; i++) {
            products[i].getProductDetails();
        }
        cout << "Total: $" << totalAmount << endl;
    }
};

int main() {
    // Create products and customer
    Product product1, product2;
    Customer customer1;
    Transaction transaction1;

    // Input product details
    cout << "Enter product 1 details:\n";
    product1.inputProduct();
    
    cout << "Enter product 2 details:\n";
    product2.inputProduct();

    // Input customer details
    cout << "Enter customer details:\n";
    customer1.inputCustomer();

cout<<"----------------------------------------------------"<<endl;
    // Add products to transaction and calculate total
    transaction1.addProductToTransaction(product1, 0);
    transaction1.addProductToTransaction(product2, 1);
    transaction1.calculateTotal();

    // Print receipt
    transaction1.printReceipt();

    // Customer makes purchase
    customer1.makePurchase(transaction1.totalAmount);

    // Apply discount on the first product
    product1.applyDiscount(10);

    // Add loyalty points to customer
    customer1.addLoyaltyPoints(20);

    return 0;
}

