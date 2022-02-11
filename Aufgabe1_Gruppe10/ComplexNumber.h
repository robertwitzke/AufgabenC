#ifndef COMPLEXNUMBER_H // Um Mehrfachdefinition auszuschlieﬂen!
#define COMPLEXNUMBER_H

class ComplexNumber {

public:

	//Setter for each coordinate and the form
	void setCartesianCoords(double a, double b);
	void setPolarCoords(double r, double phi);
	void setRealPart(double a);
	void setImaginaryPart(double b);
	void setRadius(double r);
	void setAngle(double phi);

	//Getter for each coordinate
	double getRealPart() { return m_a; }
	double getImaginaryPart() { return m_b; }
	double getRadius() { return m_r; }
	double getAngle() { return m_phi; }
	double getAbsoluteValue() { return m_absoluteVal; }

	std::string toCartesianString();
	std::string toPolarString();
	std::string toString();

private:

	double m_a, m_b, m_r, m_phi, m_absoluteVal;

	void calculateRealPart();
	void calculateImaginaryPart();
	void calculateRadius();
	void calculateAngle();
	void calculateAbsoluteValue();

};

#endif