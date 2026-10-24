class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> m1;
        map<char, int> m2;
        
        for(auto a : s){
            m1[a]++;
        }
        for(auto b : t){
            m2[b]++;
        }
        
        char abc = ' ';
        for(int i = 0; i < t.size(); i++){
            
            if(m1[t[i]] != m2[t[i]]){
                abc = t[i];
                break;
            }
        }
        return abc;
    }
};
