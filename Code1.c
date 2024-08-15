# include<stdio.h>
# include<math.h>

void Namaste();
void Bonjour(); 

int main() {
     printf("Enter F for french and I for Indian : ");
     char ch;
     scanf("%c", &ch);

     if(ch == 'I'){
          Namaste();
     } else if(ch == 'F'){
          Bonjour();
     } else {
          printf("Invalid Response");
     }

return 0;
}
     void Namaste(){
          printf("Namaste");
     }
     void Bonjour() {
          printf("Bonjour");

     }
