// User function Template for C++
//link: https://www.geeksforgeeks.org/problems/string-manipulation3706/1**
//type: easy


class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        stack<string>s;
        int size=arr.size();
        
        for(int i=0;i<size;i++)
        {
            if(s.empty()) s.push(arr[i]);
            else{
                if(s.top()==arr[i]) s.pop();
                else s.push(arr[i]);
            }
        }
        return s.size();
        
    }
};
