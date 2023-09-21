class Solution {
public:
    int sumBase(int n, int k) {
        int i, sum=0;
        while(n>=k)
        {
            i = n%k;
            n = n/k;
            sum += i;
        }
        if(n>0)
        {
            sum += n;
        }
        return sum;
    }
};