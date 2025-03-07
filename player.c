#include<stdio.h>
union cricketTeam
{
char playerName[50];
int jerseyNumber;
float battingAvg;
};
int main()
{
union cricketTeam team;
printf("enter the player name:");
scanf("%s",team.playerName);
printf("player name:%s\n",team.playerName);
printf("enter the jersey number:");
scanf("%d",&team.jerseyNumber);
printf("jerseyNumber:%d\n",team.jerseyNumber);
printf("enter the batting avg:");
scanf("%f",&team.battingAvg);
printf("player name:%f\n",team.battingAvg);
return 0;
}
