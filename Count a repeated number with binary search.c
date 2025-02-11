#include<stdio.h>
int main () {
    int arr[100],first,middle,last,search,i,n,count=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d integar \n",n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
      printf("Enter a number to count:\n");
      scanf("%d",&search);

      first=0;
      last=n-1;
      middle=(first+last)/2;
      while(first<=last){
        if(arr[middle]<search)
            first=middle+1;
        else if(arr[middle]==search){
                count=count+1;
            break;
        }
        else
            last=middle-1;
            middle=(first+last)/2;
        }
        count++;
        printf("%d is fount %d times",search,count);

      return 0;
}
