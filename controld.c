#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
#include libRobot.c

//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
#include "JoystickDriver.c"

task main()
{
hogCPU();
	while (true)
		{


		getJoystickSettings(joystick);
			motor[motorD] = joystick.joy1_y1;
    	motor[motorE] = joystick.joy1_y2;
    	//How we'll do buttons
    	//if(joy1Btn(1) == 1){
    		//motor[motor???] = 100
    		//Sleep(nMSec) same thing as wait1Msec(nMsec);
    		//motor[motor???] = 0
      	//More stuff.
    	//}


    }

  releaseCPU();

}
