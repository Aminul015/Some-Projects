#include <iostream>
#include <graphics.h>
#include <math.h>
#include <dos.h>

using namespace std;

int main()
{

   float s,t,s1,t1,s2,t2,ds,dt,step;
   int i, gd=DETECT,gm;

   initgraph(&gd,&gm," ");

   cout<<"Enter the value of s1 and t1:";
   cin>>s1>>t1;
   cout<<"Enter the value of s2 and t2:";
   cin>>s2>>t2;

   ds=abs(s2-s1);
   dt=abs(t2-t1);

   if(ds>=dt)
      step=ds;
   else
    step=dt;

   ds=ds/step;
   dt=dt/step;

   s=s1;
   t=t1;

   i=1;

   while(i<=step)
   {
       putpixel(s,t,15);
       s=s+ds;
       t=t+dt;
       i=i+1;
       delay(100);
   }
    getch();
    closegraph();

    return 0;

}




