class Solution {
public:
    
    void swap(vector<char>& s, int i, int j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
    void reverseString(vector<char>& s) {
        for (int i = 0, j = s.size() - 1; i < j; ++i, --j)
            swap(s, i, j);
    }
};
