#include <stdio.h>
#include <stdlib.h>

// 3 Ways to declare a struct 

/* 1st way is by using a tag only
struct Person {
    int age;
    char *fname;
    char *lname;
}

Variables must use the following declaration

struct Person p;

*/

/* 2nd way is by using a tag only

struct person
{
    int age;
    char *fname;
    char *lname;
};

typedef struct person Person;

Variables can now use the Pserson type definition
Person p;
*/

/* Last Way is a modified version of the second way */
typedef struct {int age; char *fname; char *lname;} Person;

void printPerson(Person person);

int main(void) {
    /* Declaration */
    Person p;

    /* Initialization */
    p.age = 37;
    p.fname = "Josh";
    p.lname = "Stephens";
    printPerson(p);

    /* Declaration and Initialization in one pass */
    Person p2 = {36, "Kara", "Stephens"};
    printPerson(p2);

    return EXIT_SUCCESS;
}

void printPerson(Person person) {
    printf("Age: %d, First Name: %s, Last Name: %s\n", person.age, person.fname, person.lname);
}