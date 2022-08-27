//https://practice.geeksforgeeks.org/contest/interview-series-64/problems/#
class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
       long long sum =0;
       for(int i=0;i<N;i++)
       sum+=arr[i];
       while(sum%N != 0){
           N--;
       }
       return N;
    }
};