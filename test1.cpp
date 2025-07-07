#include<string>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<string> a;
	a.push_back("hi");
	a.push_back("hello");
	a.push_back("world");
	a.erase(a.begin() + 1);
	a.insert(a.begin()+1, "hello");
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}
	return 0;
}

