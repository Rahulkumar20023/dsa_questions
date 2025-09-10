//link: https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1
//type:medium


class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        stack<int>s;
        int size=arr.size();
        vector<int>ans(size,-1);
        //int j=0;
        
        for(int i=0;i<size;i++)
        {
            if(s.empty())
            {
                s.push(i);
                
            }
            
            else if(arr[s.top()]>=arr[i])
            {
                s.push(i);
                //j=i;
            }
            else if(arr[i]>arr[s.top()])
            {
                ans[s.top()]=arr[i];
                s.pop();
                i--;
                
            }
        }
        return ans;
    }
};
