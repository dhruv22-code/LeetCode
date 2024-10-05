class Solution {
public:
    int findComplement(int num) {
        string s;
        while(num > 0){
            s += (num % 2) + '0';
            num = num/2;
            
        }
        reverse(s.begin(), s.end());
        int count = 0;
        int i = 0;
        while(s[i] == '0'){
            count++;
            i++;
        }
        s.erase(0, count);
        for(int i= 0 ; i < s.length() ; i++){
            if(s[i] == '0')s[i] = '1';
            else s[i] = '0';
        }
        int a = stoi(s, 0 , 2);
        return a;
    }
};