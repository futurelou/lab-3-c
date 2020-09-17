#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <string.h>
 
 int print_n(const char *a, int n){
  if  (n==0){
    return 0;
  }
  
  else {
   printf("%s\n",a);
    return (n+print_n(a,n-1));
  }
  }

int sum_n(int n){
  if (n == 0){
    return 0;
  }
  else if (n <= 1){
    return 1 ;
  }
  else{
    return(n+sum_n(n-1));
    }
    }

int main(void) { 
int n;
char *res = readline("Enter an int: ");
int t;
n = atoi (res); 
t = sum_n(n);
printf("sum is %i.\n",t);

char *a = readline("Enter a string: ");


print_n(a, n);
}