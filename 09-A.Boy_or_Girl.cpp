#include <iostream>
#include <string>
using namespace std;
int main () {
	string name, temp="";
	cin >> name;
	for(int i=0; i<name.length(); i++) {
		if(temp.find(name[i]) == string::npos) // If not found
			temp.push_back(name[i]);
	}
	if(temp.length() % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
}
