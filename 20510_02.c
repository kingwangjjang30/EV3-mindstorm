#pragma config(Sensor, S1,     T,              sensorEV3_Touch)
#pragma config(Sensor, S2,     G,              sensorEV3_Gyro)
#pragma config(Sensor, S3,     C,              sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     U,              sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          M,             tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          L,             tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          R,             tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	playTone(1318.6,20);
	wait1Msec(200);

		playTone(1174.8,20);
	wait1Msec(200);

		playTone(1046.5,20);
	wait1Msec(200);

		playTone(1174.8,20);
	wait1Msec(200);

		playTone(1318.6,20);
	wait1Msec(200);

		playTone(1318.6,20);
	wait1Msec(200);

		playTone(1318.6,20);
	wait1Msec(200);



}