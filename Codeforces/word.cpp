#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl "\n"

int main() {
	string s, ret;
	cin >> s;

	int upper = 0, lower = 0;

	for(int i = 0; i < s.size(); i++){
		if(isupper(s[i])) ++upper;
		else ++lower;
	}

	(upper > lower)?transform(s.begin(), s.end(), s.begin(), ::toupper):transform(s.begin(), s.end(), s.begin(), ::tolower);

	cout << s << endl;

	return 0;
}
