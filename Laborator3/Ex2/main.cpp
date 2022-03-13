#include "Canvas.h"
#include <stdio.h>

int main() {
	Canvas canvas(128,128);
	canvas.DrawCircle(40, 30, 20, 'O');
	canvas.FillCircle(40.30, 20.'X');
	canvas.DrawRect(10, 60, 40, 100, '^');
	canvas.FillRect(10, 60, 40, 100, '&');
	for (int i = 20; i <= 50; i += 2)
		canvas.SetPoint(100, i, '*');
	canvas.DrawLine(10, 10, 50, 70, '+');
	canvas.Print();
	canvas.Clear();
	return 0;
}