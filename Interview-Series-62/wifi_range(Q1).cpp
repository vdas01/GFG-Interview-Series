//https://practice.geeksforgeeks.org/contest/interview-series-62/problems/#
class Solution{
    public:
    bool wifiRange(int N, string S, int X){
       int range[N+2] = {0};
       for(int i=0;i<N;i++){
           if(S[i] == '1'){
               int l = i-X;
               if(l <0) l = 0;
               int r= i+X;
               if(r>N) r = N;
               range[l]++;
               range[r+1]--;
           }
       }
       for(int i=1;i<N;i++) range[i]+=range[i-1];
       for(int i=0;i<N;i++) if(range[i] == 0) return false;
       return true;
    } 
};