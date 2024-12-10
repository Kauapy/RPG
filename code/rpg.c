#include <stdio.h>
#include <locale.h>
#include <unistd.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int avancar, escolha;
	printf("|| Instruções para o RPG ||\n\n");
	printf("\nPressione 1 para avançar.\n");
	scanf("%d", &avancar);
	
	printf("\n\n------ ---- --- --- ---- ------\n");
	printf("\n");
	printf("Escolha seu personagem principal (1 - 5)\n");
	printf("\n");
	
	printf("1)\nNome: Tom");
	printf("\nClasse: Atirador \n");
	
	printf("\n");
	
	printf("2)\nNome: Kiber ");
	printf("\nClasse: Suporte \n");
	
	printf("\n");
	
	printf("3)\nNome: Dex ");
	printf("\nClasse: Ninja/Assassino \n");
	
	printf("\n");
	
	printf("4)\nNome: Jax ");
	printf("\nClasse: Lutador/Tank \n");
	
	printf("\n");
	
	printf("5)\nNome: ** ");
	printf("\nClasse: ** \n");
	
	printf("\n");
	
	scanf("%d", &avancar);
	
	if(avancar == 1){
		printf("\n12:20 - Local de Trabalho\n\n");
		printf("\nVocê finalizou seu serviço. Seu chefe está vindo falar com você.\n");
		scanf("%d", &avancar);
		printf("\nChefe - Estamos com alguns problemas lá dentro, precisamos que você faça um pouco de hora extra para nos ajudar. \n");
		scanf("%d", &avancar);
		printf("\nTom - Ok\n");
		scanf("%d", &avancar);
		printf("\n12:50 - Hora extra finalizada\n\n");
		printf("Você está a caminho da faculdade, andando.\n");
		scanf("%d", &avancar);printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		scanf("%d", &avancar);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		scanf("%d", &avancar);
		sleep(2);
	}else if(avancar == 2){
		printf("\n12:00 - Praia\n\n");
		printf("\nO seu treinamento matinal foi concluido. Não tendo muito o que fazer, você decide pegar suas coisas e ir para faculdade.\n");
		scanf("%d", &avancar);
		printf("\nVocê deu a partida no seu carro e bateu\n");
		scanf("%d", &avancar);
		printf("\nKiber - Não acredito nisso! E agora?!");
		scanf("%d", &avancar);
		printf("\n Leva um tempo até que você consiga  ir para faculdade.\n");
		scanf("%d", &avancar);
		printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		scanf("%d", &avancar);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		scanf("%d", &avancar);
		sleep(2);
	}else if(avancar == 3){
		printf("\n12:00 - Casa\n\n");
		printf("\Você se encontra jogando uma partida. Seu desempenho no jogo está no ápice de sua gameplay. Você se passa do horário.\n");
		scanf("%d", &avancar);
		printf("\n12:50");
		printf("\nDex - Putz, passei do horário. Vou me arrumar mais rápido que posso!\n");
		scanf("%d", &avancar);
		printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		scanf("%d", &avancar);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		scanf("%d", &avancar);
		sleep(2);
	}else if(avancar == 4){
		printf("\n12:30 - Saindo de Casa\n\n");
		printf("\nVocê vai pra faculdade e recebe uma ligação do seu amigo falando que o trânsito estava congestionado.");
		scanf("%d", &avancar);
		printf("\nJax - Que merda, vou me atrasar pra faculdade porque ta tudo engarrafado, bacana (ironia).");
		scanf("%d", &avancar);
		printf("\nA chegada para o seu destino foi adiada.\n");
		scanf("%d", &avancar);
		printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		scanf("%d", &avancar);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		scanf("%d", &avancar);
		sleep(2);
	}else if(avancar == 5){
		
	}
	
	
	
	return 0;
}