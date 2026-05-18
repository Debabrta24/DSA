// Convert Decimal to Binary


#include <iostream>
using namespace std;
int main()
{
    int x, rem, mul = 1, ans = 0;
    cout << "enter your number ";
    cin >> x;

    while (x > 0)
    {
        rem = x % 2;
        x = x / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << ans << endl; // ans of decimal to binary
}
