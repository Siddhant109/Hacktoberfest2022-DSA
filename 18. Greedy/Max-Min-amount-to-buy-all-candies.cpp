{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies+N);
        int mi=0;
        int ma=0;
        int i=0;
        int j=N-1;
        while(i<=j){
            mi+=candies[i];
            i++;
            j=j-K;
        }
        reverse(candies,candies+N);
         i=0;
         j=N-1;
        while(i<=j){
            ma+=candies[i];
            i++;
            j=j-K;
        }
        return {mi, ma};
    }
};
