#include<stdio.h>
#include<process.h>
#include<string.h>
#include<conio.h>
void fnShowBuses()
{
int bus;
printf("\n\n\t\t\t______________________");
printf("\n\n\t\t\t BUSES AVALAIBLE");
printf("\n\n\t\t\t______________________\n");

for(bus=1;bus<iNumber;bus++)
{
printf("\n");
fnPrintLine();
printf("\n\t\tbus no-\t\t%d",stBus[bus].iBusNum);
printf("\n\t\tbus code-\t%d",stBus[bus].iBusCode);
printf("\n\t\tDrivers Name-\t%s",stBus[bus].chDrivers_Name);
printf("\n\t\tFrom-\t\t%s",stBus[bus].chGoesFrom);
printf("\n\t\tTo-\t\t%s",stBus[bus].chGoesTo);
printf("\n\t\tArrival time-\t%d%c%d",stBus[bus].stArrival_Time.iHrs,i,stBus[bus].stArrival_Time.iMins);
printf("\n\t\tDeparture time-\t%d%c%d",stBus[bus].stDeparture_Time.iHrs,i,stBus[bus].stDeparture_Time.iMins);
printf("\n\t\tFare-\t\t%.4f",stBus[bus].fFare);
printf("\n\t\tTickets Sold-\t%d",stBus[bus].iTicketSold);
printf("\n");
fnPrintLine();


}

getch();

fnMainMenu();
}
