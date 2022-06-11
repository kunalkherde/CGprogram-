// C-program for circle drawing
// using Bresenham’s Algorithm
// in computer-graphics
#include <stdio.h>
#include<conio.h>
#include <dos.h>
#include <graphics.h>

// Function to put pixels
// at subsequence points
void drawCircle(int xc, int yc, int x, int y)
{
	putpixel(xc+x, yc+y, 15);
	putpixel(xc-x, yc+y, 15);
	putpixel(xc+x, yc-y, 15);
	putpixel(xc-x, yc-y, 15);
	putpixel(xc+y, yc+x, 15);
	putpixel(xc-y, yc+x, 15);
	putpixel(xc+y, yc-x, 15);
	putpixel(xc-y, yc-x, 15);
}

// Function for circle-generation
// using Bresenham's algorithm
void circleBres(int xc, int yc, int r)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;
	drawCircle(xc, yc, x, y);
	while (y >= x)
	{
		// for each pixel we will
		// draw all eight pixels

		x++;

		// check for decision parameter
		// and correspondingly
		// update d, x, y
		if (d > 0)
		{
			y--;
			d = d + 4 * (x - y) + 10;
		}
		else
			d = d + 4 * x + 6;
		drawCircle(xc, yc, x, y);
		delay(50);
	}
}


// Driver code
int main()
{
	int xc = 250, yc = 250, r = 150;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI"); // initialize graph
	printf("19CM007 - Ayush Bulbule");
	printf("\n\n\tPractical 3.2 Bresenham's Circle Drawing Algorithm");
	circleBres(xc, yc, r); // function call
	getch();
	return 0;
}
