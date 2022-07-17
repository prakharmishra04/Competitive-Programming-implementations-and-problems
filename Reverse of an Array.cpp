#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr;
    for(int i=0 ; i<6; i++)
    {
        arr.push_back(i);
        cout<<arr[i];
    }
    for (auto i = arr.begin(); i != arr.end(); ++i)
        cout << *i << " ";
    return 0;
}