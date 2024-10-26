#include "Customer.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numCustomers;

    cout << "How many customers would you like to enter? ";
    cin >> numCustomers;
    
    string dummy;
    getline(cin, dummy);  // clear the newline from the buffer

    vector<Customer> customers;
    inputCustomerData(customers, numCustomers);
    displayCustomerData(customers);

    return 0;
}
