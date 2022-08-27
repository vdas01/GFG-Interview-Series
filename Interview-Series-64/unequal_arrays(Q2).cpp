//https://practice.geeksforgeeks.org/contest/interview-series-64/problems/#
class Solution {
  public:
    long long solve(int N, vector<int> &A, vector<int> &B) {
        // code here
        vector<int>f_a[2];
        vector<int>f_b[2];
        int tsum=0;
        for(int i=0;i<N;i++){
            tsum += A[i] - B[i];
            f_a[A[i]&1].push_back(A[i]);
            f_b[B[i]&1].push_back(B[i]);
        }
        if(tsum!=0 || f_a[0].size() != f_b[0].size() || f_a[1].size()!=f_b[1].size())
        return -1;
        long long count=0;
        for(int i=0;i<2;i++){
            sort(f_a[i].begin(),f_a[i].end());
            sort(f_b[i].begin(),f_b[i].end());
            for(int j=0;j<f_a[i].size();j++){
                count+= (long long)abs(f_a[i][j] - f_b[i][j])/2L;
            }
        }
        return count/2;
    }
};