#include<stdio.h>
#include<graphics.h>

int main(void)
{
	int gd=DETECT , gm=VGAMAX, i=0, j=0;
	initgraph(&gd,&gm,NULL);
	

setcolor(12);
fillellipse(100, 100,30,50);
setcolor(13);
fillellipse(140, 100,30,40);
setcolor(4);
fillellipse(40, 100,40,40);
setcolor(6);
fillellipse(80, 100,30,40);

setcolor(15);
line(40,140,200,300);
line(80,140,200,300);
line(100,150,200,300);
line(140,140,200,300);

setcolor(2);
line(200,300,220,320);
line(220,320,300,320);
line(300,320,320,300);

for(i=256;i<265;i++)
{
line(i,300,i,400);
}

circle(260,280,20);
setcolor(YELLOW);
fillellipse(260, 280,20,20);

//line(300,320,260,250);
//line();
	while(!kbhit());
	closegraph();
	return 0;
}
