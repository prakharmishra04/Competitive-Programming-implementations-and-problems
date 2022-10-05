class  Solution{
 public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if (n==1)
            return 1;
        long long st=0, ed=n-1,suml=0,sumr=0;
        suml+=a[st];
        sumr+=a[ed];
        while(st+1<=ed-1){
            if(suml==sumr && st+1==ed-1)
                return st+2;
            else if(suml<=sumr)
                suml+=a[++st];
            else
                sumr+=a[--ed];
        }
        return -1;
    }

};