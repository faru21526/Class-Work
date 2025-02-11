#include<stdio.h>
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
for(i=0;i<n;i++){
    printf("a[%d]=%d",i,a[i]);
    printf("\n");
}





return 0;


}
