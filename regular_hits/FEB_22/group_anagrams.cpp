class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        unordered_map<string, vector<string>> str_bucket;

        for (string s : strs) {
            string key =s;
            sort(key.begin(),key.end());

            str_bucket[key].push_back(s);
        }

        for(auto &pair : str_bucket){
            ans.push_back(pair.second);
        }
        return ans;
    }
};
