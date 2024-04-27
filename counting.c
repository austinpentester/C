#include<graphics.h>
#include<dos.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm,i;
char a[5];
clrscr();
initgraph(&gd,&gm,"c:\\turboc 3\\bgi");
settextjustify(CENTER_TEXT,CENTER_TEXT);
settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
setcolor(3);
for(i=30;i>=0;i--)
{
sprintf(a,"%d",i);
outtextxy(getmaxx()/2,getmaxy()/2,a);
delay(1000);
if(i==0)
break;
cleardevice();
}
getch();
closegraph(); 
return 0;
}
