#include <stdio.h>
#include <iostream>
using namespace std;
#include "ComplexNumber.h"
#include <string>
#include "Ui.h"

void Ui::run() {

	ComplexNumber cN1, cN2, cN3;
	char input;

	std::cout << "If you want to enter real and imaginary part type 'a' or 'b' for radius and angle.";
	scanf_s("%c", &input, 1);

	if (input == 'a') {
		double realpart;
		double imaginarypart;
		std::cout << "Enter real part: ";
		scanf_s("%lf", &realpart);
		std::cout << "Enter imaginary part: ";
		scanf_s("%lf", &imaginarypart);
		cN1.setCartesianCoords(realpart, imaginarypart);
		std::cout << cN1.toPolarString() << endl;
		std::cout << cN1.toString() << endl;
	}
	else if (input == 'b') {
		double radius;
		double angle;
		std::cout << "Enter radius: ";
		scanf_s("%lf", &radius);
		std::cout << "Enter angle: ";
		scanf_s("%lf", &angle);
		cN2.setPolarCoords(radius, angle);
		std::cout << cN2.toCartesianString() << endl;
		std::cout << cN2.toString() << endl;
	}

	cN3.setPolarCoords(-3.5, 43.1);
	std::cout << cN3.toString() << endl;

}