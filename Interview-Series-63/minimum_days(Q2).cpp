//https://practice.geeksforgeeks.org/contest/interview-series-63/problems/#
class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
       int count =0;
       for(int i=0;i<N-1;i++){
           if(S[i] == S[i+1])
           count++;
       }
       if(count==0) return count;
       for(int i=0;i<N;i++){
           if(P[i] == 0 && S[1] == S[0]){
           count--;
          
           }
           else if(P[i] == N-1 && S[N-1] == S[N-2]){
           count--;
           }
           else {
               if(S[P[i]] == S[P[i]-1] && S[P[i]] == S[P[i]+1])
               count-=2;
               else if(S[P[i]] == S[P[i]-1] || S[P[i]] == S[P[i]+1])
               count--;
           }
            S[P[i]] = '?';
           if(count==0)
           return i+1;
       }
    }
};
