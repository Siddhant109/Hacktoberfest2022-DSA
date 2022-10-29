
class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int x = S/7;
        int y = S-x;
        int food_req = S*M;
        int days = food_req/N;
        if(food_req%N != 0) days++;
        if(days <= y) return days;
        return -1;
    }
};
