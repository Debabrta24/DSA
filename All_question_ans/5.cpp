//  convert decimal to hexa decimal
#include <iostream>
using namespace std;
int main()
{

    int num, rem, ans = 0, mul = 0;
    string ans2;
    cout << "enter your number " << endl;
    char arr[20];
    cin >> num;
    while (num > 0)
    {
        rem = num % 16;
        // cout << rem << endl;
        num = num / 16;
        // ans = rem * mul + ans;
        // // cout << ans << endl;
        if (rem >= 10 && rem < 16)
        {
            arr[mul] = (char)(rem + 83); // changing the number to  A  B C D E
        }
        else
        {
            arr[mul] = rem + '0'; // convertinng 1  to '1 '
        }
        mul++;
    }
    for (int i = mul-1; i >= 0; i--)
    {
        // cout << arr[i] << " ";
        ans2 += arr[i];
    }
    cout << ans2 << endl;

    return 0;
}