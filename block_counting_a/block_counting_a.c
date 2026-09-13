#include <stdio.h>
#include <string.h>
 

#define MAX 100005 // (N ≤ 10^5)
 

int main(void) {
int n;
 

printf("Digite o tamanho da sequencia: ");
scanf("%d", &n); 
 

char s[MAX]; 
 

printf("Digite a sequencia: ");
scanf("%s", s);
 

int tamanho_real = strlen(s);
 

if (tamanho_real != n) {
printf("Erro: o tamanho informado (%d) nao bate com o tamanho da string (%d)\n", n,tamanho_real);
return 1; 
}
 

printf("Tamanho confere! (%d caracteres)\n", n);
 

long long total = 0; // acumulador da resposta final (soma dos 'a' em blocos nao-triviais)
int i = 0;
 

while (i < n) { 
 

int j = i; 
 

while (j < n && s[j] == s[i]) {
j++;
}
if (s[i] == 'a' && tamanho_bloco >= 2) {
total += tamanho_bloco;
}
 

i = j; 
}
 

printf("Total: %lld\n", total); /
 

return 0;
}
