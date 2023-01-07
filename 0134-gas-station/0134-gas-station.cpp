class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int Fuel=0,fuel_rem=0,Tcost=0, SP=0;
        for(int i=0;i<gas.size();i++)
        {
            Fuel+=gas[i];
            Tcost+=cost[i];
              fuel_rem+=gas[i]-cost[i];
            if(fuel_rem<0)
            {
                SP=i+1;
                fuel_rem=0;
            }
        }
        if(Fuel<Tcost)
            return -1;
        else 
            return SP;    
    }
};
