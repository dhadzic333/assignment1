#include "vectors.h"

//vector init function
vector vector_init(float x, float y, float z){
 vector v;
 v.x=x;
 v.y=y;
 v.z=z;
 v.length=sqrt(x*x+y*y+z*z);
	return v;
}

//write vector_add function that takes two vectors as parameters and returns a vector that is the sum of the two vectors
//<--- code goes here
vector vector_add(vector v1, vector v2) {
	vector v3;
	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	v3.z = v1.z + v2.z;
	float root;
	root = v3.x*v3.x;
	root += v3.y*v3.y;
	root += v3.z*v3.z;
	v3.length = sqrt(root);
		return v3;
}

//write vector_dot function that takes two vectors as parameters and returns a float which is the dot product (look it up if you don't know what a dot product is)
//<--- code goes here
float vector_dot(vector v1, vector v2) {
	float dot;
	dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
		return dot;
}

//write vector_normalize function that takes a pointer to a vector as a parameter and modify the vector by dividing each of the x,y,z components by its length. Check if the length is zero and return 1 if it is zero (unsuccessful normalization) , otherwise return 0 (successful normalization)
//<--- code goes here
int vector_normalize(vector *v) {
	if ((*v).length == 0) {
		return 1;
	} else {
		(*v).x = (*v).x / (*v).length;
		(*v).y = (*v).y / (*v).length;
		(*v).z = (*v).z / (*v).length;
		return 0;
	}
}

//write vector_print function that prints out the x,y,z and length of a vector on separate lines
//<--- code goes here
void vector_print(vector v) {
	printf("\n");
	printf("%9.4f", v.x);
	printf("%9.4f", v.y);
	printf("%9.4f", v.z);
	printf("%9.4f", v.length);
	printf("\n");
}
