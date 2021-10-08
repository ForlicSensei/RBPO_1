#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
typedef struct Person Person;
int CompareString(const char* lhs, const char* rhs);

struct Person {
    char* firstName;
    char* secondName;
    char* thirdName;
    unsigned short int birthYear;
};

enum SortType {
    ASC=1,
    DESC=2
};

void Sort(struct Person *persons, int count, enum SortType sortType);
Person* GetPersons(int argc, char* argv[], int* count);
void PrintAllPerson(Person* p, int count);