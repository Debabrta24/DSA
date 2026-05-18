// creating 2D array by the help of pointer in stacak 

#include <iostream>
using namespace std;
int main()
{
    // we need to createv a array
    int n, m;
    cin >> n >> m; // n = row , m = col;
    int **ptr = new int *[n]; //
    // creating 2d array // also this is the very important steps
    for (int i = 0; i < n; i++)
    {
        ptr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ptr[i][j];
        }
    }

    // print the value
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    // realse memory
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            delete[] ptr[i];
            delete[] ptr;
        }
    }
    return 0;
}