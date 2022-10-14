//https://practice.geeksforgeeks.org/problems/maximize-the-sum-of-selected-numbers-from-an-array-to-make-it-empty0836/1

class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        
        map<int,int>m;
        vector<int>v(n);
        sort(a,a+n);
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        int sum = 0;
        for(int i=n-1;i>=0;i--){
            int x = a[i];
            int y = a[i]-1;
            if(m[x]>=1){
                m[x]--;
                sum+=x;
                 if(m[y]>=1){
                m[y]--;
            }
            }
           
        }
        return sum;
    }

};