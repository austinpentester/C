#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc 3\\bgi");
line(100,100,150,50);
line(150,50,200,100);
line(150,50,350,50);
line(350,50,400,100);
rectangle(100,100,200,200);
rectangle(200,100,400,200);
rectangle(130,130,170,200);
rectangle(250,120,350,180);
setfillstyle(2,3);
floodfill(131,131,WHITE);
floodfill(201,101,WHITE);
setfillstyle(11,7);
floodfill(101,101,WHITE);
floodfill(150,52,WHITE);
floodfill(163,55,WHITE);
floodfill(251,121,WHITE);
getch();
closegraph();
}