
// vector
// #include <iostream>

// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vec={10,11,12};

//     // cout << vec.size() << endl;
//     // cout << vec.capacity() << endl;
//     for (int i = 0; i < vec.size(); ++i)
//     {
//         cout << vec[i] << endl;
//     }
//     return 0;
// }

// //

// list........................................................................

// #include <iostream>
// using namespace std;
// #include <list>
// int main()
// {
//     list<int> I = {1, 2, 3}; // also you can u
//     for (int val : I)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// .....................................deque......................................................................
// #include <iostream>
// #include <deque>
// using namespace std;
// #include <list>
// int main()
// {
//     deque<int> d = {1, 2, 3, 4, 5};
//     for (int val : d)
//     {
//         cout << val << " ";
//     }
//     cout << endl;
//     return 0;
// }

//

// pair methode
// #include <iostream>
// using namespace std;
// int main()
// {
//     pair<string, int> p = {"shradha", 5};

//     cout << p.first << endl;
//     cout << p.second << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include<vector>
// int main()
// {
//     vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};
//     vec.push_back({4,5}); //for adding
//     for (auto p : vec)
//     {
//         cout << p.first << " " << p.second << endl;
//     }

//     return 0;
// }

// // stack................................................

// // push, emplace
// // top
// // pop
// // size
// // empty
// // swap copy element fron s1 stack to s2 stack
// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     while (!s.empty())
//     {
//         cout << s.top() << endl;
//         s.pop();
//     }

//     cout << "top= " << s.top();

//     return 0;
// }

// .................queue............................................

#include <iostream>
#include <queue>
using namespace std;
int main()
{

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}

//priority queue ...................................
#include <iostream>
using namespace std;
int main()
{


     return 0;
}