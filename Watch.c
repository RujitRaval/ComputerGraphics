#include <graphics.h> 
#include <stdio.h> 


int main( ) 
{ 
int i,gd=DETECT,gm=VGAMAX;
initgraph(&gd,&gm,NULL);

for(i=200;i<210;i++)
{
circle(250,250,i);
}

for(i=248;i<253;i++)
{
line(i,250,i,60);
}

for(i=247;i<255;i++)
{
line(248,i,420,i);
}

setcolor(RED);
for(i=245;i<255;i++)
{
line(i,50,i,60);
}

for(i=245;i<255;i++)
{
line(i,440,i,450);
}

for(i=245;i<255;i++)
{
line(50,i,60,i);
}

for(i=245;i<255;i++)
{
line(440,i,450,i);
}
while(!kbhit());
closegraph();
}
