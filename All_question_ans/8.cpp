// ad two bit number
#include <iostream>
#include <string.h>
using namespace std;
int bitAdd(string a, string b)
{
    int j = a.length() - 1;
    int k = b.length() - 1;
    int arr[20], max = 0;
    for (int p = j; j <= 0; j--)
    {
        for (int q = k; k <= 0; k--)
        {
            arr[max] = a[p] + b[k];
            max++;
        }
    }
    return arr[0];
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    int j = a.length() - 1;
    int k = b.length() - 1;
    if (j > k)
    {
        int n = bitAdd(a, b);
    }
    else
    {
        int n = bitAdd(b, a);
    }

    cout << a[j] << endl;
    return 0;
}