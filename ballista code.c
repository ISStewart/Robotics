#pragma config(Motor,  port2,           left,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           right,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           bowMotor,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           trigger,       tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port9,           angle,         tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task main ()
{

  while(1 == 1)
  {
    motor[port2]  = vexRT[Ch3];   // Left Joystick Y value
    motor[port3] = vexRT[Ch2];   // Right Joystick Y value


    if(vexRT[Btn8D] == 1)
    {
    	motor[bowMotor] = 127;
    }
    else if(vexRT[Btn8U] == 1)
    {
    	motor[bowMotor] = -127;
    }
    else
    {
    	motor[bowMotor] = 0;
    }


    if(vexRT[Btn6D] == 1 && vexRT[Btn5D] == 0)
    {
    	motor[port5] = 100;
    	}
    else if(vexRT[Btn5D] == 1 && vexRT[Btn6D] == 0)
    {
    	motor[port5] = -40;
    }
    else
  {
   motor[port5] = 0;
  }


  if(vexRT[Btn7U] == 1)
		{
			motor[angle] = 20;
	}
	else if(vexRT[Btn7D] == 1)
		{
			motor[angle] = -20;
	}
	else
	{
		motor[angle] = 0;
	}
}
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
