#include<stdio.h>
#include<graphics.h>

int main(void)
{
	int gd=DETECT , gm=VGAMAX;
	initgraph(&gd,&gm,NULL);
	
	rectangle(50,50,450,450);

	circle(250,250,180);

	circle(170,180,20);
	circle(330,180,20);

	

	line(250,210,230,250);
	line(250,210,270,250);
	line(230,250,270,250);
	
	arc(250, 280, 30, 150, 120);
	
	while(!kbhit());
	closegraph();
	return 0;
}
