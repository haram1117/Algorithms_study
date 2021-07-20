#include <bits/stdc++.h>
using namespace std;

int dir[4] = { 0, 1, 2, 3 };
int dir_2[4][2] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} };
/*
int main() {
	int n; //세로 크기
	int m; //가로 크기
	cin >> n >> m;

	//캐릭터 좌표
	vector<int> char_loc;
	char_loc.push_back(0);
	char_loc.push_back(0);
	int char_dir; //캐릭터 방향
	cin >> char_loc[0] >> char_loc[1] >> char_dir;

	vector<vector<int>> map(4); //맵 
	vector<vector<int>> visited_v;
	visited_v.push_back(char_loc);
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> temp;
			map[i].push_back(temp);
		}
	}
	bool check = false;
	int check_num = 0;
	while (true) {
		if (char_dir == 0)
			char_dir = 4;
		char_dir--; //왼쪽 방향으로 회전
		check = false;
		if (char_dir == 0) {
			if (char_loc[1] != 0) {
				if (map[char_loc[0]][char_loc[1] - 1] == 0) {
					char_loc[1] -= 1;
					check = true;
					map[char_loc[0]][char_loc[1] - 1] = 2;
					visited_v.push_back(char_loc);
					continue;
				}
				else if (check_num < 4) {
					check_num++;
					continue;
				}
			}
		}
		else if (char_dir == 1) {
			if (char_loc[0] != n - 1) {
				if (map[char_loc[0] + 1][char_loc[1]] == 0) {
					char_loc[0] += 1;
					check = true;
					visited_v.push_back(char_loc);
					map[char_loc[0] + 1][char_loc[1]] = 2;
					continue;
				}
				else if (check_num < 4 && map[char_loc[0] + 1][char_loc[1]] == 2) {
					check_num++;
					continue;
				}
			}
		}
		else if (char_dir == 2) {
			if (char_loc[1] != m - 1) {
				if (map[char_loc[0]][char_loc[1] + 1] == 0) {
					char_loc[1] += 1;
					check = true;
					visited_v.push_back(char_loc);
					map[char_loc[0]][char_loc[1] + 1] = 2;
					continue;
				}
				else if (check_num < 4) {
					check_num++;
					continue;
				}
			}
		}
		else if (char_dir == 3) {
			if (char_loc[0] != 0) {
				if (map[char_loc[0] - 1][char_loc[1]] == 0) {
					char_loc[0] -= 1;
					check = true;
					visited_v.push_back(char_loc);
					map[char_loc[0] - 1][char_loc[1]] = 2;
					continue;
				}
				else if (check_num < 4) {
					check_num++;
					continue;
				}
			}
		}
		if (!check || check_num >=4) {
			if (map[char_loc[0] - dir_2[char_dir][0]][char_loc[1] - dir_2[char_dir][1]] == 1) {
				break;
			}
			else {
				char_loc[0] -= dir_2[char_dir][0];
				char_loc[1] -= dir_2[char_dir][1];
				visited_v.push_back(char_loc);
				check_num = 0;
				continue;
			}
		}
	}
	sort(visited_v.begin(), visited_v.end());
	visited_v.erase(unique(visited_v.begin(), visited_v.end()), visited_v.end());

//	for (int i = 0; i < visited_v.size(); i++) {
//		cout << visited_v[i][0] << " " << visited_v[i][1] << endl;
//	}
	cout<<visited_v.size();
}*/