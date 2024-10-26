#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
using namespace std;

struct Address {
    string street;
    string city;
    string zipCode;
};

struct Customer {
    string name;
    int age;
    Address address;
};

void inputCustomerData(vector<Customer>& customers, int numCustomers);
void displayCustomerData(const vector<Customer>& customers);

#endif
