#pragma config(Sensor, dgtl1,  ,               sensorTouch)
#pragma config(Sensor, dgtl2,  ,               sensorTouch)
#pragma config(Motor,  port5,            ,             tmotorVex269_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

while(1==1)

if(SensorValue[dgtl2] == 1 && SensorValue[dgtl1] == 0)
    {
    	motor[port5] = 100;
    	}
    else if(SensorValue[dgtl1] == 1 && SensorValue[dgtl2] == 0)
    {
    	motor[port5] = -30;
    }
    else
  {
   motor[port5] = 0;
  }

}
