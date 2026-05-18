#include <iostream>
using namespace std;
#include <vector>
void print(int arr[], int index, int n, int sum, vector<int> &ans)
{

    if (index == n)
    {
        ans.push_back(sum);
        // cout << sum << endl;
        return;
    }
    // no included
    print(arr, index + 1, n, sum, ans);

    // included
    print(arr, index + 1, n, sum + arr[index], ans);
}
int main()
{
    vector<int> ans;
    int arr[] = {1, 2, 3, 4};

    print(arr, 0, 4, 0, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}  