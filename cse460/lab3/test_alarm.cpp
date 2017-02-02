//Cesar Vasquez
//Lab3 Question 4
//test_alarm.cpp
#include <signal.h>
#include <unistd.h>
#include <iostream>

using namespace std;

void ding ( int sig )
{
	cout << "Alarm has gone off " << endl;
}

int main()
{
	int pid;

	cout << "Alarm testing!" << endl;

	if ( ( pid = fork() ) == 0 ) 
	{
		sleep ( 5 );

		kill ( getppid(), SIGALRM );	
		return 1; 
	}

	cout << "Waiting for alarm to go off!" << endl;
	(void) signal ( SIGALRM, ding );
 
	pause();
	cout << "Done!" << endl;

  return 1;
}
