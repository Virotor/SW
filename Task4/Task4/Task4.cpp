#include<iostream>
using namespace std;
int main() {
	int hole_length, hole_width;                                              

	cout << "Enter hole length: "; cin >> hole_length;
	cout << "Enter the width of the hole: "; cin >> hole_width;
	int shape_length, shape_width, shape_height;
	cout << "Enter the length of the shape: "; cin >> shape_length;
	cout << "Enter the width of the shape: "; cin >> shape_width;
	cout << "Enter the height of the shape: "; cin >> shape_height;
	if (((hole_length >= shape_length && hole_width >= shape_width) || (hole_length >= shape_width && hole_width >= shape_length)) ||
		((hole_length >= shape_length && hole_width >= shape_height) || (hole_length >= shape_height && hole_width >= shape_length)) ||
		((hole_length >= shape_height && hole_width >= shape_width) || (hole_length >= shape_width && hole_width >= shape_height))) {
		cout << "The shape will go through the hole" << endl;
	}
	else {
		cout << "Shape does not fit into hole" << endl;
	}
}     
   