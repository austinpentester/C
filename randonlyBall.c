#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm,aa,bb,cc,a,b,i;
initgraph(&gd,&gm,"c:\\turboc 3\\bgi");
rectangle(10,60,450,10);
outtextxy(13,25,"Balls at random");
line(10,40,600,40);
a=500;
b=400;
randomize();
for(i=1;i<50;i++)
{
aa=random(a);
bb=random(b);
if(aa>100&&b>100)
{
cc=random(10);
setcolor(cc);
circle(aa,bb,cc);
setfillstyle(SOLID_FILL,cc);
floodfill(aa,bb,cc);
}
}
getch();
closegraph();
}
