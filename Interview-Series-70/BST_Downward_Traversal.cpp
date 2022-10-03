//https://practice.geeksforgeeks.org/contest/interview-series-70/problems/#

class Solution{
public:
    int result(Node *root,int index){
        if(!root) return 0;
        int sum=0;
         if(index == 0)
         sum+=root->data;
         sum+= result(root->left,index-1);
         sum+= result(root->right,index+1);
         return sum;
        // if(index == 0 ) return root->data + result(root->left,index-1) + result(root->right,index+1);
        // return result(root->left,index-1) +result(root->right,index+1);
    }
    int verticallyDownBST(Node *root,int target){
          if(!root)
          return -1;
       if(root->data == target)
       return result(root->left,-1) + result(root->right,1);
       else if(root->data < target)
       return verticallyDownBST(root->right,target);
       else 
       return verticallyDownBST(root->left,target);
    }
};


