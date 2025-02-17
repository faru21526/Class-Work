#include<stdio.h>
int main () {
int a[10];
int n;
printf("Enter the five elements: ");
scanf("%d",&n);
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<5;i++){
    printf("a[%d]=%d",i,a[i]);
    printf("\n");
}
int num,pos;
printf("Enter position and number: ");
scanf("%d %d",&pos,&num);
for (int i=5;i>=pos;i--){
    a[i+1]=a[i];
}
a[pos]=num;
for(int i=0;i<6;i++){
    printf("a[%d]=%d",i,a[i]);
    printf("\n");
}
return 0;
}
