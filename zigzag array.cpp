/*

Input:
N = 7
Arr[] = {4, 3, 7, 8, 6, 2, 1}
Output: 3 7 4 8 2 6 1
Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1
just take into account that each odd index numbder elemnet 
is greter than its next and each even index number is smaller than its next
still need to understand concrete proof of this algorithm that why this will work for any 
given array
udpated here once done
*/

class Solution{
public:	
	// Program for zig-zag conversion of array
	void swap(int *a, int *b){
	    int temp=*a;
	    *a=*b;
	    *b=temp;
	}
	void zigZag(int a[], int n) {
	    // code here
	    int i;
	    for(i=0;i<n-1;i++){
	        
	        if(i%2==0){
    	        if(a[i]>a[i+1])
    	            swap(&a[i],&a[i+1]);
	        }
    	            
	        else{ 
	            if(a[i]<a[i+1])
	                swap(&a[i],&a[i+1]);
	        }
	    }
	    
	}
};