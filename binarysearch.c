#include <stdio.h>
 
int main()
{
   int i, beg, end, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d",&array[i]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   beg = 0;
   end = n - 1;
   middle = (beg+end)/2;       ///this is the middle        
 
   while (beg <= end)
    {
      if (array[middle] < search)          //If middle term is less then searched term
         end = middle + 1;           //Increment end by middle value+1          
      else if (array[middle] == search) 
	  {
         printf("\n%d found at location %d.\n", search, middle+1);
         break;
      }
      else                     //If middle term is greater then searched term 
         end = middle - 1;       //Decrement end by middle value-1 
      middle = (beg + end)/2;
   }
   if (beg > end)              
      printf("\nNot found! %d isn't present in the list.\n", search);
 
   return 0;  
}
