#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        long long i,j,t,temp;
        for (t=0;t<(n-n%k);t+=k){
            i=t;
            j=t+k-1;
            while(i<=j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;
            }
        }
        i=n-n%k;
        j=n-1;
        while(i<=j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
};