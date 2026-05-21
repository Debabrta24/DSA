// ocatl to binary convertion
#include <iostream>
using namespace std;
int main()
{
    int num, rem, ans = 0, mul = 1;
    cout << "Enter your number " << endl;
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = ans + mul * rem;
        mul = mul * 8;
    }
    cout << ans << endl;

    return 0;
}