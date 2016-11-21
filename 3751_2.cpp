#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	set<long long> a,b;
	vector<long long> c;

	string str1,str2;
	stringstream ss,ss2;
	int x;

	getline(cin,str1);
	ss << str1;
	while(ss >> x){
		a.insert(x);
	}

	getline(cin,str2);
	ss2 << str2;
	while(ss2 >> x){
		b.insert(x);
	}

	set_intersection(a.begin(),a.end(),
		             b.begin(),b.end(),
		             back_inserter(c));


	sort(c.begin(),c.end());
	
	for(int i = 0; i < c.size(); ++i){
		cout << c[i] << " ";
	}

	cout << endl;

 	return 0;
}


//str1 "1 3 2"
//ss   "1" "3" "2"
//ss >> x
