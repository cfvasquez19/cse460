//Cesar Vasquez
//Lab3
//test_execl.cpp
#include <unistd.h>
#include <iostream>

using namespace std;

int main(){
	cout<<"Running ps with execl\n" ;
	execl("ps", "ps", "-ax", 0);

	cout<<"Done!\n";

	return 0;
}
