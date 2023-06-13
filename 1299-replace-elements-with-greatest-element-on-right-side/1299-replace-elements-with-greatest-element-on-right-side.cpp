class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        stack<int> s;
        int max =0;
        for(int i=arr.size()-1;i>0;i--){
          if(arr[i]>max)
          {   max=arr[i];
                         }
        s.push(max);
        }
        for(int i=0;i<arr.size()-1;i++){
            arr[i]=s.top();
            s.pop();
        }
            arr[arr.size()-1]=-1;
    return arr;    
    }
};