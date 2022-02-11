#define M_PI acos(-1.0)
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "ComplexNumber.h"

void ComplexNumber::setCartesianCoords(double a, double b) {
	m_a = a;
	m_b = b;
	calculateRadius();
	calculateAngle();
}

void ComplexNumber::setPolarCoords(double r, double phi) {
	m_r = r;
	m_phi = phi;
	calculateRealPart();
	calculateImaginaryPart();
}

void ComplexNumber::setRealPart(double a) {
	m_a = a;
}

void ComplexNumber::setImaginaryPart(double b) {
	m_b = b;
}

void ComplexNumber::setRadius(double r) {
	m_r = r;
}

void ComplexNumber::setAngle(double phi) {
	m_phi = phi;
}

std::string ComplexNumber::toCartesianString() {

	std::stringstream s;
	s << "Realpart: " << m_a << ", Imaginary Part: " << m_b << std::endl;
	return s.str();

}

std::string ComplexNumber::toPolarString() {
	std::stringstream s;
	s << "Radius: " << m_r << ", Angle: " << m_phi << std::endl;
	return s.str();
}

std::string ComplexNumber::toString() {
	std::stringstream s;
	s << "Realpart: " << m_a << ", Imaginary Part: " << m_b << ", Radius: " << m_r << ", Angle: " << m_phi << std::endl;
	return s.str();
}

void ComplexNumber::calculateRealPart() {
	double bogenmass = (m_phi / 180.0) * M_PI;
	m_a = m_r * cos(bogenmass);
}

void ComplexNumber::calculateImaginaryPart() {
	double bogenmass = (m_phi / 180.0) * M_PI;
	m_b = m_r * sin(bogenmass);
}

void ComplexNumber::calculateRadius() {
	m_r = sqrt(m_a * m_a + m_b * m_b);
}

void ComplexNumber::calculateAngle() {
	double value = 180/M_PI * atan2(m_b, m_a);
	if (value < 0) {
		m_phi = 360 + value;
	}
	else {
		m_phi = value;
	}
}

void ComplexNumber::calculateAbsoluteValue() {
	m_absoluteVal = sqrt(m_a * m_a + m_b * m_b);
}