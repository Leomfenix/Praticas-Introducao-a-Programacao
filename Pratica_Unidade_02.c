// C�digo da pr�tica da unidade 2 de Introdu��o a Programa��o (Nivelamento)

#include <stdio.h>

main() {
	int codigo;
	float precomp, imp, lucro, prevend;
	
	printf("\nENTRADA DE DADOS DO PRODUTO\n");
	
	printf("Digite o codigo do produto: ");
	scanf("%d", &codigo);
	printf("Digite o preco de compra: R$ ");
	scanf("%f", &precomp);

	imp = precomp * 0.35;
	lucro = precomp * 0.47;
	prevend = precomp + imp + lucro;

	printf("\nLISTA DOS DADOS DO PRODUTO");

	printf("\n+-----------------------------------------------------------------------+");
	printf("\n| Codigo | Preco Compra | Imposto | Lucro | Preco Venda | Classificacao |");
	printf("\n+-----------------------------------------------------------------------+");
	printf("\n| %6d | %12.2f | %7.2f | %5.2f | %11.2f | ************* |", codigo, precomp, imp, lucro, prevend);
	printf("\n+-----------------------------------------------------------------------+");

	getch();
}
