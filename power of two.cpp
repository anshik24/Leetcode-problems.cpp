class Solution {
public:
    bool isPowerOfTwo(int n) {
         //   while(n%2==0)
           //     n/=2;
        // return (n==1);
        if(n<=0)
            return false;
        return (n &&!(n&n-1));
        
        
    }
};
