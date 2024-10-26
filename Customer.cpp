#include "Customer.hpp"
#include <iostream>
#include <string>

using namespace std;

void inputCustomerData(vector<Customer>& customers, int numCustomers) {
    for (int i = 0; i < numCustomers; ++i) {
        Customer customer;

        cout << "\nEntering data for customer #" << i + 1 << ":\n";
        cout << "Enter customer name: ";
        getline(cin, customer.name);

        cout << "Enter age: ";
        cin >> customer.age;
        
        // Use a dummy string to clear the newline from the buffer
        string dummy;
        getline(cin, dummy);

        cout << "Enter street: ";
        getline(cin, customer.address.street);

        cout << "Enter city: ";
        getline(cin, customer.address.city);

        cout << "Enter zip code: ";
        getline(cin, customer.address.zipCode);

        customers.push_back(customer);
    }
}

void displayCustomerData(const vector<Customer>& customers) {
    cout << "\n--- All Customer Data ---\n";
    for (const auto& customer : customers) {
        cout << "\nCustomer Name: " << customer.name << "\n";
        cout << "Age: " << customer.age << "\n";
        cout << "Address:\n";
        cout << "  Street: " << customer.address.street << "\n";
        cout << "  City: " << customer.address.city << "\n";
        cout << "  Zip Code: " << customer.address.zipCode << "\n";
    }
}
