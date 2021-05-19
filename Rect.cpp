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



