#include <stdio.h>
void printtable(int n);

int main () {
int n;    
printf("Enter the number : ");
scanf("%d", &n);
printtable(n); // argument (actual parameter)
return 0;
}

void printtable(int n){   // formal parameter 
    for(int i=1; i<=10; i++){
        printf("%d \n", i*n);
    }
}