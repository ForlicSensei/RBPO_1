#include "lib.h"


void PrintAllPerson(Person* p, int count) {
    printf(" _______________________________________________________________________________________\n");
    printf("|                       |                      |                       |                |\n");
    printf("|          Name         |      Last_Name       |      Middle name      |       Age      |\n");
    printf("|_______________________|______________________|_______________________|________________|\n");
    for (int i = 0; i < count; i++) {
        printf("|%23s|%22s|%23s|%16d|\n", p[i].firstName, p[i].secondName, p[i].thirdName, p[i].birthYear);
    }
    printf("|_______________________|______________________|_______________________|________________|\n");
}
