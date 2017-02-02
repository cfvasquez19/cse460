//Cesar Vasquez
//HW Question 2a
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stack>

using namespace std;

int main(){
	int p = 10;
	pid_t child;
	stack<pid_t> ances;

	for(int i=0; i<p; ++i){
		if(child == fork())
			break;
		ances.push(getppid());
	}
	wait(NULL);
	cout<<"The process "<<getpid()<<" with child "<<child<<" and ancestors ";
	while(!ances.empty()){
		cout<<ances.top()<<" ";
		ances.pop();
	}
	cout<<endl;
	return 0;
}
