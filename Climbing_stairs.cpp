//question link: https://leetcode.com/problems/climbing-stairs/

//solution:
class Solution {
public:
    int climbStairs(int n) {       

        int f[n+2];

        f[0]=1;
        f[1]=1;

        for(int i=2;i<=n;i++)
        {
            f[i]=f[i-1]+f[i-2];
        }

        return f[n];
    }
};