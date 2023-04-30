#include <stdio.h>
#include <cs50.h>

int main(void)
{
// Prompting the user for a starting # of llamas
int start;
do
{
start = get_int("Start size:')
}
while(start<9);
// Promting them for an ending # of llamas

// How many years will it take to get to the goal?
int years =0;
start += start / 12;
// Every year, 1/3 of our current llamas are born;1/4 pass away
{
 end = get_int("End size:");
}
While(end<start;)
{
start += start / 12;
years++;
}

 }

printf("Years:%i",years);
}