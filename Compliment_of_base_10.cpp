//question: https://leetcode.com/problems/complement-of-base-10-integer/

//solution:
class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        
        if(n==0){
            return 1;
        }
        
        while(m!=0){

           mask = (mask<<1) | 1;
           m = m>>1;
        }
        
        n = ~n;
        
        return (n&mask);
    }
};