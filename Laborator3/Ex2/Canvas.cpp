#include "Canvas.h"
#include <stdio.h>

Canvas::Canvas(int width, int height) {
	this->width = width;
	this->height = height;
	Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
	for (int rand = x - ray; rand <= x + ray; rand++)
		for (int coloana = y - rand; coloana <= y + rand; coloana++)
			if ((x - rand) * (x - rand) + (y - coloana) * (y - coloana) == ray * ray)
				canvas[rand][coloana] = ch;
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
	for (int rand = x - ray; rand <= x + ray; rand++)
		for (int coloana = y - rand; coloana <= y + rand; coloana++)
			if ((x - rand) * (x - rand) + (y - coloana) * (y - coloana) <= ray * ray)
				canvas[rand][coloana] = ch;
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
	DrawLine(top, left, top, right, ch);
	DrawLine(bottom, left, bottom, right, ch);
	DrawLine(top, left, bottom, left, ch);
	DrawLine(top, right, bottom, right, ch);
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
	for (int i = top + 1; i <= bottom - 1; i++)
		for (int j = left + 1; j <= right - 1; j++)
			canvas[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch) {
	canvas[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
	int m = (y2 - y1) / (x2 - x1);
	int b = y1 - m * x1;
	for (int x = x1; x <= x2; x++) {
		int y = m * x + b;
		SetPoint(x, y, ch);
	}
}

void Canvas::Print() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			printf("%c", canvas[i][j]);
		printf("\n");
	}
}

void Canvas::Clear() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			canvas[i][j] = ' ';
}
