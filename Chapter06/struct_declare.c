#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 0
struct _person {
    char* firstName;
    char* lastName;
    char* title;
    unsigned int age;
};
#endif

typedef struct _person{
    char* firstName;
    char* lastName;
    char* title;
    unsigned int age;

}Person;

typedef struct _alternatePerson {
    char* firstName;
    char* lastName;
    char* title;
    short age;
} AlternatePerson;

void initializePerson(Person *person, const char* fn,
        const char* ln, const char* title, uint age){
    person->firstName = (char*)malloc(strlen(fn)+1);
    strcpy(person->firstName, fn);
    person->lastName = (char*)malloc(strlen(ln)+1);
    strcpy(person->lastName, ln);
    person->title = (char*)malloc(strlen(title)+1);
    strcpy(person->title, title);
    person->age = age;

}
void deallocatePerson(Person *person){
    free(person->firstName);
    free(person->lastName);
    free(person->title);
}
void processPerson(){
    Person person; 
    initializePerson(&person, "Peter", "Underwood", "Manager", 36);

    deallocatePerson(person);

    Person *ptrPerson;
    ptrPerson = (Person*)malloc(sizeof(Person));
    initializePerson(ptrPerson, "Peter", "Underwood", "Manager", 36);
    deallocatePerson(ptrPerson);
    free(ptrPerson);
}
int main(void){
    processPerson();
    Person person; 
    initializePerson(&person, "Peter", "Underwood", "Manager", 36);
    AlternatePerson otherPerson;

    printf("%ld\n", sizeof(Person));
    printf("%ld\n", sizeof(AlternatePerson));
    person.firstName = (char*)malloc(strlen("Emily")+1);
    strcpy(person.firstName,"Emily");
    person.age = 23;
    Person *ptrPerson;
    ptrPerson = (Person*)malloc(sizeof(Person));
    ptrPerson->firstName = (char*)malloc(strlen("Emily")+1);
    strcpy(ptrPerson->firstName,"Emily");
    ptrPerson->age = 23;



    free(person.firstName);
    free(ptrPerson->firstName);
    free(ptrPerson);
    return 0;
}
