//C++ Encapsulation

#include <iostream>

using namespace std;

class Employee {
    private:
    // private attribute
    int salary;

    public:
    // setter
    void setSalary(int s) {
        salary = s;
    }

    // getter
    int getSalary() {
        return salary;
    }
    
};

int main ()
{

    Employee myObj;
    myObj.setSalary(3400);
    cout << myObj.getSalary();

    return 0;

}
