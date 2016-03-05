#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


int main(void) {

	string name;
	cout << "please input your name:";
	getline(cin, name);
	if (name.empty())
	{
		cout << "input is null .." << endl;
		system("pause");
		return 0;
	}

	if (name == "imooc")
	{
		cout << "you are a administrator" << endl;
	}

	cout << "hello " + name << endl;
	cout << "you name length:" << name.size() << endl;
	cout << "you name firest letter:" << name[0] << endl;

	system("pause");

	return 0;
}