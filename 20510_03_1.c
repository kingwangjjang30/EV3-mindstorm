
task main()
{
	setLEDColor(ledGreen);
	wait1Msec(3000);

	setLEDColor(ledOrangePulse);
	playSoundFile("Backing alert");
	wait1Msec(3000);

	setLEDColor(ledRed);
	wait1Msec(3000);

	setLEDColor(ledOff);
	wait1Msec(3000);


}
