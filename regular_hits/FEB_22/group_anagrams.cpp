class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        unordered_map<string, vector<string>> str_bucket;

        int n = strs.size();
        for (string s : strs) {
            string key =s;
            sort(key.begin(),key.end());

            str_bucket[key].push_back(s);
        }

        for(auto it=str_bucket.begin(); it != str_bucket.end(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};
