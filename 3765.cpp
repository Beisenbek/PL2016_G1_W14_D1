#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;
	map<string,string> a;

	for(int i= 0; i < n; ++i){
		stringstream ss;
		getline(cin,str);
		ss << str;
		ss >> country_name;
		while(ss >> city_name){
			a[city_name] = country_name;
		}
	}

	int m;
	cin >> m;

	for(int i = 0; i < m; ++i){
		cin >> str;
		cout << a[str] << endl;
	}

	cout << endl;

 	return 0;
}


