class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {

        int n = drones.size();
        int curr_dist = 0;
        int dist = INT_MAX;
        int min_index = -1;

        for(int i=0;i<n;i++){
            curr_dist = abs(drones[i][0] - target[0]) + abs(drones[i][1] - target[1]);
            if(curr_dist <= drones[i][2] && curr_dist < dist){
                dist = min(curr_dist,dist);
                min_index = i;
            } 
        }
        return min_index; 
    }
};