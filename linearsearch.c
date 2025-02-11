//linear sequential search
#include<stdio.h>
int main () {
    int arr[100],search,i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d integar \n",n);


      printf("Enter a number to search:\n");
      scanf("%d",&search);

      for(i=0;i<n;i++){
        if(arr[i]==search){
            printf("%d is present at location %d.\n",search,i+1);
            break;
        }
      }
if(i==n)
 printf("%d isn't present in the array.\n",search);
 return 0;




}
