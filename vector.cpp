#include <bits/stdc++.h>
using namespace std;
#include <vector>
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    //iterate through vector-
    //method-1
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
    sort(v.begin(),v.end());
    //m-2
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
        cout << *it << endl;

    //m-3
    for (auto element : v) //element are not iterator its the element of vector
        cout << element << endl;

    v.pop_back();

    vector<int> v2(3, 50);
    swap(v, v2);

    for (auto &i : v)
        cout << i << endl;
    for (auto e : v2)
        cout << e << endl;

    sort(v.begin(), v.end());
}