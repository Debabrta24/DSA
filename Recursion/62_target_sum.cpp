#include <iostream>
using namespace std;
bool find(int arr[], int index, int n, int target)
{
    if (target == 0)
    {
        return 1;
    }
    if (index == n || target < 0)
    {
        return 0;
    }

    return find(arr, index + 1, n, target) || find(arr, index + 1, n, target - arr[index]);
}
int main()
{
    int array[] = {2, 4, 1, 6, 1};
    int target = 4;
    cout << find(array, 0, 5, target) << "";
    return 0;
}