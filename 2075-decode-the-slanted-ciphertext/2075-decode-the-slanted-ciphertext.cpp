class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        string s;int cnt = 0;
        for(int i = 0; i < encodedText.size(); i++){
            if(encodedText[i] != ' ')cnt++;
        }
        int l = encodedText.size()/rows;
        for(int i = 0 ; i < l; i++){
            for(int j = 0; j < rows; j++){
                if(i + j*(l + 1) > encodedText.size())return s;
                if(encodedText[i + j*(l + 1)] != ' ')cnt--;
                s += encodedText[i + j*(l + 1)];
                if(cnt == 0)return s;
            }
        }
        return s;
    }
};