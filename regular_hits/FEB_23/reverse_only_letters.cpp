class Solution {
public:
    string reverseOnlyLetters(string s) {
        int len =s.length();

        int first =0;
        int last =len-1;

        while(first < last){
            while(first < len && !isalpha(s[first]))
                first++;
            while(last > -1 && !isalpha(s[last]))
                last--;
            if(first < last ){
                swap(s[first],s[last]);
                first++;
                last--;
            }
        }

        return s;
    }
};
