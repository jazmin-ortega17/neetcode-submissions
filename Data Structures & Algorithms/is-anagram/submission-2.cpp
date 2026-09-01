class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<int, int> firstMap;
        for (char letter : s) {
            ++firstMap[letter];
        }
        unordered_map<int, int> secondMap;
        for (char letter : t) {
            ++secondMap[letter];
        }
        for (const auto& [key, value] : secondMap) {
            if (firstMap[key] != secondMap[key]) {
                return false;
            }
        }
        for (const auto& [key, value] : secondMap) {
            if (secondMap[key] != firstMap[key]) {
                return false;
            }
        }
        return true;
    }
};
