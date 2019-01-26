#include <graphics.h> 
#include <stdio.h> 


int main( ) 
{ 
int i,gd=DETECT,gm=VGAMAX;
initgraph(&gd,&gm,NULL);

setcolor(5);

for(i=8;i<13;i++)
{
circle(450,300,i);
}
line(450,310,450,350);

line(430,320,470,320);


line(450,340,430,360);
line(450,340,470,360);

setcolor(3);
line(430,320,350,200);
line(430,320,300,200);
line(430,320,370,150);

setcolor(RED);
for(i=18;i<22;i++)
{
circle(340,185,i);
circle(280,185,i);
circle(360,135,i);
}
while(!kbhit());
closegraph();
}
