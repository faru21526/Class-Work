#include<stdio.h>
int main ()
{
   int a[2][3],trans[3][2];
   int i,j;
   printf ("Enter the elements: ");

   for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
   }
   for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
   }
   for(i=0;i<2;i++){
    for(j=0;j<3;j++){
        trans[j][i]=a[i][j];
    }
}
printf("transpose of the matrix is :\n");
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
            printf("%d ",trans[i][j]);
    }
    printf("\n");
}
//print the second row of transpose a
printf("The second row of the transpose matrix is:\n");
for(i=0;i<3;i++){
    for(j=1;j<2;j++){
        printf("%d",trans[i][j]);
    }
    printf("\n");
}
printf("The first column of is:");
for(i=0;i<1;i++){
    for(j=0;j<3;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}














return 0;
}
