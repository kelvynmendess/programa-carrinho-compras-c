#include <stdio.h>
#include <string.h>

int main (){

// Programa de carrinho de compras

char item [50] = "";
float preco = 0.0f;
int quantidade = 0;
char moeda [3]= "R$";
float total = 0.0f;
float desconto = 0.0f;


printf ("Qual item voce deseja comprar?: ");
fgets (item, sizeof (item), stdin);
item[strcspn(item, "\n")] = '\0'; // Remove o caractere de nova linha do final da string

do {
    printf("Qual o preco para cada?: ");
    scanf("%f", &preco);

    if(preco <= 0){
        printf("Preco invalido!\n");
    }

} while(preco <= 0);

do {
    printf("Quantos voce deseja?: ");
    scanf("%d", &quantidade);

    if(quantidade <= 0){
        printf("Quantidade invalida!\n");
    }

} while(quantidade <= 0);

total = preco * quantidade;

printf("\n===== RECIBO =====\n");
printf("Item: %s\n", item);
printf("Preco unitario: %s%.2f\n", moeda, preco);
printf("Quantidade: %d\n", quantidade);
printf("------------------\n");
printf("TOTAL: %s%.2f\n", moeda, total);

total = preco * quantidade;

// Aplica 10% de desconto para compras acima de R$100
if(total >= 100){
    desconto = total * 0.10;
    total -= desconto;
}


printf("\nDesconto aplicado: %s%.2f\n", moeda, desconto);

printf("\nValor total: %s%.2f\n", moeda, total);

return 0;

}