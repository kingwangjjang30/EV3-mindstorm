
task main()
{
	playSoundFile("Grean");
	playSoundFile("Go");
	setLEDColor(ledGreen);
	wait1Msec(3000);

	playSoundFile("Yellow");
	playSoundFile("Backing alert");
	setLEDColor(ledOrangeFlash);
	wait1Msec(3000);

	playSoundFile("Red");
	playSoundFile("Stop");
	setLEDColor(ledRed);
	wait1Msec(3000);


}
