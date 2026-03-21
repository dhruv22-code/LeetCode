class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int ans = 0;
        vector<int>sum(matrix[0].size(), 0);
        for(int i = 0 ; i <matrix.size() ; i++ ){
            for(int j  =0 ; j < matrix[0].size() ; j++ ){
                if(matrix[i][j] == '0'){
                    sum[j] = 0;
                }else{
                    sum[j] += matrix[i][j] - '0';
                }
            }
           ans = max(ans,maxHist(sum) ) ;
        }
        return ans;
    }
    int maxHist(vector<int>sum){
        stack<int>st;
        vector<int>left(sum.size()), right(sum.size());
        for(int i = 0 ; i < sum.size() ; i++){
           while(!st.empty() && sum[st.top()] >= sum[i])st.pop();
           left[i] = st.empty() ? -1 :st.top();
           st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i = sum.size() - 1; i >= 0 ; i--){
           while(!st.empty() && sum[st.top()] >= sum[i])st.pop();
           right[i] = st.empty() ? sum.size() :st.top();
           st.push(i);
        }
        int ans = 0;
        for(int i = 0 ; i < sum.size() ; i++){
            int width = right[i] - left[i] - 1;
            ans = max(ans,width * sum[i] );
        }
        return ans;
    }
};