#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){

    int x,y,x1,y1,x2,y2;
    int scl_x,scl_y;
    int gd = DETECT , gm;
    initgraph(&gd,&gm,"C://TC//BGI");
    printf("\n\t\t\tEnter First Co-ordinate of Triangle: ");
    scanf("%d%d",&x,&y);
    printf("\n\t\t\t Enter Second Co-ordinates of Triangle: ");
    scanf("%d%d",&x1,&y1);
    printf("\n\t\t\tEnter Third Co-ordinates of triangle: ");
    scanf("%d%d",&x2,&y2);
    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x,y);
    printf("\n\t\t\tEnter Scaling Factor x and y: ");
    scanf("%d%d",&scl_x,&scl_y);
    x = x*scl_x;
    x1 = x1*scl_x;
    x2 = x2*scl_x;
    y = y*scl_y;
    y1 = y1*scl_y;
    y2 = y2*scl_y;

    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x,y);
    getch();
    closegraph();
}