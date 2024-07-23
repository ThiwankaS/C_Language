#include <stdio.h>
#include <string.h>

typedef struct {
    char name [50];
    char ID[12];
    int age;
    int grade[5];
} Student;

typedef struct {
    int x;
    int y;
} Point;

void print_student(Student student);
void print_points(Point points[]);

int main (void) {

    Student Kevin;
    strcpy(Kevin.name,"Kevin Perera");
    strcpy(Kevin.ID,"PS/2008/366");
    Kevin.age = 25;
    Kevin.grade[0] = 75;
    Kevin.grade[1] = 82;
    Kevin.grade[2] = 97;
    Kevin.grade[3] = 72;
    Kevin.grade[4] = 74;

    print_student(Kevin);

    Point points[10];
    for(int i = 0; i < 10; i++){
        points[i].x = i;
        points[i].y = 10 - i;
    }
    print_points(points);
    return 0;
}

void print_student(Student student){
    printf("Name : %s\n",student.name);
    printf("ID : %s\n",student.ID);
    printf("Age : %d\n",student.age);
    printf("Grades: ");
    for(int i = 0; i < 5; i++)
        printf("%d ",student.grade[i]);
    printf("\n");
}

void print_points(Point points[]){
    for(int j = 0; j < 10; j++){
        printf("p%d,(x%d,y%d) : (%d,%d)\n",j,j,j,points[j].x,points[j].y);
    }
}