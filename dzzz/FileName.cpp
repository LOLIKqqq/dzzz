#include <iostream>
#include <string>

using namespace std;


class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void celebrateBirthday() {
        age++;
        cout << name << " is celebrating a birthday! Now " << name << " is " << age << " years old." << endl;
    }
};

int main() {
   
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    
    cout << "Initial Information:" << endl;
    person1.displayInfo();
    person2.displayInfo();
    cout << endl;

    
    person1.celebrateBirthday();
    person2.celebrateBirthday();

    return 0;
}