#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    int gd = DETECT ,gm, i;
    float x, y,dx,dy,steps;
    int x0, x1, y0, y1;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    printf("\t\t\t19CM036 kunal kherde");
    printf("\n\n\t\tPractical 2 : DDA Line Drawing Algorithm");

    x0 = 100 , y0 = 200, x1 = 500, y1 = 400;
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
	   {
	steps = dx;
    }
    else
    {
	steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
	putpixel(x, y, WHITE);
	x += dx;
	y += dy;
	i=i+1;
	delay(10);
    }
    getch();
    closegraph();
}