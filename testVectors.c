#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "vectors.h"

int main(int argc, char *argv[]){
	vector v1,v2;

 if(argc != 7){
		printf("The correct format is testVectors x1 y1 z1 x2 y2 z2\n");
		return 1;
	}
	//initialize vectors
	v1=vector_init(atof(argv[1]),	atof(argv[2]),atof(argv[3]));
	v2=vector_init(atof(argv[4]),	atof(argv[5]),atof(argv[6]));
	
	//print v1 v2
	 //<--- code goes here
	printf("The original vectors are:\n");
	printf("Vector 1: ");
	vector_print(v1);
	vector_print(v2);


	//add v1 to v2 and print out the result
	//<--- code goes here
	printf("The sum of the vectors is: ");
	vector sum;
	sum = vector_add(v1, v2);
	vector_print(sum);
	printf("\n");
 

	//find dot product of v1 and v2 and print it out
 //<--- code goes here
	printf("The dot product of the vectors is: ");
	float prod;
	prod = vector_dot(v1, v2);
	printf("%9.6f", prod);
	printf("\n");
	
	//normalize v1 and v2 using the normalize method and print out v1 and v2 after normalization
	//if the length is 0 then print out an additional warning message saying that the vector was not normalized
	 //<--- code goes here
	vector *vect1 = &v1;
	vector *vect2 = &v2;
	int first = vector_normalize(vect1);
	int second = vector_normalize(vect2);
	printf("The normalized version of the first vector is: \n");
	vector_print(v1);
	printf("\n");
	printf("The normalized version of the second vector is: \n");
	vector_print(v2);
	printf("\n");
	
	if (first == 1) {
		printf("The first vector was not properly normalized due to the length being 0.\n");
	}
	if (second == 1) {
		printf("The second vector was not properly normalized due to the length being 0.\n");
	}
	

			
 return 0;
}
