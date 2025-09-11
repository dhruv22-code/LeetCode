class Solution {
public:
    bool vowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c ==  'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
            return false;
    }
 string sortVowels(string s) {
    unordered_map<int, int> f;
    for (int i = 0; i < s.length(); i++) {
        if (vowel(s[i]))
            f[s[i]]++;
    }
    string ref = "AEIOUaeiou";

    for (int i = 0; i < s.length(); i++) {
        if (vowel(s[i])) {
            int j = 0;
            while (f[ref[j]] == 0)
                j++;
            s[i] = ref[j];
            f[ref[j]]--;
        }
    }
    return s;
}
}
;