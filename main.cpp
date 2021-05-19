/*
 * main.cpp
 *
 *  Created on: May 19, 2021
 *      Author: flyin
 */

#include <iostream>
#include <stdlib.h>
#include "Rect.hpp"

using namespace std;

int main(void){

	/*****************************/
	// Creating Rectangle instance

	Rect r; // No-arg constructor instance

	cout << "r's area equals : " << r.getArea() << endl;
	cout << "r's length equals : " << r.getLength() << endl;
	cout << "r's width equals : " << r.getWidth() << endl;

	Rect r2(10,20);

	cout << "r2's area equals : " << r2.getArea() << endl;

	r2.setLength(50);

	cout << "r2's area equals : " << r2.getArea() << endl;




}


