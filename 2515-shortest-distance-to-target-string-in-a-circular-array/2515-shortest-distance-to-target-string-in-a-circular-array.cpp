class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        for(int dist = 0 ; dist < words.size(); dist++){
            if(words[(startIndex - dist + n)%n] == target || words[(startIndex + dist)%n] == target )return dist;
        }
        return -1;
    }
};