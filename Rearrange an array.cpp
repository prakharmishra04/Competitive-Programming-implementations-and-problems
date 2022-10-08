//Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively
// i.e first element should be max value, second should be min value, third should be second max, 
//fourth should be second min and so on.
//Time complexity O(N) and space O(1) that is no extra space based on n

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	long long i,Q=arr[n-1]+1,min_ptr=0,max_ptr=n-1;
    	for(i=0;i<n;i++){
    	    if(i%2==0)
    	        arr[i]+=arr[max_ptr--]%Q*Q;
    	    else
    	        arr[i]+=arr[min_ptr++]%Q*Q;
    	}
    	for(i=0;i<n;i++)
    	    arr[i]=arr[i]/Q;
    	 
    }
};