class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>rec;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        rec[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        vector<pair<int,string>> search=rec[key];
        int i =0;
        int j = search.size()-1;
        string result="";
        while(i<=j){
            int mid  = i+(j-i)/2;
            if(timestamp>=search[mid].first){
                result=search[mid].second;
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return result;
    }
};
