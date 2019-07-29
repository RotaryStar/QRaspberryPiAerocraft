#include <wiringPi.h>
#include <stdio.h>
int main()
{
	printf("\n ready \n");
	
	wiringPiSetup();
	pinMode(0,1);
	pinMode(25,1);
	digitalWrite(0,0);
	digitalWrite(25,0);
	pwmSetClock(2);
	
	int w = 0;
	
	scanf("%d",&w);
	softPwmCreate(0,0,200);
	softPwmWrite(0,w);
	softPwmCreate(25,0,200);
	softPwmWrite(25,w);
	
	w = 0;
	scanf("%d",&w);
	softPwmWrite(0,w);
	softPwmWrite(25,w);
	
	while (1)
	{
		w = 0;
		scanf("%d",&w);
		softPwmWrite(0,w);
		softPwmWrite(25,w);
	}
	
	return 0;
}
