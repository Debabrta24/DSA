#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *p = &a;

    cout << a << endl;
    cout << &a << endl; // this will print adress
    cout << p << endl;  // this also print adress
    cout << &p << endl; // this is printing adrsss p , p is also storing adress of a
    cout << *p << endl; // this is printig value of p
    {
        // *p = 20; // if here we chaneg adrss it is changing value from everywhere  
        a=20;
    }
    cout << a << endl;
    return 0;
}