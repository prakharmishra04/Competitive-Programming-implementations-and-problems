#include <bits/stdc++.h>
using namespace std;
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> leader;
        long long currentlead = -1;
        for(long long i = n-1; i>=0; i--){
            if(a[i]>=currentlead){
                currentlead = a[i];
                leader.push_back(currentlead);
            }
        }
        reverse(leader.begin(), leader.end());
        return leader;
    }
};

int main(){
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        int a[n];

        for (long long i= 0 ; i<n; i++)
        {
            cin >>a[i];
        }
        Solution obj;
        vector<int> v = obj.leaders(a,n);
        for(auto it = v.begin(); it!=v.end(); it++)
        {
            cout<< *it << " ";
        }
        cout<< "\n";

    }
return 0;
}