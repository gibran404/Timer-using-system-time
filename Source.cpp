#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

void main()
{
	long seconds=0,  prev_time=0, timer=0;
	int duration;
	cout << "Enter the timer duration in seconds: ";
	cin >> duration ;

	timer = time(NULL);
	prev_time = timer;
	cout<< endl << seconds<< endl;

	for (int x = 0; x < 999999999999999; x++)
	{

		prev_time = timer;
		timer = time(NULL);
		if (timer == (prev_time+1)) //285 for 1x, 0 for 2x
		{
			seconds++;
			cout << seconds<< endl;
		}
		if (seconds == duration)
		{
			cout << "TIMER ENDED";
			break;
		}

	}





	_getch();
}


