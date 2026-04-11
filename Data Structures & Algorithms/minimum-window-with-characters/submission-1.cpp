class Solution {
public:
    string minWindow(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n2>n1)return "";
        unordered_map<char,int>rec;
        for(char&c:t)rec[c]++;
        int count=t.size();
        int i =0;int j =0;
        int len=INT_MAX;
        int start=0;
        while(j<n1){
            if(rec[s[j]]>0)count--;
            rec[s[j]]--;
            while(count==0){
                if(len>(j-i+1)){
                    start=i;
                    len=j-i+1;
                }
                rec[s[i]]++;
                if(rec[s[i]]>0)count++;
                i++;
            }
            j++;
        }
        return len==INT_MAX?"":s.substr(start,len);
    }
};
