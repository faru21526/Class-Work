//binary search
#include<stdio.h>
int main () {
    int arr[100],first,middle,last,search,i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d integar \n",n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
      printf("Enter a number to search:\n");
      scanf("%d",&search);

      first=0;
      last=n-1;
      middle=(first+last)/2;
      while(first<=last){
        if(arr[middle]<search)
            first=middle+1;
        else if(arr[middle]==search){
            printf("%d is found at location %d",search,middle+1);
            break;
        }
        else
            last=middle-1;
            middle=(first+last)/2;

      }
      if(first>last)
        printf("Not found!%d isn't present in the list.\n",search);
      return 0;
}
