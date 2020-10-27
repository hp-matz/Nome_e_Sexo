#include <stdio.h>

int main(void) {

  char nomeUsuario[20] = "";
  char sexo = ' ';

  printf("Escreva o nome do Usuário: ");
  scanf("%s", &nomeUsuario);

  printf("Escreva o sexo do usuário em F ou M: ");
  scanf(" %c", &sexo);

  if( sexo == 'M' || sexo == 'm'){
    printf("O usuário %s é do sexo masculino", nomeUsuario);
  }

  else if( sexo == 'F' || sexo == 'f'){
    printf("O usuário %s é do sexo feminino", nomeUsuario);
  }

  else{
    printf("O usuário %s é de sexo não definido", nomeUsuario);
  }
return 0;
}