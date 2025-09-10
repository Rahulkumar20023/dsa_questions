// User function Template for C++
//link: https://www.geeksforgeeks.org/problems/make-the-array-beautiful--170647/1**
//type:easy

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>s;
        int size=arr.size();
        for(int i=0;i<size;i++)
        {
            if(s.empty()) s.push(arr[i]);
            else{
                if(s.top()*arr[i]<0) s.pop();
                else if(s.top()==0 && arr[i]<0) s.pop();
                else if(s.top()<0 && arr[i]==0) s.pop();
                else s.push(arr[i]);
            }
        }
        stack<int>s2;
        while(!s.empty()){
            s2.push(s.top());
            s.pop();
        }
        vector<int>ans;
        while(!s2.empty()){
            ans.push_back(s2.top());
            s2.pop();
        }
        //ans.reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
