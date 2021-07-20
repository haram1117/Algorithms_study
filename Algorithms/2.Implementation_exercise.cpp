#include <bits/stdc++.h>
using namespace std;

// 07. 럭키 스트레이트
/*
int main() {
	string n;
	cin >> n;
	int left = 0;
	int right = 0;
	for (int i = 0; i < n.size() / 2; i++) {
		left += n[i] - '0';
		right += n[n.size() - i - 1] - '0';
	}
	if (left == right)
		cout << "LUCKY";
	else
		cout << "READY";
}*/

// 08. 문자열 재정렬
/*
int main() {
	string s;
	cin >> s;
	vector<char> v;
	int sum = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9')
			sum += s[i] - '0';
		else
			v.push_back(s[i]);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}
	cout << sum;
}*/