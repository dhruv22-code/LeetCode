class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int low = 1, high = *max_element(piles.begin(), piles.end()); 
        long long int mini = high;
        
        while(low <= high) {
            long long int mid = low + (high - low) / 2;
            
            if(check(piles, mid, h)) { 
                mini = mid;  
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }
        
        return mini;
    }

    bool check(const vector<int>& piles, long long int mid, long long int h) {
        long long int time = 0;
        for(int pile : piles) {
            time += (pile + mid - 1) / mid; 
        }
        return time <= h;
    }
};
