#include<stdio.h>
#include<graphics.h>

int main(void)
{
	int gd=DETECT , gm=VGAMAX, i=0, j=0;
	initgraph(&gd,&gm,NULL);
	

	rectangle(50,50,450,450);

	setcolor(RED);
	for(i=180;i<=185;i++)
	{
		circle(250,250,i);
	}
	
	setcolor(WHITE);
	line(250,250,430,250);

	setcolor(BLUE);
	for(i=245;i<=255;i++)
	{

	line(i,250,250,75);
	line(i,250,290,390);
	}	
	
	setcolor(WHITE);
	
	
			
			outtextxy(250,410,"6");
			outtextxy(80,250,"9");
			outtextxy(410,250,"3");
			outtextxy(390,310,"4");
			outtextxy(340,375,"5");
			outtextxy(250,80,"12");
			outtextxy(350,115,"1");	
			outtextxy(390,170,"2");
			outtextxy(140,370,"7");
			outtextxy(100,310,"8");	
			outtextxy(140,120,"11");
			outtextxy(90,180,"10");	
	



	while(!kbhit());
	closegraph();
	return 0;
}
