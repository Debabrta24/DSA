#include <iostream>
using namespace std;
int main()
{

    // int a = 10;
    // int *p = &a;

    // cout << a << endl;
    // cout << &a << endl; // this will print adress
    // cout << p << endl;  // this also print adress
    // cout << &p << endl; // this is printing adrsss p , p is also storing adress of a
    // cout << *p << endl; // this is printig value of p
    // {
    //     // *p = 20; // if here we chaneg adrss it is changing value from everywhere
    //     a=20;
    // }
    // cout << a << endl;

    char arr[5] = "1234";
    char *ptr = arr;
    // cout << ptr << endl;         // this is print value
    // cout << &arr << endl;        // this is print adress
    // cout << (void *)arr << endl; // this is also print adress
    // cout << (void *)ptr << endl; // this is also print adress

    char name = 'a';
    cout << &name << endl;
    cout << (void *)&name << endl; // this is printing adddress
    return 0;
}