#include<iostream>
using namespace std;

//Greedy Algorithm - Practice2: 큰 수의 법칙
//int main() {
//	int n;
//	int m;
//	int k;
//	cin >> n >> m >> k;
//	int* list = new int[n];
//	int temp;
//	int remember = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		list[i] = temp;
//	}
//	
//	int max = list[0];
//	for (int i = 0; i < n; i++) {
//		if (list[i] > max) {
//			max = list[i];
//			remember = i;
//		}
//	}
//	int delta = max - list[0];
//	int delta_index = 0;
//	for (int i = 0; i < n; i++) {
//		if (i != remember) {
//			if (max - list[i] < delta) {
//				delta = max - list[i];
//				delta_index = i;
//			}
//		}
//	}
//	int answer = 0;
//	int count = m;
//	while (count > 0) {
//		if (count > k) {
//			answer += max * k;
//			answer += list[delta_index];
//			count = count - k - 1;
//		}
//		else if (count == k) {
//			answer += max * k;
//			count -= k;
//		}
//		else {
//			answer += max * count;
//			count -= count;
//		}
//		cout << answer << " ";
//	}
//}

//int main() {
//	int n;
//	int m;
//	int k;
//	cin >> n >> m >> k;
//	int* list = new int[n];
//	int temp;
//	int remember = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		list[i] = temp;
//	}
//
//	int max = list[0];
//	for (int i = 0; i < n; i++) {
//		if (list[i] > max) {
//			max = list[i];
//			remember = i;
//		}
//	}
//	int delta = max - list[0];
//	int delta_index = 0;
//	for (int i = 0; i < n; i++) {
//		if (i != remember) {
//			if (max - list[i] < delta) {
//				delta = max - list[i];
//				delta_index = i;
//			}
//		}
//	}
//	int answer = m / (k + 1) * (max * k + list[delta_index]) + m % (k + 1) * max;
//	cout << answer;
//}