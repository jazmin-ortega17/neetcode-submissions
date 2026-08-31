
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        for (int num : nums) {
            if (mySet.contains(num) == true) {
                return true;
            } else {
                mySet.insert(num);
            }
        }
        return false;
    }
};