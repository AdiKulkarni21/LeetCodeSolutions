class Solution {
public:
    int countOdds(int low, int high) {
        int n=high-low;
        if(n%2==0 && low%2==0)
            return n/2;
        return n/2+1;
    }
};