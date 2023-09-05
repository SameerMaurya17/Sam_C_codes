#include <stdio.h>
int main()
{// using if and esle for checking no. is odd or even
  int A;
  printf("Enter the value of A \n");
  scanf("%d",&A);

  if(A%2==0){
    printf("%d is even ",A);}
  else{
    printf("%d is odd",A);}
  
   return 0;
}