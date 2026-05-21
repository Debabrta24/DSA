//  convert  hexa decimal to decimal
#include <iostream>
using namespace std;
int main()
{

    char num, rem, ans = 0, mul = 0;
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
            arr[mul] = (char)(rem + 55); // changing the number to  A  B C D E
        }
        else
        {
            arr[mul] = rem + '0'; // convertinng 1  to '1 '
        }
        mul++;
    }
    for (int i = mul; i >= 0; i--)
    {
        cout << arr[i] << " ";
        // ans += arr[i] + '0';
    }

    cout << ans << endl;
    return 0;
}