/* child inherits from parent, parent inherits from grand parents
, so some properties of grandparent comes in child too */

#include <iostream>
using namespace std;

class GrandParent{
    public :
    string name;

    void get_name(string n)
    {
        name = n;
    }

    void put_name() 
    {
        cout << "Name is : " << name;
    }
};

class Parent : public GrandParent
{
    public:
    int age;
    void get_age(int a)
    {
        age = a;
    }

    void put_age()
    {
        cout << "Age is : " << age;
    }
};

class Child: public Parent 
{
    public :
    string gender;
    void get_gender(string g)
    {
        gender = g; 
    }

    void put_gender()
    {
        cout << "Gender us :" << gender;
    }
};

int main()
{
    Child c;

    c.get_name("Sigham");
    c.get_age(25);
    c.get_gender("Male");

    c.put_age();
    c.put_gender();
    c.put_name();

    return 0;
}