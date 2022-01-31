class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank = 0, use = 0, index = 0;
        
        for (int i=0; i<gas.size(); i++) {
            tank += gas[i] - cost[i];
            use += gas[i] - cost[i];
            if (use < 0) {
                use = 0;
                index = i+1;
            }
        }
        return tank < 0 ? -1 : index;
    }
};
