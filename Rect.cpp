/*
 * Rect.cpp
 *
 *  Created on: May 19, 2021
 *      Author: flyin
 */

#include "Rect.hpp"


int Rect::getLength(){

	return length;

}

int Rect::getWidth(void){

	return width;

}

int Rect::getArea(void){

	return area;

}

void Rect::setLength(int newLength){

length = newLength;
if(area != width * length){
	area = length * width;
}

}

void Rect::setWidth(int newWidth){

width = newWidth;
if(area != width * length){
	area = length * width;
}


}


void Rect::setArea(int newArea){

area = newArea;

}

Rect::Rect(int newLength, int newWidth){

	length = newLength;
	width = newWidth;
	area = length * width;
}

Rect::Rect(int newLength, int newWidth, int newArea){

	length = newLength;
	width = newWidth;
	area = newArea;

}

Rect Rect::operator+(Rect rect2){

		Rect newRect;
		newRect.length = length + rect2.length;
		newRect.width = width + rect2.width;
		newRect.area = area + rect2.area;
		return newRect;

}





