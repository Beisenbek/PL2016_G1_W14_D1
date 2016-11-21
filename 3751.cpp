#include <iostream>
#include <sstream>
#include <set>
using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	set<long long> a,b;
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

	set<long long>::iterator it;
	
	for(it = a.begin(); it != a.end(); ++it){
		if(b.find(*it) != b.end()){
			cout << *it << " ";
		}
	}

	cout << endl;

 	return 0;
}


//str1 "1 3 2"
//ss   "1" "3" "2"
//ss >> x
