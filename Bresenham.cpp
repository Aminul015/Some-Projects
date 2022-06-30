#include<iostream>
#include<graphics.h>
#include<cmath>

using namespace std;

int main()
{
    int a,b,a1,a2,b1,b2,da,db,p;
    int i,gd=DETECT,gm;

    initgraph(&gd,&gm," ");
    initwindow(800,600,"Bresenham's");

    cout<<"Enter a1 and b1:";
    cin>>a1>>b1;

    cout<<"Enter a2 and b2:";
    cin>>a2>>b2;

    da=abs(a2-a1);
    db=abs(b2-b1);

    a=a1;
    b=b1;

    p=2*db-da;

    while(a<=a2)
    {
        if(p>=0)
        {
            putpixel(a,b,7);
            b=b+1;
            p=p+2*db-2*da;
        }
        else
        {
            putpixel(a,b,7);
            p=p+2*db;
        }
        a=a+1;
        delay(100);
    }
      getch();
      closegraph();

      return 0;
}
