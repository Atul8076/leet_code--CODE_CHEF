class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> jewelSet;

        
        for (char j : jewels) {
            jewelSet.insert(j);
        }

        int count = 0;

        
        for (char s : stones) {
            if (jewelSet.count(s)) { 
                count++;
            }
        }

        return count;
    }
};