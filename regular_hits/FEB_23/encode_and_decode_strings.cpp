class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_input;
        
        for(string s: strs){
            int len =s.length();

            encoded_input +=to_string(len);
            encoded_input +=' ';
            reverse(s.begin(),s.end());
            encoded_input +=s;
            encoded_input +=' ';
        }

        return encoded_input;
    }

    string extractNthString(string &s,int &i){
        string str_len;
        while(s[i] != ' '){
            str_len +=s[i];
            i++;
        }
        i++;

        int len =stoi(str_len);
        string res;
        while(len--){
            res +=s[i];
            i++;
        }
        i++;

        reverse(res.begin(),res.end());
        return res;
    }
    vector<string> decode(string s) {
        int i =0;
        vector<string> decoded_input;

        int n =s.length();
        for(int i=0; i<n; ){
            decoded_input.push_back(extractNthString(s,i));
        }

        return decoded_input;
    }
};
