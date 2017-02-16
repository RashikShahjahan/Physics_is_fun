#include <iostream>;
#include <cmath>;

int main() {
	float mass, velocity, force, coeff_static, coeff_kinetic, slopelength, angle;
	std::cin >> mass;
	std::cin >> velocity;
	std::cin >> force;
	std::cin >> coeff_static;
	std::cin >> coeff_kinetic;
	std::cin >> slope_length;
	std::cin >> angle;
}

float gravity() {
	gravity = mass*9.8*sin(angle);
}

float normal() {
	normal = mass*9.8*cos(angle);
}

float friction() {
	if (velocity > 0) friction = normal*coeff_kinetic;
	else friction = normal*coeff_static;
}

float acceleration() {
	
	gross_force = force + gravity;

	if (friction>gross_force)
	{
		net_force = 0;
	}
	else
	{
	net_force=gross_force-friction
	}

	acceleration = net_force/mass;
}

float fvelocity() {
	fvelocity = sqrt(ivelocity*ivelocity - 2 * acceleration*slope_length);
}