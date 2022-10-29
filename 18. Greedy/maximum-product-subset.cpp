class Solution{
    public:
    long long int findMaxProduct(vector<int>&a, int n){
        //Write your code here 
        int mod=1000000007;
        if(n==1) return a[0];
        int zeroc=0;
        int negc=0;
        int maxn = INT_MIN;
        long long int prod = 1;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                zeroc++;
                continue;
            }
            if(a[i]<0){
                negc++;
                maxn = max(maxn, a[i]);
            }
            prod = (prod*a[i])%mod;
        }
        if(zeroc == n) return 0;
        
        else if(negc==1 and zeroc+negc==n) return 0;
        else if(negc&1){
            prod = prod/maxn;
        }
        return prod;
    }
};

