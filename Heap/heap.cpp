#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr << endl;

    float *ptr2 = new float;
    *ptr2 = 2.3;
    cout << *ptr2 << endl;
    int *ptr3 = new int[2];
    for (int i = 0; i < 2; i++)
    {
        ptr3[i] = i; // example values
    }
    for (int i = 0; i < 2; i++)
    {
        cout << ptr3[i] << endl; // example values
    }
    delete ptr;
    delete ptr2;
    delete[] ptr3;

    return 0;
}