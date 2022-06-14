#include <iostream>

using namespace std;

class A {  
public:  
    void final_print() // function that call display  
    {  
        display();  
    }  
    
    void display() // the display function  
    {  
        cout << "Printing from the base class" << endl;  
    }  

    virtual void printing() {
        cout << "In base" << endl;
    }
};

class B : public A // B inherit a publicly  
{  
public:  
    void display() // B's display  
    {  
        cout << "Printing from the derived class" << endl;  
    }  

    void printing() override {
        cout << "In derived" << endl;
    }
};  

int main()  
{  
    A obj1; // Creating A's pbject  
    obj1.final_print(); // Calling final_print

    B obj2;  
    A *obj3 = &obj2; // calling b  
    obj3->final_print();

    obj2.final_print();

    // Virtual:
    obj1.printing();
    obj2.printing();
    obj3->printing();

    // For virtual functions, the dynamic type function will be called
    // For nonvirtual functions, the static type function will be called

    return 0;  
}