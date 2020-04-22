/*************************************************************************
    > File Name: main.cpp
    > Author: chow
    > Mail: 
    > Created Time: 2020年04月22日 星期三 21时06分51秒
 ************************************************************************/

#include <iostream>
#include "person.pb.h"

using namespace std;
using namespace JZApp;



int main()
{
	JZApp::Person p;
	p.set_name("chow");
	p.set_id("123");
	p.set_addr("China");
	p.set_test("test..");

	// TODO: for serialize
	string buff;
	if (!p.SerializeToString(&buff)) {
		cerr << " Failed to serialize."<<endl;
		return -1;
	}

	cout << "output : "<< buff << endl;

	return 0;
}
