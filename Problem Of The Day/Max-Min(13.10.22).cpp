//https://practice.geeksforgeeks.org/problems/max-min/1

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int mini = INT_MAX;
    	int maxi = INT_MIN;
    	for(int i=0;i<N;i++){
    	    mini = min(mini,A[i]);
    	    maxi = max(maxi,A[i]);
    	}
    	return maxi + mini;
    }

};