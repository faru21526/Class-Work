#include<stdio.h>
int main (){
    int c,n,d,flag=0,t,arr[100];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d integer\n",n);
    for (c=0;c<n;c++);
    scanf("%d",&arr[c]);

    for(c=1;c<=n-1;c++){
        t=arr[c];

        for(d=c-1;d>=0;d--){
            if(arr[d]>t){
              arr[d+1]=arr[d];
              flag=1;
            }
            else
                break;
        }
        if(flag)
            arr[d+1]=t;
        }
        printf("Sorted list in ascending order:\n");
        for(c=0;c<=n-1;c++){
            printf("%d\n",arr[c]);
        }



 return 0;

}
