#include<stdio.h>
#include <string.h>
struct details{
    char str[10];
    int roll_no;
    float marks;
    
};
void update_marks(struct details *x){
    int i;
    printf("ENter the new mark: ");
    scanf("%d",&i);
    x->marks=i;
}
int main(){
    struct details s1={"vidya",3,45.5};
    printf("Name: %s roll_no %d marks %.2f ",s1.str,s1.marks,s1.roll_no);
    update_marks(&s1);
    printf("Updated things : name : %s roll_no %d marks %.2f ",s1.str,s1.marks,s1.roll_no);
    s1.marks=200;
    printf("Name: %s roll_no %d marks %.2f ",s1.str,s1.marks,s1.roll_no);
    return 0;
}