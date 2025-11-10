#include <stdio.h>
#include <string.h>

// Estrutura que representa um território no mapa 🌍
struct Territorio {
    char nome[50];
    char corExercito[30];
    int tropas;
};

int main() {
    struct Territorio mapa[5]; // Vetor estático com 5 territórios
    int i;

    printf("=== 🗺️ Desafio WAR Estruturado – Cadastro Inicial dos Territórios ===\n\n");

    // Cadastro dos 5 territórios
    for (i = 0; i < 5; i++) {
        printf("🛡️ Território %d:\n", i + 1);

        printf("Nome do território: ");
        fgets(mapa[i].nome, 50, stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0'; // remove o \n do final

        printf("Cor do exército dominante: ");
        fgets(mapa[i].corExercito, 30, stdin);
        mapa[i].corExercito[strcspn(mapa[i].corExercito, "\n")] = '\0';

        printf("Número de tropas: ");
        scanf("%d", &mapa[i].tropas);
        getchar(); // limpa o buffer do teclado

        printf("\n");
    }

    // Exibição do estado atual do mapa
    printf("\n=== 🌍 Estado Atual do Mapa ===\n");
    printf("%-20s | %-15s | %-10s\n", "Território", "Cor do Exército", "Tropas");
    printf("----------------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%-20s | %-15s | %-10d\n",
               mapa[i].nome, mapa[i].corExercito, mapa[i].tropas);
    }

    printf("\n🏁 Cadastro concluído! O mapa está pronto para a batalha.\n");

    return 0;
}
