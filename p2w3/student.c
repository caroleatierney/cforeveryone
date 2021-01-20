/* Code HomeWork 3Week
   Claudio Sobral Programmer
   Dec 11, 2021

   ALL CREDITS FOR https://www.codesdope.com/c-typedef/, https://www.cs.uic.edu/~jbell/CourseNotes/C_Programming/Structures.html
   AND https://stackoverflow.com/questions/47566397/error-in-using-strcpy for having inspired
   the creation of this code with its examples and guidelines. Thank you all and God bless you!
*/

#include <stdio.h>                                           //
#include <stdlib.h>                                          // This is libraries necessary to build the Code
#include <string.h>

typedef struct element{
   int order;
   char name[15], atomic[5];                                // Here, the base estructure (Elements) of the code was created
   double weight;                                           // where a the weight needs be double function.
}elements;

int main()

{
elements p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;          // These will be the variables that will store the 10 Elements information

  p1.order = 1;
  strcpy(p1.name,"Hydrogen");
  strcpy(p1.atomic,"H");
  p1.weight = 1.008;
  p2.order = 2;
  strcpy(p2.name,"Helium");
  strcpy(p2.atomic,"He");
  p2.weight = 4.003;
  p3.order = 3;
  strcpy(p3.name,"Lithium");
  strcpy(p3.atomic,"Li");
  p3.weight = 6.941;
  p4.order = 4;
  strcpy(p4.name,"Beryllium");
  strcpy(p4.atomic,"Be");
  p4.weight = 9.012;
  p5.order = 5;
  strcpy(p5.name,"Boron");
  strcpy(p5.atomic,"B");                                                    // Each Element information is identified
  p5.weight = 10.811;                                                       //  by letter "p" with a number.
  p6.order = 6;
  strcpy(p6.name,"Carbon");
  strcpy(p6.atomic,"C");
  p6.weight = 12.011;
  p7.order = 7;
  strcpy(p7.name,"Nitrogen");
  strcpy(p7.atomic,"N");
  p7.weight = 14.007;
  p8.order = 8;
  strcpy(p8.name,"Oxygen");
  strcpy(p8.atomic,"O");
  p8.weight = 15.999;
  p9.order = 9;
  strcpy(p9.name, "Fluorine");
  strcpy(p9.atomic, "F");
  p9.weight = 18.998;
  p10.order = 10;
  strcpy(p10.name,"Neon");
  strcpy(p10.atomic,"Ne");
  p10.weight = 20.180;


 printf("\nOrder\tNAME\t\tID-ATOMIC\tWEIGHT\n");
 printf("%d\t%s\t%s\t\t%f\n",p1.order, p1.name,p1.atomic,p1.weight);
 printf("%d\t%s\t\t%s\t\t%f\n",p2.order, p2.name,p2.atomic,p2.weight);
 printf("%d\t%s\t\t%s\t\t%f\n",p3.order, p3.name,p3.atomic,p3.weight);
 printf("%d\t%s\t%s\t\t%f\n",p4.order, p4.name,p4.atomic,p4.weight);
 printf("%d\t%s\t\t%s\t\t%f\n",p5.order, p5.name,p5.atomic,p5.weight);           // Results output screen
 printf("%d\t%s\t\t%s\t\t%f\n",p6.order, p6.name,p6.atomic,p6.weight);
 printf("%d\t%s\t%s\t\t%f\n",p7.order, p7.name,p7.atomic,p7.weight);
 printf("%d\t%s\t\t%s\t\t%f\n",p8.order, p8.name,p8.atomic,p8.weight);
 printf("%d\t%s\t%s\t\t%f\n",p9.order, p9.name,p9.atomic,p9.weight);
 printf("%d\t%s\t\t%s\t\t%f\n",p10.order, p10.name,p10.atomic,p10.weight);


return 0;

}
