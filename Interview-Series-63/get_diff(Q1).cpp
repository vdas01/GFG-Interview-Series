class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        vector<int>pre(N,0);
        vector<int>post(N,0);
        int distinct=0;
        map<int,bool>m;
        for(int i=0;i<N;i++){
           pre[i] = distinct;
           if(!m[A[i]]){
               distinct++;
               m[A[i]]=true;
           }
        }
        distinct =0;
        m.clear();
        for(int i=N-1;i>=0;i--){
            post[i] = distinct;
            if(!m[A[i]]){
                distinct++;
                m[A[i]]=true;
            }
        }
        vector<int>v;
        for(int i=0;i<pre.size();i++){
            v.push_back(pre[i]-post[i]);
        }
        return v;
    }
};
//Using Set:-
//https://practice.geeksforgeeks.org/contest/interview-series-63/problems/#
class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        vector<int>pre(N,0);
        vector<int>post(N,0);
        unordered_set<int>s;
        for(int i=0;i<N;i++){
           pre[i] = s.size();
           s.insert(A[i]);
        }
        s.clear();
      
        
        for(int i = N-1;i>=0;i--){
            post[i] = s.size();
            s.insert(A[i]);
        }
       
        vector<int>v;
        for(int i=0;i<pre.size();i++){
            v.push_back(pre[i]-post[i]);
        }
        return v;
    }
};