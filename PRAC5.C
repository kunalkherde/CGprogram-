#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<math.h>
void rectangle(int x , int y , int height , int width)
void translation(int x, int y , int height , int width)
void main()
{
int x,int y, int height,int width;
int gd = DETECT , gm ;
initgraph(&gd, &gm,"c:\\tc\\bgi");
printf("enter the first point :");
scanf("%d%d",&x,&y);
printf("Enter the height and width :");
scanf("%d%d",&height,&width);
rectangle(x,y,height , weight);
getch();
cleardevice();
rectangle(x,y,height,width);
translation(x,y,height,width);
getch();
}
void rectangle(int x, int y, int height,int width)
{
line(x,y,x+width,y);
line(x,y,x+height,y);
line(x+width,y,x+width,y+height);
line(x,y+width,x+width,y+height);
}
void translation(int x, int y,int width,int height)
{
int newx,newy,x,y,a,b;
printf("Enter the translation co-ordinate : ");
scanf("%d%d",&newx,&newy);
cleardevice();
a = x+newx;
b = y+newy;
rectangle(x,y,height,width);
}