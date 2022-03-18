/*
 * Date  : 2022-03-18 15:43:34
 * Author: Min-Ye Zhang
 * Usage : 
 * TODO  : 
 */
#include <iostream>
#include <cstring>

class MyClass
{
    private:
        int index_;
        double m_val;
    public:
        MyClass(int=0, double=0.0);
        void set_index(int);
        void set_val(double);
        void show(void) const;
        int get_index(void);
        double get_val(void);
        ~MyClass(void);
};

MyClass::MyClass(int index, double val)
{
    index_ = index;
    m_val = val;
}

MyClass::~MyClass()
{
    using std::cout, std::endl;
    cout << "Deleting MyClass: index = " << index_ << ", val = " << m_val << endl;
}

void MyClass::set_index(int i)
{
    index_ = i;
}

void MyClass::set_val(double v)
{
    m_val = v;
}

void MyClass::show(void) const
{
    using std::cout, std::endl;
    cout << index_ << " " << m_val << endl;
}

int MyClass::get_index(void)
{
    return index_;
}

double MyClass::get_val(void)
{
    return m_val;
}

int main(int argc, char** argv)
{
    {
        MyClass mc1; // implicit constructor with default values
        MyClass mc2(1, 20.0); // explicti constructor
        MyClass mc3 = MyClass(2, 30.0); // intialize with rvalue
        MyClass mc4 = {3, 40.0}; // list initialization
        MyClass *mcp[4] = {&mc1, &mc2, &mc3, &mc4};
        for (auto i : mcp) {
            i->show();
        }
        // calling destructors
        // note the order, as mc-s are in the stack.
    }
    const MyClass mc5(5, 50.0);
    mc5.show(); // valid, as show is a const member function
    // mc5.get_val(); // invalid
    return 0;
}

