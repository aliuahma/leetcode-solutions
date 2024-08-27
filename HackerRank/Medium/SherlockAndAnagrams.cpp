int sherlockAndAnagrams(string s) {
    int count = 0;
    unordered_map<string, int> subStringMap;
    for(int i = 0; i < s.length(); i++) {
        string subStringSoFar = "";
        for(int j = i; j < s.length(); j++) {
            subStringSoFar += s[j];
            if(subStringSoFar.length() > 1) 
                sort(subStringSoFar.begin(), subStringSoFar.end());
            subStringMap[subStringSoFar]++;  
        }
    }
    for(const auto& subString : subStringMap) {
        count += subString.second * (subString.second - 1) / 2;
    }
    return count;
}
