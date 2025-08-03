class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        vector<int> temp(landStartTime.size());
        int ans=INT_MAX;
        for(int i=0;i<landStartTime.size();i++)
            {
                temp[i]=landStartTime[i]+landDuration[i];
            }
        sort(temp.begin(),temp.end());
        for(int i=0;i<waterDuration.size();i++)
            {
                auto it=lower_bound(temp.begin(),temp.end(),waterStartTime[i]);
                if(it==temp.end()) ans=min(ans,waterStartTime[i]+waterDuration[i]);
                else
                {
                    int index=it-temp.begin();
                    if(index>0) ans=min(ans,waterStartTime[i]+waterDuration[i]);
                    else ans=min(ans,temp[index]+waterDuration[i]);
                }
            }
        vector<int> temp1(waterStartTime.size());
        for(int i=0;i<waterStartTime.size();i++)
            {
                temp1[i]=waterStartTime[i]+waterDuration[i];
            }
        sort(temp1.begin(),temp1.end());
        for(int i=0;i<landDuration.size();i++)
            {
                auto it=lower_bound(temp1.begin(),temp1.end(),landStartTime[i]);
                if(it==temp1.end()) ans=min(ans,landStartTime[i]+landDuration[i]);
                else
                {
                    int index=it-temp1.begin();
                    if(index>0) ans=min(ans,landStartTime[i]+landDuration[i]);
                    else ans=min(ans,temp1[index]+landDuration[i]);
                }
            }
        return ans;
    }
};