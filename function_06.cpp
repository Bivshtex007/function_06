#include <iostream>
#include <cmath>
using namespace std;

// Formula to find Sphere Volume
void sphereVolume(float sideOfCube) {
	cout << ((1.333) * 3.14) * (pow((sideOfCube * (pow(3, 0.5)/2)), 3));
}
// Formula to find Cube Volume
void cubeVolume(float sideOfCube) {
	cout << pow(sideOfCube, 3);
}
//Formula to fing the Volume of Pyramid inside of Cube
void pyramidInsideCubeVolume(float sideOfCube) {
cout << 0.333 * pow(sideOfCube, 3);
}
// Formula to find the Radius of a Sphere
void radiusOfSphere(float sideOfCube) {
	cout << sideOfCube*(pow(3, 0.5)/2);
}

int main() {

	float sideOfCube;

	cout << "Enter the Length of the side of Cube in Meters" << endl;
	cin >> sideOfCube;
	cout << "The Cube Volume will be... " << endl;
	cubeVolume(sideOfCube);
	cout << endl;

	cout << "Now, the Radius of Sphere built aroung the Cube will be...:" << endl;
	radiusOfSphere(sideOfCube);
	cout << endl;

	cout << "The volume of Pyramid Winside of a Cube will be..." << endl;
	pyramidInsideCubeVolume(sideOfCube);
	cout << endl;

	cout << "The Volume of Sphere will be...:" << endl;
	sphereVolume(sideOfCube);
	cout << endl;

	return 0;

}