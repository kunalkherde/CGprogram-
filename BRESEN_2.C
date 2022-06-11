#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

void EightWaySymmetricPlot(int xc,int yc,int x,int y)
   {
    putpixel(x+xc,y+yc,15);
    putpixel(x+xc,-y+yc,15);
    putpixel(-x+xc,-y+yc,15);
    putpixel(-x+xc,y+yc,15);
    putpixel(y+xc,x+yc,15);
    putpixel(y+xc,-x+yc,15);
    putpixel(-y+xc,-x+yc,15);
    putpixel(-y+xc,x+yc,15);
   }

void BresenhamCircle(int xc,int yc,int r)
{
    int x=0,y=r,d=3-(2*r);
    EightWaySymmetricPlot(xc,yc,x,y);

    while(x<=y)
     {
      if(d<=0)
	     {
	d=d+(4*x)+6;
      }
     else
      {
	d=d+(4*x)-(4*y)+10;
	y=y-1;
      }
       x=x+1;
       EightWaySymmetricPlot(xc,yc,x,y);
      }
    }

void main()
{
    /* request auto detection */
    int xc,yc,r,gd = DETECT, gm, errorcode;
    /* initialize graphics and local variables */
     initgraph(&gd, &gm, "C:\\TC3\\BGI");

       clrscr();

       printf("Enter the values of xc and yc :");
       scanf("%d%d",&xc,&yc);
       printf("Enter the value of radius  :");
       scanf("%d",&r);
       BresenhamCircle(xc,yc,r);

     getch();

     closegraph();

    }