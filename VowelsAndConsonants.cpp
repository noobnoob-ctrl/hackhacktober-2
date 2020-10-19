#include <bits/stdc++.h>
	using namespace std;
	int main() {
	string s;
	getline(cin,s);
	int n = s.length();
	int vc = 0 ;
	for(int i=0; i<n; i++){
		char c = toupper(s[i]);
		if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y')
			vc++;
	}
	cout<<vc<<endl;
	return 0;
	}