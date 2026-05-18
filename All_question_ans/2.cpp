// convert binary  to decimal
#include <iostream>
using namespace std;
int main()
{

    int num = 1101;
    int ans = 0, rem, mul = 1;
    while (num > 0)
    {
        rem = num % 10;
        // cout << rem << endl; // 1 0 1 1  this way this willl print
        num = num / 10;     
        // cout << num << endl; // this will print 110 11 1 0
        ans = ans + rem * mul;
        mul = mul * 2;
    }
    cout << ans << endl;
    return 0;
}