class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>rec;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        rec[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string s= "";
        vector<pair<int,string>>r=rec[key];
        int n = r.size();
        if(n==0)return s;
        int i =0;
        int j = n-1;
        while(i<=j){
            int mid= i+(j-i)/2;
            if(timestamp>=r[mid].first){
                s=r[mid].second;
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return s;
    }
};
