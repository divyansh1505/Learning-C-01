# include<stdio.h>
# include<math.h>

int main () {
int n;
printf("Run the program \n");
for (int i=5; i<=50; i++){
     if(i%2==0){
          continue;
     }
     printf("%d \n", i);
}

return 0; 
}
