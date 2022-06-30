#include<iostream>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd,gm;
	int r,i,a,b,x,y;
	float PI=3.14;

 
	initgraph(&gd,&gm," ");

	//draw the top rectangle and color it
	setcolor(RED);
	rectangle(100,100,450,150);
	setfillstyle(SOLID_FILL,RED);
	floodfill(101,101,RED);

	//draw the middle rectangle and color it
	setcolor(WHITE);
	rectangle(100,150,450,200);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(101,151,WHITE);

	//draw the bottom rectangle and color it
	setcolor(GREEN);
	rectangle(100,200,450,250);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(101,201,GREEN);

	//draw the circle
	a=275;	//center
	b=175;	//center
	r=25;	//radius
	setcolor(BLUE);
	circle(a,b,r);

	//spokes
	 

	getch();
	closegraph();
	return 0;
}

