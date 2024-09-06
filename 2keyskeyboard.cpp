










class Solution {
public:
    int minSteps(int n) {
//TC : O(√n)        
     int ans=0; // (This will store the minimum number of steps)
     //n= InputValue
     for(int i=2;i*i<=n;){
        if(n%i==0){
            ans+=i;  // Add i to the answer (this corresponds to i paste operations after copying)
            n/=i;  // Divide n by i to reduce the problem size
        }
        else {
            i++;   // If i is not a divisor, try the next integer
        }
     }
     if(n!=1){  // If n is still greater than 1 after the loop, it means n is prime or a prime factor remains
        ans+=n;   // Add n to the answer, as we need n paste operations after one copy
     }
     return ans;
    }
};