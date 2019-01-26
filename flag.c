#include<stdio.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm,a,b;

initgraph(&gd,&gm,NULL);
bar(235,460,455,480);
bar(295,440,400,460);
bar(345,80,350,440);

setcolor(6);
bar(350,80,500,100);
setcolor(15);
bar(350,100,500,120);
setcolor(GREEN);
bar(350,120,500,140);
while(!kbhit());
closegraph();
}
