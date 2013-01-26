#pragma config(Hubs,  S1, HTServo,  HTMotor,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorHiTechnicIRSeeker1200)
#pragma config(Motor,  mtr_S1_C2_1,     motorD,        tmotorTetrix, PIDControl, reversed, encoder)
#pragma config(Motor,  mtr_S1_C2_2,     motorE,        tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C3_1,     motorF,        tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C3_2,     motorG,        tmotorTetrix, PIDControl, reversed, encoder)
#pragma config(Servo,  srvo_S1_C1_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C1_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void lift_up(int tgt_Height)
{
	nMotorEncoder[motorE]=0;
	//motor[motorE]=60;
	motor[motorD]=60;
	while(nMotorEncoder[motorE]<99000){
		wait1Msec(1);
	}
	motor[motorD]=0;
	motor[motorE]=0;
}

void smoothMoveLiftDown(){
	nMotorEncoder[motorE]=0;
	motor[motorD]=-40;
	//motor[motorE]=-40;
	while(nMotorEncoder[motorE]>=-14000){wait1Msec(1);
	}
	motor[motorD]=0;
	motor[motorE]=0;
}
task main()
{

	//lift_up(1440);
	smoothMoveLiftDown();

}
