//#include <bits/stdc++.h>
//using namespace std;

//1. 모험가 길드
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v_arr;
//	int temp;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		v_arr.push_back(temp);
//	}
//
//	sort(v_arr.begin(), v_arr.end());
//
//	int people_num = 0;
//	int answer = 0;
//	for (int i = 0; i < n; i++) {
//		people_num++;
//		if (people_num >= v_arr.at(i)) {
//			answer++;
//			people_num = 0;
//		}
//	}
//	cout << answer;
//}

//2. 곱하기 혹은 더하기
//int main() {
//	string str;
//	cin >> str;
//	int	answer;
//	for (int i = 0; i < str.length() - 1; i++) {
//		if (i == 0)
//			answer = int(str.at(0) - 48);
//		if (str.at(i) == '0' || str.at(i) == '1') {
//			answer = answer + (int(str.at(i + 1))-48);
//		}
//		else {
//			answer = answer * (int(str.at(i + 1)) - 48);
//		}
//	}
//	cout << answer;
//}

//3. 문자열 뒤집기
//int main() {
//	string s;
//	cin >> s;
//	int count_0 = 0;
//	int count_1 = 0;
//	char current = s.at(0);
//	for (int i = 0; i < s.length(); i++) {
//		if (current == s.at(i)) {
//
//		}
//		else {
//			if (current == '0')
//				count_0++;
//			else
//				count_1++;
//		}
//		if (i == s.length() - 1) {
//			if (s.at(i) == '0')
//				count_0++;
//			else
//				count_1++;
//		}
//		current = s.at(i);
//	}
//	if (count_0 < count_1)
//		cout << count_0;
//	else
//		cout << count_1;
//}

//4. 만들 수 없는 금액
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v;
//	int temp;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		v.push_back(temp);
//	}
//	sort(v.begin(), v.end());
//
//	vector<int> v1;
//	int temp1 = 0;
//
//	for (int i = 0; i < n; i++) {
//		temp1 = v[i];
//		v1.push_back(v[i]);
//		for (int j = i + 1; j < n; j++) {
//			temp1 += v[j];
//			v1.push_back(temp1);
//		}
//	}
//	sort(v1.begin(), v1.end());
//	int answer = 1;
//	for (int i = 0; i < v1.size(); i++) {
//		if (v1[i] - answer >= 2) {
//			answer++;
//			break;
//		}
//		else {
//			answer = v1[i];
//		}
//	}
//	cout << answer;
//}

//5. 볼링공 고르기
//
//int main() {
//	int n;
//	int m;
//	cin >> n >> m;
//	vector<int> v;
//	int temp;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		v.push_back(temp);
//	}
//
//	sort(v.begin(), v.end());
//
//	int answer = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (v[i] != v[j]) {
//				answer++;
//			}
//		}
//	}
//
//	cout << answer;
//}

// 백준 No. 11047 동전 0
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int n;
//	int k;
//	cin >> n;
//	cin >> k;
//	vector<int> coin_price;
//	int temp;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		coin_price.push_back(temp);
//	}
//	sort(coin_price.begin(), coin_price.end(), greater<int>());
//	int index = 0;
//	int count = 0;
//	while (k != 0) {
//		if (coin_price[index] <= k) {
//			k -= coin_price[index];
//			count++;
//		}
//		else
//			index++;
//	}
//	cout << count;
//}

// 백준 No. 11399 ATM
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector<int> p;
//	int temp;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		p.push_back(temp);
//	}
//	sort(p.begin(), p.end());
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += p[i] * (n - i);
//	}
//	cout << sum;
//}

//백준 No. 2217 로프
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v;
//	int temp;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		v.push_back(temp);
//	}
//	sort(v.begin(), v.end(), greater<int>());
//	int answer =0;
//	for (int i = 0; i < n; i++) {
//		if (answer <= (i + 1) * v[i])
//			answer = (i + 1) * v[i];
//	}
//	cout << answer;
//}

//백준 No. 11000 강의실 배정
#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<vector<int>> v(n);
	priority_queue<int, vector<int>, greater<int> > pq;
	int min, max;
	for (int i = 0; i < n; i++) {
		cin >> min >> max;
		v[i].push_back(min);
		v[i].push_back(max);
	}
	sort(v.begin(), v.end());
	pq.push(v[0][1]);
	int start;
	int end;
	for (int i = 1; i < n; i++) {
		start = v[i][0];
		end = v[i][1];
		if (pq.top() > start) {
			pq.push(end);
		}
		else {
			pq.pop();
			pq.push(end);
		}
	}

	cout << pq.size();
}