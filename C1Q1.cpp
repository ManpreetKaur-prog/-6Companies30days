class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<string, vector<string>> m;
        int i=0;
        for(i=0;i<string_list.size();i++)
        {
            string s=string_list[i];
            sort(s.begin(),s.end());
            m[s].push_back(string_list[i]);
        }
        vector<vector<string>> result(m.size());
        i=0;
        for(auto x:m)
        {
            auto v=x.second;
            for(int  j=0;j<v.size();j++)
            {
                result[i].push_back(v[j]);
            }
            i++;
        }
       return(result); 
    }
};
