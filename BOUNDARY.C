#include<conio.h>
#include<graphics.h>
void boundaryfill(int x,int y ,int fill_color ,int boundry_color)
{
if (getpixel(x,y) != boundarycolour && getpixel(x,y) !=fillcolour)
{
putpixel(x,y,fill_colour);
boundaryfill(x+1,y,fill_colour,boundary_colour);
boundaryfill(x,y+1,fill_colour,boundary_colour);
boundaryfill(x-1,y,fill_colour,boundary_colour);
boundaryfill(x,y-1,fill_colour,boundary_colour);
}
int main (int argc , char_const*argv[])
{
int gd= DETECT ,gm;
initgraph(&gd,&gm,char,"c:\\tc\\bgi");
int x= 250 , y = 200, radius = 50;
circle(x,y,radius);
boundary_fill(x,y,6,15);
delay(10);
getch();
closegraph();
return 0;
}