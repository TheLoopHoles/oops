#include <iostream>
#include <string>

using namespace std;

// Class definition
class Employee {
private:
    string name;
    int id;
    double salary;

public:
    // Constructor
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    // Getter methods
    string getName() const { 
        return name;
         }
         
    int getId() const { 
        return id;
         }

    double getSalary() const { return salary; }

    // Method to display employee information
    void display() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Creating objects of the Employee class
    Employee emp1("John Doe", 1, 50000);
    Employee emp2("Jane Smith", 2, 60000);

    // Displaying employee information
    emp1.display();
    cout << endl;
    emp2.display();

    return 0;
}