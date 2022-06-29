class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(int i=0;i<31;i++){
            if(n%2)
                count++;
            n/=2;
        }
        return count;
    }
};
