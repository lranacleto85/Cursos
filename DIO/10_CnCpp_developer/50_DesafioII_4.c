#include <stdio.h>
#include <stdlib.h>

struct Livro {
  char titulo[50];
  char autor[50];
  int ano;
};

int main() {
  int n;
  scanf("%d", &n);
  struct Livro biblioteca[n];
  int indiceLivroMaisAntigo;
  
  for (int i = 0; i < n; i++) {
    scanf(" %[^\n]%*c", biblioteca[i].titulo);
    scanf(" %[^\n]s", biblioteca[i].autor);
    scanf("%d", &biblioteca[i].ano);
    if (i == 0 || biblioteca[i].ano < biblioteca[indiceLivroMaisAntigo].ano) indiceLivroMaisAntigo = i; 
  }
  
  printf("%s\n",biblioteca[indiceLivroMaisAntigo].titulo); 
  printf("%s\n",biblioteca[indiceLivroMaisAntigo].autor);
  printf("%d",biblioteca[indiceLivroMaisAntigo].ano);
  
  return 0;
}