#include <iostream>
using namespace std;

class base
{
public:
    void askname()
    {
        cout << "What's your Name?" << endl;
    }
};
class base1
{
public:
    void askname()
    {
        cout << "Can I know your name?" << endl;
    }
};
class derived : public base, public base1
{
    int name;

public:
    void askname()
    {
        base1::askname();
        base::askname();
    }
};
//********************************************************************
//Example 2
// class test1
// {
// public:
//     void name()
//     {
//         cout << "I am Krishala Khatiwada" << endl;
//     }
// };
// class test2 : public test1
// {
// public:
//     void name()
//     {
//         cout << "I am Shradha Khatiwada" << endl;
//     }
// };

int main()
{ // Example 1 of ambiguity
    base objbase;
    base1 objbase1;
    derived d;
    objbase.askname();
    objbase1.askname();
    d.askname();
    d.derived::askname();

    // Example 2 of ambiguity
    //         test1 t;
    //         t.name();

    //         test2 t2;
    //         t2.name();

    return 0;
}