#include<stdio.h>
struct employee {
   char name[50];
   int id;
   float sal;
};
void display(struct employee s);
int main() {
   struct employee s1;

   printf("Enter name: ");

   scanf("%s", s1.name);

   printf("Enter id: ");
   scanf("%d", &s1.id);

   printf("Enter sal: ");
   scanf("%d", &s1.sal);

   display(s1); 
   return 0;
}
void display(struct employee s1)    
 {
   printf("\nDisplaying information\n");
   printf("EmpName: %s", s1.name);
   printf("\nEmpID: %d", s1.id);
   printf("\nEmpSal: %d", s1.sal);
}

