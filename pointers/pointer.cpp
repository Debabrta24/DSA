#include <iostream>
using namespace std;

int  fun(int *p){
    *p=*p+2;
}
int main()
{
    int n = 10;
    cout << n << endl;
    int *p1 = &n; // single pointer
    cout << p1 << endl;
    int **p2 = &p1; // double pointer
    cout << p2 << endl;
    int ***p3 = &p2; // tripp;e pointer
    cout << p3 << endl;
    fun(p1);
    cout <<  n<< endl;
    return 0;
}