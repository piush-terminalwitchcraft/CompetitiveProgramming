#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <ctime>
using namespace std;
int main() {
	vector<string>v;
	string s;
	int mx = 0;
	char c;
	while ((c = _getchar_nolock()) != EOF) {
		if (c != '\n')s += c;
		else v.push_back(s), mx = max(mx, int(s.size())), s.clear();
	}
	bool q = 0;
	string b(mx+2, '*');
	cout << b << '\n';
	for (int i = 0; i < v.size(); ++i) {
		string l((mx - v[i].size() + (q ? 1 : 0)) / 2, ' '), r((mx - v[i].size() + (q ? 0 : 1)) / 2, ' ');
		if (l != r)q = !q;
		cout << '*' << l << v[i] << r << "*\n";
	}
	cout << b;
}