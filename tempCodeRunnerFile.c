#include <stdio.h>

int main() {
    int a[10], i, index;

   
     printf("Enter the 10 number:\n");
    
    for (i = 0; i < 10; i++) 
    {
        
        printf("Enter the value at %d position: ",i+1);
        scanf("%d",&a[i]);
       
    }
     printf("\nEnter the index value bet(0-9):\n");
     scanf("%d",& index+1);
    
    for (i = index+1; i < 9; i++)
    {
         a[i] =a[i+1]; 
    }          
    printf("Array after deletion: ");
     for (i=0;i<9;i++)
    {
       printf("%d\t",a[i]);
    } 
    return 0;
}
