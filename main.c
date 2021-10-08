#include "lib.h"


int main(int argc,char* argv[] ){
    setlocale(LC_ALL, "Rus");
    if (argc == 1) {
        printf("Введите параметры!");
        return 0;
    }
    int count = 0;

    Person* p = GetPersons(argc, argv, &count);
    int type_sort = 0;
    printf("1 - ASC, 2 - DESC: ");  scanf("%d", &type_sort);

    if (type_sort == 1) {
        Sort(p, count, ASC);
    }
    else if (type_sort == 2){
        Sort(p, count, DESC);
    }
    else {
        printf("Введите либо 1 либо 2.");
        return 0;
    }

    PrintAllPerson(p, count);


    getchar();

    return 0;
}