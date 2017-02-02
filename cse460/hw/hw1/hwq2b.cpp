//Cesar Vasquez
//HW Question 2b
#include <iostream>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main(){
	int p = 10;
	pid_t child;

	for(int i =0; i < p; ++i){
		if((child == fork()) <= 0)
			break;
			sleep(1);
	}
	cout<<"The process "<<getpid()<<" with parent "<<getppid()<<endl;
	return 0;
}
