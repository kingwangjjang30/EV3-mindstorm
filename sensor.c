#pragma config(Sensor, S1,     T,              sensorEV3_Touch)
#pragma config(Sensor, S2,     G,              sensorEV3_Gyro, modeEV3Gyro_Rate)
#pragma config(Sensor, S3,     C,              sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     J,              sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          M,             tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          L,             tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          R,             tmotorEV3_Large, PIDControl, encoder)
task main()
{
	while(1)
	{
		displayCenteredBigTextline(3,"Touch Sensor: %d",SensorValue[S1]);
		}


}
