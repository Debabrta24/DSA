// Print n’th Fibonacci number.
//fibonnachi of a numeber 
#include <iostream>
using namespace std;
int fibonachi(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonachi(num - 1) + fibonachi(num - 2);
    }
}
int main()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << fibonachi(i) << endl;
    }

    return 0;
}


//pdf 16 done 