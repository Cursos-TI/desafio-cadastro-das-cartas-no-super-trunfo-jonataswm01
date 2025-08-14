#include <stdio.h>

/*
Programa: Super Trunfo - Cadastro de Cartas (Nível 1)
Descrição: Lê e exibe os dados de duas cartas de cidades sem usar
estruturas de repetição ou decisão. Sequência simples de instruções.
*/

int main(void) {
	/* Tamanhos máximos para strings (inclui o terminador '\0') */
	char estado1;
	char codigo1[4]; /* Ex.: A01 (3 chars + \0) */
	char cidade1[100];
	int populacao1;
	float area1;
	float pib1;
	int pontosTuristicos1;
	float densidadePopulacional1;
	float pibPerCapita1;

	char estado2;
	char codigo2[4];
	char cidade2[100];
	int populacao2;
	float area2;
	float pib2;
	int pontosTuristicos2;
	float densidadePopulacional2;
	float pibPerCapita2;

	/* Entrada de dados - Carta 1 */
	printf("Cadastro da Carta 1\n");
	printf("Estado (A-H): ");
	scanf(" %c", &estado1);

	printf("Código (ex: A01): ");
	scanf(" %3s", codigo1);

	printf("Nome da Cidade: ");
	scanf(" %99[^\n]", cidade1);

	printf("População: ");
	scanf(" %d", &populacao1);

	printf("Área (em km²): ");
	scanf(" %f", &area1);

	printf("PIB (em bilhões de reais): ");
	scanf(" %f", &pib1);

	printf("Número de Pontos Turísticos: ");
	scanf(" %d", &pontosTuristicos1);

	/* Cálculos - Carta 1 */
	densidadePopulacional1 = (float)populacao1 / area1;
	pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

	/* Saída - Carta 1 */
	printf("\nCarta 1:\n");
	printf("Estado: %c\n", estado1);
	printf("Código: %s\n", codigo1);
	printf("Nome da Cidade: %s\n", cidade1);
	printf("População: %d\n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
	printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

	/* Entrada de dados - Carta 2 */
	printf("\nCadastro da Carta 2\n");
	printf("Estado (A-H): ");
	scanf(" %c", &estado2);

	printf("Código (ex: B02): ");
	scanf(" %3s", codigo2);

	printf("Nome da Cidade: ");
	scanf(" %99[^\n]", cidade2);

	printf("População: ");
	scanf(" %d", &populacao2);

	printf("Área (em km²): ");
	scanf(" %f", &area2);

	printf("PIB (em bilhões de reais): ");
	scanf(" %f", &pib2);

	printf("Número de Pontos Turísticos: ");
	scanf(" %d", &pontosTuristicos2);

	/* Cálculos - Carta 2 */
	densidadePopulacional2 = (float)populacao2 / area2;
	pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

	/* Saída - Carta 2 */
	printf("\nCarta 2:\n");
	printf("Estado: %c\n", estado2);
	printf("Código: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("População: %d\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
	printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

	return 0;
}


