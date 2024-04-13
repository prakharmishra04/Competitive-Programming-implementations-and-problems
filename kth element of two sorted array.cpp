/*
Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. 
The task is to find the element that would be at the k’th position of the final sorted array.
when both are merged.
Expected Time Complexity: O(Log(N) + Log(M))
Expected Auxiliary Space: O(Log (N))
*/
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int arr1pointer = 0,arr2pointer = 0, kthElement= 0;
        while(arr1pointer+arr2pointer < k && arr1pointer<n && arr2pointer<m){
            if (arr1[arr1pointer]<=arr2[arr2pointer]&& arr1pointer < n){
                kthElement = arr1[arr1pointer];
                arr1pointer++;

            }
            else{
                kthElement = arr2[arr2pointer];
                arr2pointer++;
            }
        }
        if(arr1pointer < n && arr2pointer < m )
        return kthElement;
        else if(!arr1pointer < n)
        return arr2[k-arr1pointer-1+arr2pointer];
        else
        return arr1[k-arr2pointer-1+arr1pointer];
    }
};