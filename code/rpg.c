#include <stdio.h>
#include <locale.h>
#include <unistd.h>

int dado()
{
	srand(time(0));
	int c = 1 + (rand() % 10);
	printf("%d", c);
	return c;
}

float calcularDano(float danoRecebido, float armadura) {
    
    float reducao = armadura / (armadura + 100); 
    float danoFinal = danoRecebido * (1.0 - reducao); 
    return danoFinal;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int avancar, escolha, dano = 0;
	float vida = 200.0, armadura = 200.0;
    int escolha, numeroDado;
    float dano = 0.0;
	

    numeroDado = dado(); 

    if (numeroDado == 4) {
        dano = 50;
    } else if (numeroDado == 3) {
        dano = 75;
    } else if (numeroDado == 2) {
        dano = 100;
    } else if (numeroDado == 1) {
        dano = 150;
    }

    //printf("Dano inicial: %.2f\n", dano);
    //float danoFinal = calcularDano(dano, armadura);
    //vida -= danoFinal;

   // printf("Dano final após armadura: %.2f\n", danoFinal);
    //printf("Vida restante: %.2f\n", vida);


	printf("|| Instruções para o RPG ||\n\n");
	sleep(2);
	
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
	
	printf("5)\nNome: M'Baku ");
	printf("\nClasse: Mago \n");
	
	printf("\n");
	
	scanf("%d", &avancar);
	
	if(avancar == 1){
		printf("\n12:40 - Local de Trabalho\n\n");
		printf("\nVocê finalizou seu serviço. Seu chefe está vindo falar com você.\n");
		sleep(5);
		printf("\nChefe - Estamos com alguns problemas lá dentro, precisamos que você faça um pouco de hora extra para nos ajudar. \n");
		sleep(5);
		printf("\nTom - Ok\n");
		sleep(5);
		printf("\n13:05 - Hora extra finalizada\n\n");
		printf("Você está a caminho da faculdade, andando.\n");
		sleep(5);
		printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		sleep(5);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		sleep(5);
		print("\n\n")
		printf("3\n");
		sleep(3);
		printf("2\n");
		sleep(3);
		printf("1");
		sleep(3);
		printf("\n\n");
		printf("---THE GAME HAS STARTED---");
		sleep(7);
		printf("Você e mais 4 pessoas, se encontram perdidos em uma sala de um castelo em que o mundo é governado por um ditador demônio.\nCerca de 30 minutos se passaram até eles entenderem o que aconteceu de fato para eles estarem ali, juntos e reunidos.");
		sleep(7);
		printf("Nesta conversa você e seus 4 companheiros percebem que na verdade eles são amigos de faculdade e que estão em um mundo totalmente paralelo e fora da realidade em que eles viviam.");
		sleep(5);
		printf("Vocês começam a se preparar para enfrentar futuros monstros, até ficarem fortes o suficiente para derrotar o BOSS final.");
		sleep(5);
	}else if(avancar == 2){
		printf("\n12:15 - Praia\n\n");
		printf("\nO seu treinamento matinal foi concluido. Não tendo muito o que fazer, você decide pegar suas coisas e ir para faculdade.\n");
		sleep(2);
		printf("\nVocê deu a partida no seu carro e bateu\n");
		sleep(2);
		printf("\nKiber - Não acredito nisso! E agora?!");
		sleep(2);
		printf("\n Leva um tempo até que você consiga  ir para faculdade.\n");
		sleep(2);
		printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		sleep(2);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		sleep(5);
		print("\n\n")
		printf("3\n");
		sleep(3);
		printf("2\n");
		sleep(3);
		printf("1");
		sleep(3);
		printf("\n\n");
		printf("---THE GAME HAS STARTED---");
		sleep(7);
		printf("Você e mais 4 pessoas, se encontram perdidos em uma sala de um castelo em que o mundo é governado por um ditador demônio.\nCerca de 30 minutos se passaram até eles entenderem o que aconteceu de fato para eles estarem ali, juntos e reunidos.");
		sleep(7);
		printf("Nesta conversa você e seus 4 companheiros percebem que na verdade eles são amigos de faculdade e que estão em um mundo totalmente paralelo e fora da realidade em que eles viviam.");
		sleep(5);
		printf("Vocês começam a se preparar para enfrentar futuros monstros, até ficarem fortes o suficiente para derrotar o BOSS final.");
		sleep(5);
	}else if(avancar == 3){
		printf("\n12:00 - Casa\n\n");
		printf("\Você se encontra jogando uma partida. Seu desempenho no jogo está no ápice de sua gameplay. Você se passa do horário.\n");
		sleep(5);
		printf("\n12:50");
		printf("\nDex - Putz, passei do horário. Vou me arrumar mais rápido que posso!\n");
		sleep(5);
		printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		sleep(5);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		sleep(5);
		print("\n\n")
		printf("3\n");
		sleep(3);
		printf("2\n");
		sleep(3);
		printf("1");
		sleep(3);
		printf("\n\n");
		printf("---THE GAME HAS STARTED---");
		sleep(7);
		printf("Você e mais 4 pessoas, se encontram perdidos em uma sala de um castelo em que o mundo é governado por um ditador demônio.\nCerca de 30 minutos se passaram até eles entenderem o que aconteceu de fato para eles estarem ali, juntos e reunidos.");
		sleep(7);
		printf("Nesta conversa você e seus 4 companheiros percebem que na verdade eles são amigos de faculdade e que estão em um mundo totalmente paralelo e fora da realidade em que eles viviam.");
		sleep(5);
		printf("Vocês começam a se preparar para enfrentar futuros monstros, até ficarem fortes o suficiente para derrotar o BOSS final.");
		sleep(5);
	}else if(avancar == 4){
		printf("\n12:30 - Saindo de Casa\n\n");
		printf("\nVocê vai pra faculdade e recebe uma ligação do seu amigo falando que o trânsito estava congestionado.");
		sleep(5);
		printf("\nJax - Que merda!, vou me atrasar pra faculdade porque ta tudo engarrafado, bacana (ironia).");
		sleep(5);
		printf("\nA chegada para o seu destino foi adiada.\n");
		sleep(5);
		printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		sleep(5);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		sleep(5);
		print("\n\n")
		printf("3\n");
		sleep(3);
		printf("2\n");
		sleep(3);
		printf("1");
		sleep(3);
		printf("\n\n");
		printf("---THE GAME HAS STARTED---");
		sleep(7);
		printf("Você e mais 4 pessoas, se encontram perdidos em uma sala de um castelo em que o mundo é governado por um ditador demônio.\nCerca de 30 minutos se passaram até eles entenderem o que aconteceu de fato para eles estarem ali, juntos e reunidos.");
		sleep(7);
		printf("Nesta conversa você e seus 4 companheiros percebem que na verdade eles são amigos de faculdade e que estão em um mundo totalmente paralelo e fora da realidade em que eles viviam.");
		sleep(5);
		printf("Vocês começam a se preparar para enfrentar futuros monstros, até ficarem fortes o suficiente para derrotar o BOSS final.");
		sleep(5);
	}else if(avancar == 5){
		printf("\n13:10 - Faculdade\n\n");
		printf("\nComo de costume você se encontra no laboratório organizando seus experimentos.\n");
		sleep(5);
		printf("\nM'Baku - Cara, com certeza não era pra ter ocorrido isso!\n");
		sleep(5);
		printf("Ao olhar pra baixo fica nítido que sua mistura de elementos químicos expele faíscas de energia\n");
		sleep(5);
		printf("\nM'Baku - Oh não...\n");
		sleep(5);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		sleep(5);
		print("\n\n")
		printf("3\n");
		sleep(3);
		printf("2\n");
		sleep(3);
		printf("1");
		sleep(3);
		printf("\n\n");
		printf("---THE GAME HAS STARTED---");
		sleep(7);
		printf("Você e mais 4 pessoas, se encontram perdidos em uma sala de um castelo em que o mundo é governado por um ditador demônio.\nCerca de 30 minutos se passaram até eles entenderem o que aconteceu de fato para eles estarem ali, juntos e reunidos.");
		sleep(7);
		printf("Nesta conversa você e seus 4 companheiros percebem que na verdade eles são amigos de faculdade e que estão em um mundo totalmente paralelo e fora da realidade em que eles viviam.");
		sleep(5);
		printf("Vocês começam a se preparar para enfrentar futuros monstros, até ficarem fortes o suficiente para derrotar o BOSS final.");
		sleep(5);
	}
	
	
	
	return 0;
}