#include<iostream>
#include<graphics.h>

int main()
{
	
int gd=DETECT,gm;
initgraph(&gd,&gm," ");

initwindow(1100,700,"Smile and Sad");

circle(300,300,150);
circle(230,230,30);
circle(370,230,30);
circle(230,230,15);
circle(370,230,15);
line(300,280,260,320);
line(300,280,340,320);
line(260,320,340,320);
line(250,370,350,370);
ellipse(300,370,180,360,50,35);

circle(900,300,150);
circle(830,230,30);
circle(970,230,30);
circle(830,230,15);
circle(970,230,15);
line(900,280,860,320);
line(900,280,940,320);
line(860,320,940,320);
line(850,390,950,390);
ellipse(900,390,0,180,50,35);

	getch();
	closegraph();

}
 
