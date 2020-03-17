#include <iostream>
#include <string>
using namespace std;

// ���ݵ�ǰitem������һ��
string next(const string &item) {
	int cnt = 1;
	string ret = "";
	for (int i = 0; i < item.size()-1; i++) {
		if (item[i] == item[i + 1]) cnt++;
		else {
			ret += item[i] + to_string(cnt);
			cnt = 1;
		}
	}
	ret += item[item.size() - 1] + to_string(cnt);
	return ret;
}

int main() {
	string d;
	int n;
	cin >> d >> n;
	for (int i = 1; i < n; i++) d = next(d);
	cout << d << endl;
	return 0;
}