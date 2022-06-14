#include <bits/stdc++.h>
using namespace std;

void test_case() {
	string s;
	cin >> s;
	bool checker = true;
	int cnt = 0;
	char prev = '?';
	for(int i = 0; i < (int) s.size(); i++) {
		if(s[i] == prev || prev == '?') {
			cnt++;
		}
		else {
			checker &= (cnt > 1);
			cnt = 1;
		}
		prev = s[i];
	}
	checker &= (cnt > 1);
	cout << (checker ? "YES" : "NO") << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T = 1;
	cin >> T;
	for(int tc = 1; tc <= T; tc++) {
		test_case();
	}
}
