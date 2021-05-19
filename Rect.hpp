/*
 * Rect.hpp
 *
 *  Created on: May 19, 2021
 *      Author: flyin
 */

class Rect{

	int length;
	int width;
	int area;


public:

	Rect(){

		length = 10;
		width = 20;
		area = length * width;

	}

	Rect(int,int);

	Rect(int,int,int);

	int getLength();

	int getWidth();

	int getArea();

	void setLength(int);

	void setWidth(int);

	void setArea(int);


};
