Program Description: GIVEN THREE HEXAGON SIDE LENGTHS CALCULATE THE AREA OF THE SMALLEST TRIANGLE THAT CAN BE CREATED BY THE THREE NON-INTERSECTING LINES, THE AREA OF THE LARGEST TRIANGLE AND THE TOTAL AREA OF THE HEXAGON.


#include<stdio.h>
#include<math.h>

#define HEXAGONA 2.598076211353316
#define DEGREE (M_PI / 180)
#define AREACONSTANT 0.5

void getSidelengths(double*, double*, double*); //INPUT FUNCTION TO INPUT THE SIDE LENGTHS
double calSmallarea(double); //CALCULATES THE SMALL TRIANGLE AREA
double calLargearea(double); //CALCULATES THE LARGE TRIANGLE AREA
double calHexagonarea(double); //CALCULATES THE TOTAL HEXAGON AREA
void displayResults1(double, double, double, double); //PRINTS EXECUTION FOR HEXAGON 1
void displayResults2(double, double, double, double); //PRINTS EXECUTION FOR HEXAGON 2
void displayResults3(double, double, double, double); //PRINTS EXECUTION FOR HEXAGON 3

int main()
{
 //VARIABLES
 //HEXAGON 1 VARIABLES
 double side1;
 double small_a1;
 double large_a1;
 double hex_a1;

 //HEXAGON 2 VARIABLES
 double side2;
 double small_a2;
 double large_a2;
 double hex_a2;

 //HEXAGON 3 VARIABLES
 double side3;
 double small_a3;
 double large_a3;
 double hex_a3;

 //EXECUTABLE STATEMENTS
 //INPUT FUNCTION
 getSidelengths(&side1, &side2, &side3);

 //HEXAGON 1 CALCULATIONS AND PRINTS
 small_a1 = calSmallarea(side1);
 large_a1 = calLargearea(side1);
 hex_a1 = calHexagonarea(side1);
 displayResults1(side1, small_a1, large_a1, hex_a1);

 //HEXAGON 2 CALCULATIONS AND PRINTS
 small_a2 = calSmallarea(side2);
 large_a2 = calLargearea(side2);
 hex_a2 = calHexagonarea(side2);
 displayResults2(side2, small_a2, large_a2, hex_a2);

 //HEXAGON 3 CALCULATIONS AND PRINTS
 small_a3 = calSmallarea(side3);
 large_a3 = calLargearea(side3);
 hex_a3 = calHexagonarea(side3);
 displayResults3(side3, small_a3, large_a3, hex_a3);

 return(0);
}

void getSidelengths(double *side1, double *side2, double *side3)
{
 //EXECUATABLE STATEMENTS
 printf("Enter the side lengths now: ");
 scanf("%lf %lf %lf", side1,side2,side3);
 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

double calSmallarea(double side_length)
{
 //VARIABLES
 double hyp_split; //HALF OF THE HYPOTENUSE OF THE SMALL TRIANGLE
 double hyp_sm; //HYPOTENUSE FOR SMALL TRIANGLE
 double height_s; //HEIGHT OF SMALL TRIANGLE
 double sm_area; //AREA OF THE SMALL AREA

 //EXECUATABLE STATEMENTS
 hyp_split = sin(60 * DEGREE) * side_length;
 hyp_sm = hyp_split * 2;
 height_s = sin(30 * DEGREE) * side_length;
 sm_area = AREACONSTANT * hyp_sm * height_s;

 return(sm_area);
}

double calLargearea(double side_length)
{
 //VARIABLES
 double side_lr; //SIDE LENGTH OF THE LARGE TRIANGLE
 double height_lr; //HEIGHT OF LARGE TRIANGLE
 double lr_area; //LARGE TRIANGLE AREA

 //EXECUATABLE STATEMENTS
 side_lr = (sin(60 * DEGREE) * side_length) * 2;
 height_lr = sin(60 * DEGREE) * side_lr;
 lr_area = AREACONSTANT * side_lr * height_lr;

 return(lr_area);
}

double calHexagonarea(double side_length)
{
 //VARIABLES
 double hex_area; //HEXAGON AREA

 //EXECUATABLE STATEMENTS
 hex_area = ((HEXAGONA) * (pow(side_length, 2)));

 return(hex_area);
}

void displayResults1(double side1, double small_a1, double large_a1, double hex_a1)
{
 //EXECUATABLE STATEMENTS
 printf("Hexagon #:    1  Side length: %10.4f\n", side1);
 printf("Small Triangle Area: %19.4f\n", small_a1);
 printf("Large Triangle Area: %19.4f\n", large_a1);
 printf("Total Hexagon Area: %20.4f\n", hex_a1);
 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

void displayResults2(double side2, double small_a2, double large_a2, double hex_a2)
{
 //EXECUATABLE STATEMENTS
 printf("Hexagon #:    2  Side length: %10.4f\n", side2);
 printf("Small Triangle Area: %19.4f\n", small_a2);
 printf("Large Triangle Area: %19.4f\n", large_a2);
 printf("Total Hexagon Area: %20.4f\n", hex_a2);
 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

void displayResults3(double side3, double small_a3, double large_a3, double hex_a3)
{
 //EXECUATABLE STATEMENTS
 printf("Hexagon #:    3  Side length: %10.4f\n", side3);
 printf("Small Triangle Area: %19.4f\n", small_a3);
 printf("Large Triangle Area: %19.4f\n", large_a3);
 printf("Total Hexagon Area: %20.4f\n", hex_a3);
}

