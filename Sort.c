#include "lib.h"

void Sort(struct Person* persons, int count, enum SortType sortType) {
    int tmp, k; // готовим начальный шаг
    int s = count;
    if (sortType == ASC) {
        while (count > 1) {
            s /= 1.247f;
            if (s < 1) s = 1; // 0 быть не может, присвоим 1
            k = 0; // нет перестановок
            for (int i = 0; i + s < count; i++) { // двигаемся, пока сравниваемый элемент (на s от текущего) в массиве
                if (CompareStrings(persons[i].firstName, persons[i + s].firstName) == -1) {
                    struct Person tmp = persons[i];
                    persons[i] = persons[i + s];
                    persons[i + s] = tmp;
                } else if (CompareStrings(persons[i].firstName, persons[i + s].firstName) == 0)
                    if (CompareStrings(persons[i].secondName, persons[i + s].secondName) == -1) {
                        struct Person tmp = persons[i];
                        persons[i] = persons[i + s];
                        persons[i + s] = tmp;
                    } else if (CompareStrings(persons[i].secondName, persons[i + s].secondName) == 0)
                        if (CompareStrings(persons[i].thirdName, persons[i + s].thirdName) == -1) {
                            struct Person tmp = persons[i];
                            persons[i] = persons[i + s];
                            persons[i + s] = tmp;
                        } else if (CompareStrings(persons[i].thirdName, persons[i + s].thirdName) == 0)
                            if (persons[i].birthYear <= persons[i + s].birthYear) {
                                struct Person tmp = persons[i];
                                persons[i] = persons[i + s];
                                persons[i + s] = tmp;
                            }
            }
            if (s == 1) // шаг 1, как в обычном пузырьке. Включаем контроль
                count = k + 1;
        }

    }
    else {
        while (count > 1) {
            s /= 1.247f;
            if (s < 1) s = 1; // 0 быть не может, присвоим 1
            k = 0; // нет перестановок
            for (int i = 0; i + s < count; i++) { // двигаемся, пока сравниваемый элемент (на s от текущего) в массиве
                if (CompareStrings(persons[i].firstName, persons[i + s].firstName) == 1) {
                    struct Person tmp = persons[i];
                    persons[i] = persons[i + s];
                    persons[i + s] = tmp;
                } else if (CompareStrings(persons[i].firstName, persons[i + s].firstName) == 0)
                    if (CompareStrings(persons[i].secondName, persons[i + s].secondName) == 1) {
                        struct Person tmp = persons[i];
                        persons[i] = persons[i + s];
                        persons[i + s] = tmp;
                    } else if (CompareStrings(persons[i].secondName, persons[i + s].secondName) == 0)
                        if (CompareStrings(persons[i].thirdName, persons[i + s].thirdName) == 1) {
                            struct Person tmp = persons[i];
                            persons[i] = persons[i + s];
                            persons[i + s] = tmp;
                        } else if (CompareStrings(persons[i].thirdName, persons[i + s].thirdName) == 0)
                            if (persons[i].birthYear >= persons[i + s].birthYear) {
                                struct Person tmp = persons[i];
                                persons[i] = persons[i + s];
                                persons[i + s] = tmp;
                            }
            }
            if (s == 1) // шаг 1, как в обычном пузырьке. Включаем контроль
                count = k + 1;
        }
    }
}