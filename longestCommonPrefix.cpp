string longestCommonPrefix(vector<string>& s) {
	
	string prefix;
	char c;
	int n = s.size();

	for (int j = 0; j < s[0].length(); j++) {
		c = s[0][j];
		for (int i = 0; i < n; i++) {
			if (c != s[i][j]) {
				return prefix;
			}
		}
		prefix += c;
	}
	return prefix;
}