/*
    Student ID: CST2309191
    Tutorial 7
    Question 3
*/
#include <iostream>
#include <string>

using namespace std;

class PersonData {
    private:
        string lastName;
        string firstName;
        string address;
        string city;
        string state;
        string zip;
        string phone;
    public:
        // Default constructor
        PersonData() : lastName(""), firstName(""), address(""), city(""), state(""), zip(""), phone("") {}
    
        // Parameterized constructor
        PersonData(string ln, string fn, string addr, string c, string s, string z, string p) 
            : lastName(ln), firstName(fn), address(addr), city(c), state(s), zip(z), phone(p) {}
    
        // Accessors (getters)
        string getLastName() const { return lastName; }
        string getFirstName() const { return firstName; }
        string getAddress() const { return address; }
        string getCity() const { return city; }
        string getState() const { return state; }
        string getZip() const { return zip; }
        string getPhone() const { return phone; }
        // Mutators (setters)
        void setLastName(string ln) { lastName = ln; }
        void setFirstName(string fn) { firstName = fn; }
        void setAddress(string addr) { address = addr; }
        void setCity(string c) { city = c; }
        void setState(string s) { state = s; }
        void setZip(string z) { zip = z; }
        void setPhone(string p) { phone = p; }
        // Function to display person data
        void display() const {
            cout << "Name: " << firstName << " " << lastName << endl;
            cout << "Address: " << address << ", " << city << ", " << state << " " << zip << endl;
            cout << "Phone: " << phone << endl;
        }
};

class CustomerData : public PersonData {
    private:
        string customerNumber;
        bool mailingList;
    public:
        // Default constructor
        CustomerData() : PersonData(), customerNumber(""), mailingList(false) {}
    
        // Parameterized constructor
        CustomerData(string ln, string fn, string addr, string c, string s, string z, string p, 
                     string custNum, bool mailList) 
            : PersonData(ln, fn, addr, c, s, z, p), customerNumber(custNum), mailingList(mailList) {}
    
        // Accessors (getters)
        string getCustomerNumber() const { return customerNumber; }
        bool isMailingList() const { return mailingList; }
    
        // Mutators (setters)
        void setCustomerNumber(string custNum) { customerNumber = custNum; }
        void setMailingList(bool mailList) { mailingList = mailList; }
    
        // Function to display customer data
        void display() const {
            PersonData::display();  // Call base class display
            cout << "Customer Number: " << customerNumber << endl;
            cout << "Mailing List: " << (mailingList ? "Yes" : "No") << endl;
        }
};

int main() {
    // Create an instance of CustomerData
    CustomerData customer("John", "Doe", "123 Main St", "Anytown", "CA", "12345", "555-1234", 
                          "CUST001", true);
    
    // Display the information
    customer.display();
    
    return 0;
}