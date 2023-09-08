#include<iostream>

using namespace std;

typedef struct {
	double x, y, z;
}vector3D;


vector3D calculateResult(vector3D, vector3D);

int main() {
	vector3D vecA,vecB, result;

	cout << "Insert the element i of vector A: ";
	cin >> vecA.x;
	cout << "Insert the element j of vector A: ";
	cin >> vecA.y;
	cout << "Insert the element k of vector A: ";
	cin >> vecA.z;

	cout << "Insert the element i of vector B: ";
	cin >> vecB.x;
	cout << "Insert the element j of vector B: ";
	cin >> vecB.y;
	cout << "Insert the element k of vector B: ";
	cin >> vecB.z;
	cout << endl;

	result = calculateResult(vecA, vecB);

	cout << "The result is: " << result.x << "i " << result.y << "j " << result.z << "k " << endl;

	return 0;
}

vector3D calculateResult(vector3D a, vector3D b) {
	vector3D result;
	result.x = (a.y * b.z) + -1 * (b.y * a.z);
	result.y = -1*((a.x * b.z) + -1 * (a.z * b.x));
	result.z = (a.x * b.y) + -1 * (a.y * b.x);
	return result;
}