// Convert decimal to Octal

#include <iostream>
using namespace std;
int main()
{
    int num, rem, ans = 0, mul = 1;
    cout << "Enter your number " << endl;
    cin >> num;
    while (num > 0)
    {
        rem = num % 8;
        num = num / 8;
        ans = ans + rem * mul;
        mul = mul * 10;
    }
    cout << ans << endl;
    return 0;
}
