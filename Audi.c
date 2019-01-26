#include<stdio.h>
#include<graphics.h>

int main(void)
{
	int gd=DETECT , gm=VGAMAX;
	initgraph(&gd,&gm,NULL);
	circle(100,200,70);
	circle(100,200,80);
	
	circle(200,200,70);
	circle(200,200,80);

	circle(300,200,70);
	circle(300,200,80);

	circle(400,200,70);
	circle(400,200,80);
	
	while(!kbhit());
	closegraph();
	return 0;
}
