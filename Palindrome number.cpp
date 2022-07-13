class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int remainder;
        int m=x;
        while(x!=0){
            remainder=x%10;
            rev=rev   * 10 + remainder;
            x/=10;
            
        }
        if(m!=rev || m<0)
            return false;
        else
            return true;
    }
};

