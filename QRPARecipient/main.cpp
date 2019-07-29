#include <QCoreApplication>
#include <QRPAManager.h>

#include <iostream>
#include <stdio.h>
#include <wiringPi.h>
#include "softPwm.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QRPAManager c;
    /*
   wiringPiSetup();
   pinMode(4,OUTPUT);
   pinMode(5,OUTPUT);
   pinMode(26,OUTPUT);
   pinMode(27,OUTPUT);

   digitalWrite(4,0);
   digitalWrite(5,0);
   digitalWrite(26,0);
   digitalWrite(27,0);
   pwmSetClock(2);

   unsigned int value = 0;
   qDebug() << "please input value";
   scanf("%d",&value);

   softPwmCreate(4,0,200);
   softPwmCreate(5,0,200);
   softPwmCreate(26,0,200);
   softPwmCreate(27,0,200);

   softPwmWrite(4,value);
   softPwmWrite(5,value);
   softPwmWrite(26,value);
   softPwmWrite(27,value);

   while(1)
   {
       value = 0;
       qDebug() << "please input value";
       scanf("%d",&value);

       softPwmWrite(4,value);
       softPwmWrite(5,value);
       softPwmWrite(26,value);
       softPwmWrite(27,value);
   }

   */


    return a.exec();
}

/*

Motor A = 0.4
Motor B = 0.5
Motor C = 0.26
Motor D = 0.27

*/
