Q1.Print Anagrams Together(GFG)

Expected Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
Expected Auxiliary Space: O(N*|S|), where |S| is the length of the strings.
 
class Solution{
 public:
   vector<vector<string>> Anagrams(vector<string>& string_list) {
       //code here
       vector<vector<string>> ans;
 unordered_map <string, vector<string>> mp;
       
 for(int i=0;i<string_list.size();i++) {
   string word = string_list[i];
   sort(word.begin(), word.end());
   mp[word].push_back(string_list[i]);
 }
       
 for(auto i : mp) {
   ans.push_back(i.second);
 }    
 return ans;
       
   }
};
