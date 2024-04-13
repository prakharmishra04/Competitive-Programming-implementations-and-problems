/*
Given an array of size N-1 such that it only
contains distinct integers in the range of 1 to N. Find the missing element.
time complexity:O(N)
space complexity:O(1)
1,2,3,4,5,7,9,8
number = n*(n+1)/2 - sum 
*/
#include <bits/stdc++.h>
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        long long i,sum=0;
        for(i=0;i<n-1;i++){
            sum+= array[i];
        }
        return(n*(n+1)/2-sum);
    }
};