#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

// function prototype
struct student
getInformation();

int main()
{
    struct student s;
    s.age = 17;
    1 s = getInformation();

    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);

    return 0;
}
struct student getInformation()
{
    struct student s1;

    printf("Enter name: ");
    scanf("%[^\n]%*c", s1.name);

    return s1;
}