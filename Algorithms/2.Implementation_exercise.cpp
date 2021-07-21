//#include <bits/stdc++.h>
//using namespace std;

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

//#include <bits/stdc++.h>
//using namespace std;
//vector<vector<int>> rotation(vector<vector<int>> key) {
//    vector<vector<int>> rotate_k(key.size());
//    for (int i = 0; i < key.size(); i++) {
//        for (int j = 0; j < key.size(); j++) {
//            rotate_k[i].push_back(key[j][key.size() - i - 1]);
//        }
//    }
//    return rotate_k;
//}
//vector<vector<int>> right(vector<vector<int>> key) {
//    vector<vector<int>> rotate_k(key.size());
//    for (int i = 0; i < key.size(); i++) {
//        for (int j = 0; j < key.size(); j++) {
//            if (j == 0)
//                rotate_k[i].push_back(0);
//            else
//                rotate_k[i].push_back(key[i][j - 1]);
//        }
//    }
//    return rotate_k;
//}
//vector<vector<int>> left(vector<vector<int>> key) {
//    vector<vector<int>> rotate_k(key.size());
//    for (int i = 0; i < key.size(); i++) {
//        for (int j = 0; j < key.size(); j++) {
//            if (j == key.size() - 1)
//                rotate_k[i].push_back(0);
//            else
//                rotate_k[i].push_back(key[i][j + 1]);
//        }
//    }
//    return rotate_k;
//}
//vector<vector<int>> down(vector<vector<int>> key) {
//    vector<vector<int>> rotate_k(key.size());
//    for (int i = 0; i < key.size(); i++) {
//        for (int j = 0; j < key.size(); j++) {
//            if (i == 0)
//                rotate_k[i].push_back(0);
//            else
//                rotate_k[i].push_back(key[i - 1][j]);
//        }
//    }
//    return rotate_k;
//}
//vector<vector<int>> padding(vector<vector<int>> key, int size) {
//    vector<vector<int>> key_padding(size);
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            key_padding[i].push_back(0);
//        }
//    }
//    for (int i = 0; i < key.size(); i++) {
//        for (int j = 0; j < key.size(); j++) {
//            key_padding[i][j] = key[i][j];
//        }
//    }
//    return key_padding;
//}
//
//void print_v(vector<vector<int>> key) {
//    for (int i = 0; i < key.size(); i++) {
//        for (int j = 0; j < key.size(); j++)
//        {
//            cout << key[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
//    //bool answer = true;
//    int size = lock.size() + (key.size() - 1) * 2;
//    vector<vector<int>> lock_padding(size);
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            if (i >= key.size() - 1 && i <= key.size() - 1 + lock.size() - 1) {
//                if (j >= key.size() - 1 && j <= key.size() - 1 + lock.size() - 1)
//                    lock_padding[i].push_back(lock[i - key.size() + 1][j - key.size() + 1]);
//                else
//                    lock_padding[i].push_back(2);
//            }
//            else {
//                lock_padding[i].push_back(2);
//            }
//
//        }
//    }
//    vector<vector<int>> key_padding(size);
//    bool check = true;
//    int cnt = 0;
//    for (int t = 0; t < 4; t++) {
//        key = rotation(key);
//        key_padding = padding(key, size);
//        print_v(key_padding);
//        cout << endl;
//        for (int k = 0; k < size - (key.size() - 1); k++) {
//            check = true;
//            for (int i = key.size() - 1; i < lock.size() + key.size() - 1; i++) {
//                for (int j = key.size() - 1; j < key.size() + lock.size() - 1; j++) {
//                    if (!(key_padding[i][j] ^ lock_padding[i][j])) {
//                        check = false;
//                        break;
//                    }
//                }
//                if (!check)
//                    break;
//            }
//            if (check)
//                return check;
//            if (k == size - (key.size() - 1) - 1) {
//                cnt++;
//                if (cnt > size - key.size() + 1) {
//                    cnt = 0;
//                    break;
//                }
//                k = -1;
//                key_padding = down(key_padding);
//            }
//            else if (cnt % 2 == 1) {
//                key_padding = left(key_padding);
//            }
//            else if (cnt % 2 == 0) {
//                key_padding = right(key_padding);
//            }
//        }
//        if (check)
//            return true;
//    }
//    return check;
//}
//int main() {
//    vector<vector<int>> key(3);
//    key[0].push_back(0);
//    key[0].push_back(0);
//    key[0].push_back(0);
//    key[1].push_back(1);
//    key[1].push_back(0);
//    key[1].push_back(0); 
//    key[2].push_back(0);
//    key[2].push_back(1);
//    key[2].push_back(1);
//
//    vector<vector<int>> lock(3);
//    lock[0].push_back(1);
//    lock[0].push_back(1);
//    lock[0].push_back(1);
//    lock[1].push_back(1);
//    lock[1].push_back(1);
//    lock[1].push_back(0);
//    lock[2].push_back(1);
//    lock[2].push_back(0);
//    lock[2].push_back(1);
//
//    cout<<solution(key, lock);
//
//}