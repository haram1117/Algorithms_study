#include <iostream>
using namespace std;

//int main() {
//	int n;
//	int m;
//	cin >> n >> m;
//	int** m_list = new int*[n];
//	for (int i = 0; i < n; i++) {
//		m_list[i] = new int [m];
//	}
//
//	int temp;
//	int* min_list = new int[n];
//	int min;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++)
//		{
//			cin >> temp;
//			m_list[i][j] = temp;
//			if (j == 0 || min > temp)
//				min = temp;
//			if (j == m - 1)
//				min_list[i] = min;
//		}
//	}
//	int max = min_list[0];
//	for (int i = 0; i < n; i++) {
//		if (max < min_list[i])
//			max = min_list[i];
//	}
//	cout << max;
//}