// letcode prblem
#include <iostream>
#include <vector>
using namespace std;
// void permut(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> visited)
// {
//     // base condition
//     if (visited.size() == temp.size())
//     {
//         ans.push_back(temp);
//         return;
//     }
//     for (int i = 0; i < visited.size(); i++)
//     {
//         if (visited[i] == 0)
//         {
//             visited[i] = 1;
//             temp.push_back(arr[i]);
//             permut(arr, ans, temp, visited);
//             visited[i] = 0;
//             temp.pop_back();
//         }
//     }
// }

void better_permut(vector<int> &arr, vector<vector<int>> &ans,int index)
{
    
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[i], arr[index]);
        better_permut(arr, ans,index+1);
        swap(arr[i], arr[index]);
    }
}
int main()
{

    // int arr[] = {1, 2, 3};
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(3, 0);
    better_permut(arr, ans,0);

    for (int j = 0; j < ans.size(); j++)
    {
        for (int i = 0; i < ans[j].size(); i++)
        {
            cout << ans[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}