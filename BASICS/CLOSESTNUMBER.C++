class Solution {
public:
    int closestNumber(int n, int m) {
        // lower multiple
        int q = n / m;
        int a = q * m;
        
        // if exact multiple
        if (a == n)
            return a;
        
        // upper or lower based on sign
        int b;
        if ((n < 0 && m > 0) || (n > 0 && m < 0))
            b = (q - 1) * m;
        else
            b = (q + 1) * m;
        
        // compare distances
        if (abs(n - a) < abs(n - b))
            return a;
        else if (abs(n - a) > abs(n - b))
            return b;
        else
            return abs(a) > abs(b) ? a : b;
    }
};
