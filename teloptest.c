#pragma config(Hubs,  S1, HTServo,  HTMotor,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     HTIRS2,         sensorHiTechnicIRSeeker1200)
#pragma config(Motor,  mtr_S1_C2_1,     motorD,        tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C2_2,     motorE,        tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C3_1,     motorF,        tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C3_2,     motorG,        tmotorTetrix, PIDControl, reversed, encoder)
#pragma config(Servo,  srvo_S1_C1_1,    servo1,               tServoStandard)
#pragma config(Servo,  srvo_S1_C1_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_6,    servo6,               tServoNone)
#include "joystickDriver.c";
//#include "libRobot.c"
task main()
{
	int raiseSpeed=60;
	while(true){//BEGIN TELEOP
		getJoystickSettings(joystick);
		//motor[motorF] = -1*joystick.joy1_y1;
		//motor[motorG] = -1*joystick.joy1_y2;
		if(joy1Btn(1)){
			motor[motorD]=raiseSpeed;
			motor[motorE]=raiseSpeed;
		}
		if(joy1Btn(3)){
			motor[motorD]=-1*raiseSpeed;
			motor[motorE]=-1*raiseSpeed;
		}
		if((!joy1Btn(1))&&(!joy1Btn(3))){
			motor[motorD]=0;
			motor[motorE]=0;
		}
		if(joy1Btn(2)){
			raiseSpeed=20;
		}
		if(joy1Btn(4)){
			raiseSpeed=60;
		}

	}
}
