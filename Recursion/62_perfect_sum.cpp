#include <iostream>
using namespace std;
int subset(int arr[], int index, int target, int n)
{
    if (index == n)
    {
        return target== 0;
    }

    return (subset(arr, index + 1, target, n) + subset(arr, index + 1, target - arr[index], n));
}
int main()
{
    int array[] = {1, 4, 1, 6, 1};
    int target = 1;
    int n = 5;
    cout << subset(array, 0, target, n) << "";
    return 0;
}


// for zero output is zero cause it is returing an empty {}, this treat as zero 