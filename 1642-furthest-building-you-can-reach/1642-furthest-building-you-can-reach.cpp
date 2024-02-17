class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
      int count = 0;
        priority_queue<int, vector<int>, greater<int>>pq;

        for(int i = 1; i < heights.size(); i++){
            //case where we require a ladder or bricks
            if(heights[i] > heights[i-1]){
                int req_height = (heights[i] - heights[i-1]);

                pq.push(req_height);
                
                while(pq.size() > ladders){
                    bricks -= pq.top();
                    pq.pop();
                }
                if(bricks < 0){
                    break;
                }

            }
            count++;
        }

        return count;
    }
};