#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <time.h>

int dado()
{
	srand(time(0));
	int c = 1 + (rand() % 10);
	return c;
}
    //5 7 6 3 9
    //if(a == 3 || a == 6 || a == 7 || a == 8 || a == 10)
    //if(a == 1 || a == 4 || a == 9)
    //if(a == 2 || a == 5 || a == 6 || a == 8)
    //if(a == 1 || a == 2 || a == 3 || a == 7 || a == 8 || a == 9 || a == 10)
    //if(a == 5)

int danoG(int a)
{
    int b = 10, c;
    c = a - b;
    return c;
}

int danoM(int a)
{
    int b = 6, c;
    c = a - b;
    return c;
}

int danoL(int a)
{
    int b = 3, c;
    c = a - b;
    return c;
}

int curaTot(int a)
{
    int b = 30, c;
    c = a + b;
    return c;
}

int curaMed(int a)
{
    int b = 6, c;
    c = a + b;
    return c;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int avancar, escolha, sorte, hp[5], xp = 0;
    int curaM = 0, curaT = 0, martelo = 0, espada = 0, escudo = 0;
    int ult = 0, hpEne, protecao = 0;
    hp[0] = 30;
    hp[1] = 35;
    hp[2] = 40;
    hp[3] = 45;
    hp[4] = 25;
	printf("|| Instruções para o RPG ||\n\n");
	
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
        sleep(1);
		printf("\nVocê finalizou seu serviço. Seu chefe está vindo falar com você.\n");
		sleep(5);
		printf("\nChefe - Estamos com alguns problemas lá dentro, precisamos que você faça um pouco de hora extra para nos ajudar. \n");
		sleep(5);
		printf("\nTom - Ok\n\n");
		sleep(5);
		printf("\n13:05 - Hora extra finalizada\n\n");
        sleep(1);
		printf("\nVocê está a caminho da faculdade, andando.\n");
		sleep(5);
        printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		sleep(5);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		sleep(5);
        printf("\n3\n");
        sleep(2);
        printf("\n2\n");
        sleep(2);
        printf("\n1\n");
        sleep(2);
        printf("\n\n=== <:THE GAME HAS STARTED:> ===\n\n");
        printf("\nTom ---  HP = 30 // Sorte = 5/10 // Força = 7/10\n");
        sleep(7);
        printf("\n\nVocê recobra a consciência e percebe que está em uma sala\n");
        sleep(5);
        printf("\nHá uma porta a sua frente. E ao seu lado, um báu\n");
        sleep(5);
        printf("\nO que deseja fazer?\n");
        printf("\n1 - Abrir o baú // 2 - Sair da sala\n");
        scanf("%d", &escolha);
        
        if(escolha == 1)
        {
            printf("\nUm frasco verde é revelado. Você obteve uma poção leve\n");
            curaM += 1;
            xp += 2;
            sleep(5);
        }
        
        printf("\nNão tendo muito o que fazer, você abre a porta e sai da sala\n");
        sleep(5);
		printf("\nAtravessando a porta, você aparece em uma sala bem maior do que a anterior\n");
		sleep(5);
		printf("\nNela, há uns cômodos velhos e um gerador de energia no canto de uma das paredes\n");
		sleep(5);
		printf("\nVocê olha pra esquerda e percebe alguém sentado, uma pessoa familiar\n");
		sleep(5);
		printf("\nTom - Jax, é você??\n");
		sleep(5);
		printf("\nJax - Ue. Tom???\n");
		sleep(5);
		printf("\nTom - Sim! Sou eu! O que é isso tudo?\n");
		sleep(5);
		printf("\nJax - Pelo visto, uma brincadeira de mau gosto! Esse lugar fede mais que o seu quarto\n");
		sleep(5);
		printf("\nTom - Nem assim você consegue ficar sério >:(\n");
		sleep(5);
		printf("\nJax - Kkkkkkk foi mal\n");
		sleep(5);
		printf("\nTom - Isso é estranho. Eu só lembro de estar indo pra faculdade. Depois disso...\n");
		sleep(5);
		printf("\nJax - O mesmo vale pra mim. Eu sempre digo que continuar indo pra aquele lugar iria fazer mal\n");
		sleep(5);
		printf("\nTom - Esse é o menor dos nossos problemas agora\n");
		sleep(5);
		printf("\nVocês perdem a linha de raciocínio ao perceber uma figura estranha adentrando o local\n");
		sleep(5);
		printf("\n??? - Sejam muito bem-vindos, cobaias\n");
		sleep(5);
		printf("\nTom - Que??\n");
		sleep(2);
		printf("\nJax - Como assim?\n");
		sleep(2);
		printf("\n??? - Fui enviado aqui justamente para não dar folga a vocês. Hora do show\n");
		sleep(5);
		printf("\nTom - Isso não é bom\n");
		sleep(5);
        printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: SpaKill\n\n");
        hpEne = 35;
        sleep(2);
            
        for(int i = 1; i <= 100; i++)
        {
            if(hp[0] <= 0)
            {
                printf("\nGAME OVER\n");
                sleep(7);
                return 0;
            }
                    
            printf("\n\nTurno %d\n\n", i);
            sleep(2);
            printf("\nO que vai fazer?\n");
            printf("\n1 - Lutar // 2 - Itens // 3 - Conversar\n");
            scanf("%d", &escolha);
                
            switch(escolha)
            {
                case 1:
                printf("\n1 - Investida: infinito // 2 - Martelo: %d // 3 - Espada: %d // 4 - Escudo: %d // 5 - Ultimate: %d\n", martelo, espada, escudo, ult);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    hpEne = danoL(hpEne);
                    hpEne -= 4;
                    printf("\nO inimigo recebeu um dano considerável\n");
                    sleep(5);
                }else if(escolha == 2)
                {
                    if(martelo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 4;
                        martelo -= 1;
                        printf("\nDale marretada nele!!\n");
                        sleep(5);
                    }
                }else if(escolha == 3)
                {
                    if(espada == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 4;
                        espada -= 1;
                        printf("\nUma bela execução no manejo de espada\n");
                        sleep(5);
                    }
                }else if(escolha == 4)
                {
                    if(escudo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        protecao = 1;
                        escudo -= 1;
                        printf("\nVocê está isento de ser ferido\n");
                        sleep(5);
                    }
                }else if(escolha == 5)
                {
                    if(ult == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoG(hpEne);
                        hpEne -= 4;
                        ult -= 1;
                        printf("\nVocê saca seu laser, apontando ele de maneira muito eficaz, desferindo um disparo único\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 2:
                printf("\n1 - Cura Alta: %d // 2 - Cura Leve: %d\n", curaT, curaM);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    if(curaT == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[0] = curaTot(hp[0]);
                        curaT -= 1;
                        printf("\nVocê fica cheio de energia\n");
                        sleep(5);
                    }
                }else if(escolha == 2)
                {
                    if(curaM == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[0] = curaMed(hp[0]);
                        curaM -= 1;
                        printf("\nVocê se sente um pouco melhor\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 3:
                printf("\nTom - Jax, você consegue se defender?\n");
                sleep(5);
                printf("\nJax - Eu consegui um martelo na sala anterior. Tá tranquilo\n");
                sleep(5);
                printf("\nSpaKill - Acho melhor vocês não baixarem a guarda\n");
                sleep(5);
                break;
            }
                
            if(hpEne <= 0)
            {
                xp += 6;
                printf("\nO inimigo foi derrotado!!\n");
                sleep(5);
                printf("\nVITÓRIA\n");
                sleep(5);
                printf("\nSeu HP atual: %d\n", hp[0]);
                sleep(5);
                break;
            }    
                
            if(protecao == 1)
            {
                protecao = 0;
                printf("\nO inimigo não pôde te acertar pois você está protegido\n");
                sleep(5);
                printf("\nSua tentativa de atacar enquanto defende é ");
                sorte = dado();
                
                if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
                {
                	sleep(2);
                	printf("um sucesso!\n");
                	sleep(2);
                	printf("\nVocê contra-ataca\n");
                	hpEne = danoL(hpEne);
                	sleep(5);
				}else
				{
					sleep(2);
					printf("um fracasso!\n");
					sleep(2);
					printf("\nVocê não consegue atacar\n");
					sleep(5);
				}
            }else
            {
                sorte = dado();
                    
                if(sorte == 4)
                {
                    hp[0] = danoL(hp[0]);
                    hp[0] -= 5;
                    printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    sleep(5);
                }else
                {
                    hp[0] = danoL(hp[0]);
                    printf("\nVocê foi atacado\n");
                    sleep(5);
                }
            }
        }
		
		printf("\nDepois de uma batalha tensa, você e seu amigo descansam\n");
		sleep(5);
		printf("\nTom - Foi por pouco\n");
		sleep(2);
		printf("\nJax - Nem me fale!\n");
		sleep(2);
		printf("\nO gerador apresenta umas oscilações de energia bem suspeitas. Como se estivesse ameaçando desligar\n");
		sleep(5);
		printf("\nVocês saem pela porta e chegam num corredor. Estão mais seguros agora\n");
		sleep(5);
		printf("\nFASE 1 - FINALIZADA  //  Seu XP: %d\n", xp);
		sleep(7);
		printf("\nVocê subiu para o nível 2\n");
		sleep(5);
		printf("\nRecompensa: 3 martelos, 2 espadas, 1 escudo, 1 ultimate\n");
		martelo += 3;
		espada += 2;
		escudo += 1;
		ult += 1;
		sleep(7);    
	}else if(avancar == 2){
		printf("\n12:15 - Praia\n\n");
        sleep(1);
		printf("\nO seu treinamento matinal foi concluido. Não tendo muito o que fazer, você decide pegar suas coisas e ir para faculdade.\n");
		sleep(5);
		printf("\nVocê deu a partida no seu carro e bateu\n");
		sleep(5);
		printf("\nKiber - Não acredito nisso! E agora?!\n");
		sleep(5);
		printf("\nLeva um tempo até que você consiga  ir para faculdade.\n");
		sleep(5);
		printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		sleep(5);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		sleep(5);
        printf("\n3\n");
        sleep(2);
        printf("\n2\n");
        sleep(2);
        printf("\n1\n");
        sleep(2);
        printf("\n\n=== <:THE GAME HAS STARTED:> ===\n\n");
        printf("\nKiber ---  HP = 35 // Sorte = 7/10 // Força = 4/10\n");
        sleep(7);
        printf("\n\nHá uma porta a sua frente. E ao seu lado, uma caixa de música\n");
        sleep(5);
        printf("\nO que deseja fazer?\n");
        printf("\n1 - Ligar a caixa de música // 2 - Sair da sala\n");
        scanf("%d", &escolha);
        
        if(escolha == 1)
        {
            printf("\nVocê ouve uma bela canção\n");
            sleep(5);
            printf("\nMas, de repente, um disparo é feito atrás de você. É uma flecha!\n");
            sorte = dado();
            sleep(5);
            printf("\nVocê tenta desviar e  ");
            
            if(sorte == 1 || sorte == 4 || sorte == 9)
            {
                hp[1] = danoM(hp[1]);
                sleep(2);
                printf("dá errado.\n");
                sleep(2);
                printf("\nVocê se fere parcialmente\n");
                sleep(5);
            }else
            {
            	sleep(2);
                printf("dá certo!\n");
                sleep(2);
                printf("\nVocê escapou\n");
                xp += 2;
                sleep(5);
            }
        }
        
        printf("\nNão tendo muito o que fazer, você abre a porta e sai da sala\n");
        sleep(5);
		printf("\nAo atravessar a porta, você vai para uma sala diferente. Ela se destaca por ter um piso customizado\n");
		sleep(5);
		printf("\nNele, há quatro quadrados grandes, cada um com uma cor diferente\n");;
		sleep(5);
		printf("\nNo canto da sala, você encontra alguém pensando alto, e é familiar\n");
		sleep(5);
		printf("\nKiber - Não acredito! Você tá aqui, Baku?\n");
		sleep(5);
		printf("\nM'Baku - Wooow, Kiber!! Que bom te ver\n");
		sleep(5);
		printf("\nKiber - Cara, que viajem é essa??\n");
		sleep(3);
		printf("\nM'Baku - Por incrível que pareça, eu não faço ideia, cara\n");
		sleep(3);
		printf("\nKiber - Mas diz aí, existe alguma possibilidade de saírmos disso?\n");
		sleep(5);
		printf("\nM'Baku - Eu não sei. Eu tô suando frio desde que cheguei aqui\n");
		sleep(5);
		printf("\nKiber - Não é pra menos. Ei, você acredita que eu bati meu carro?\n");
		sleep(5);
		printf("\nM'Baku - KKKKKKKKKKKKKKKK\n");
		sleep(3);
		printf("\nKiber - Não tem graça, Baku\n");
		sleep(3);
		printf("\nM'Baku - Olhe pelo lado bom. Você não vai precisar se preocupar tão cedo com isso por enquanto\n");
		sleep(5);
		printf("\nKiber - ...\n");
		sleep(2);
		printf("\nUma figura sorridente aparece de repente\n");
		sleep(5);
		printf("\nKiber - UAII\n");
		sleep(2);
		printf("\nM'Baku - Que é isso??\n");
		sleep(2);
		printf("\n??? - Sei que vocês devem estar confusos agora. Mas alegrem-se\n");
		sleep(5);
		printf("\nKiber - E por que nós faríamos isso?\n");
		sleep(3);
		printf("\n??? - Vocês estão prestes a vivenciar uma experiência única em suas vidas! AHAHAHAHAHA\n");
		sleep(5);
		printf("\nKiber - Eu tô é assustado\n");
		sleep(2);
		printf("\n??? - De qualquer forma, preparem-se. Darei tudo de mim. MUAHAHAHA\n");
		sleep(5);
		printf("\nKiber - Como assim?\n");
		sleep(5);
		printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: Randoman\n\n");
        hpEne = 10;
        sleep(2);
        
        for(int i = 1; i <= 100; i++)
        {
            if(hp[1] <= 0)
            {
                printf("\nGAME OVER\n");
                sleep(7);
                return 0;
            }
                    
            printf("\n\nTurno %d\n\n", i);
            sleep(2);
            printf("\nEscolha um quadrado.\n");
            printf("\n1 - Vermelho // 2 - Azul // 3 - Amarelo // 4 - Verde // 5 - Conversar\n");
            scanf("%d", &escolha);
			
			switch(escolha)
			{
				case 1:
				printf("\nUma bomba pode ser acionada contra o inimigo\n");
				sleep(5);
				printf("\nSua tentativa de explodir ele é ");
				sorte = dado();
				
				if(sorte == 7)
				{
					sleep(2);
					printf("um sucesso!\n");
					hpEne -= 10;
					sleep(2);
				}else
				{
					sleep(2);
					printf("um fracasso!\n");
					sleep(2);
					printf("\nNada acontece\n");
					sleep(5);
					printf("\nRandoman - Precisa ser muito famoso pra bombar\n");
					sleep(5);
				}
				break;
				
				case 2:
				printf("\nUm escudo pode proteger vocês\n");
				sleep(5);
				printf("\nSua tentativa de se defender é ");
				sorte = dado();
				
				if(sorte == 1 || sorte == 4 || sorte == 9)
				{
					sleep(2);
					printf("um fracasso!\n");
					sleep(2);
					printf("\nNada acontece\n");
					sleep(5);
					printf("\nRandoman - Que coisa. Parece que você continua vulnerável\n");
					sleep(5);
				}else
				{
					sleep(2);
					printf("um sucesso!\n");
					sleep(2);
					printf("\nVocê está protegido com um escudo\n");
					sleep(5);
					protecao = 1;
				}
				break;
				
				case 3:
				printf("\nEssa é a oportunidade de contra-atacar!\n");
				sleep(5);
				printf("\nSua tentativa de acertar um golpe nele é ");
				sorte = dado();
				
				if(sorte == 1 || sorte == 4 || sorte == 9)
				{
					sleep(2);
					printf("um fracasso!\n");
					sleep(2);
					printf("\nNada acontece\n");
					sleep(5);
					printf("\nRandoman - Não fique triste, eu sou quase intangível mesmo\n");
					sleep(5);
				}else
				{
					sleep(2);
					printf("um sucesso!\n");
					sleep(2);
					printf("\nEle recebe um golpe merecido\n");
					sleep(5);
					hpEne -= 2;
				}
				break;
				
				case 4:
				printf("\nVocê pode restabelecer sua saúde\n");
				sleep(5);
				printf("\nSua tentativa de se curar é ");
				sorte = dado();
				
				if(sorte == 1 || sorte == 4 || sorte == 9)
				{
					sleep(2);
					printf("um fracasso!\n");
					sleep(2);
					printf("\nNada acontece\n");
					sleep(5);
					printf("\nRandoman - Não precisa ficar nervoso. Tente de novo :D\n");
					sleep(5);
				}else
				{
					sleep(2);
					printf("um sucesso!\n");
					sleep(2);
					printf("\nVocê se sente mais revigorado\n");
					sleep(5);
					hp[1] += 6;
				}
				break;
				
				case 5:
				printf("\nRandoman - Não perca o fôlego agora, rapazes. O show só está começando!\n");
				sleep(5);
				printf("\nKiber - Que saco...\n");
				sleep(2);
				printf("\nM'Baku - Já posso desistir?\n");
				sleep(3);
				printf("\nKiber - Para com isso, cara!\n");
				sleep(3);
				printf("\nRandoman - O tempo de vocês vai embora a cada segundo que chega\n");
				sleep(5);
				break;	
		    }
		    
		    if(hpEne <= 0)
            {
                xp += 6;
                printf("\nO inimigo foi derrotado!!\n");
                sleep(5);
                printf("\nVITÓRIA\n");
                sleep(5);
                printf("\nSeu HP atual: %d\n", hp[1]);
                sleep(5);
                break;
            }    
                
            if(protecao == 1)
            {
                protecao = 0;
                printf("\nO inimigo não pôde te acertar pois você está protegido\n");
                sleep(5);
            }else
            {
                hp[1] = danoL(hp[1]);
                printf("\nVocê foi atacado\n");
                sleep(5);
            }
	    }
	    
	    printf("\nKiber - HA! Ria da nossa cara agora\n");
	    sleep(3);
	    printf("\nM'Baku - Vamooooo\n");
	    sleep(2);
	    printf("\nA porta principal da sala se abre. Vocês passam por ela e chegam num corredor\n");
	    sleep(5);
	    printf("\nEstão mais seguros agora\n");
	    sleep(2);
	    printf("\nFASE 1 - FINALIZADA  //  Seu XP: %d\n", xp);
		sleep(7);
		printf("\nVocê subiu para o nível 2\n");
		sleep(5);
		printf("\nRecompensa: 3 martelos, 2 espadas, 1 escudo, 1 ultimate\n");
		martelo += 3;
		espada += 2;
		escudo += 1;
		ult += 1;
		sleep(7);
	}else if(avancar == 3){
		printf("\n12:00 - Casa\n\n");
        sleep(1);
		printf("\nVocê se encontra jogando uma partida. Seu desempenho no jogo está no ápice de sua gameplay. Você se passa do horário.\n");
		sleep(5);
		printf("\n12:50\n\n");
        sleep(1);
		printf("\nDex - Putz, passei do horário. Vou me arrumar o mais rápido que posso pra faculdade!\n");
		sleep(5);
		printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		sleep(5);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		sleep(5);
        printf("\n3\n");
        sleep(2);
        printf("\n2\n");
        sleep(2);
        printf("\n1\n");
        sleep(2);
        printf("\n\n=== <:THE GAME HAS STARTED:> ===\n\n");
        printf("\nDex ---  HP = 40 // Sorte = 6/10 // Força = 6/10\n");
        sleep(7);
        printf("\n\nVocê acorda em uma sala com duas portas, uma de cada lado.\n");
        sleep(5);
        printf("\nO que deseja fazer?\n");
        printf("\n1 - Ir para porta da esquerda // 2 - Ir para porta da direita\n");
        scanf("%d", &escolha);
        
        if(escolha == 1)
        {
            printf("\nVocê passa pela porta e se depara com uma sala vazia\n");
            sleep(5);
            printf("\nDe repente, a porta atrás de você se fecha\n");
            sleep(5);
            printf("\nDex - O quê? Tá trancada!\n");
            sleep(5);
            printf("\nUma sombra misteriosa se materializa. Parece estar irritado\n");
            sleep(5);
            printf("\n\n|| BATTLE ||\n");
            printf("\nInimigo: Lit'shadow\n\n");
            hpEne = 25;
            sleep(2);
            
            for(int i = 1; i <= 100; i++)
            {
                if(hp[2] <= 0)
                {
                    printf("\nGAME OVER\n");
                    sleep(7);
                    return 0;
                }
                    
                printf("\n\nTurno %d\n\n", i);
                sleep(2);
                printf("\nO que vai fazer?\n");
                printf("\n1 - Lutar // 2 - Itens // 3 - Conversar\n");
                scanf("%d", &escolha);
                
                switch(escolha)
                {
                    case 1:
                    printf("\n1 - Investida: infinito // 2 - Martelo: %d // 3 - Espada: %d // 4 - Escudo: %d // 5 - Ultimate: %d\n", martelo, espada, escudo, ult);
                    scanf("%d", &escolha);
                    
                    if(escolha == 1)
                    {
                        hpEne = danoL(hpEne);
                        hpEne -= 3;
                        printf("\nO inimigo levou um dano considerável\n");
                        sleep(5);
                    }else if(escolha == 2)
                    {
                        if(martelo == 0)
                        {
                            printf("\nVocê não possui esse item!\n");
                            sleep(2);
                        }else
                        {
                            hpEne = danoM(hpEne);
                            hpEne -= 3;
                            martelo -= 1;
                            printf("\nDale marretada nele!!\n");
                            sleep(5);
                        }
                    }else if(escolha == 3)
                    {
                        if(espada == 0)
                        {
                            printf("\nVocê não possui esse item!\n");
                            sleep(2);
                        }else
                        {
                            hpEne = danoM(hpEne);
                            hpEne -= 3;
                            espada -= 1;
                            printf("\nUma bela execução no manejo de espada\n");
                            sleep(5);
                        }
                    }else if(escolha == 4)
                    {
                        if(escudo == 0)
                        {
                            printf("\nVocê não possui esse item!\n");
                            sleep(2);
                        }else
                        {
                            protecao = 1;
                            escudo -= 1;
                            printf("\nVocê está isento de ser ferido\n");
                            sleep(5);
                        }
                    }else if(escolha == 5)
                    {
                        if(ult == 0)
                        {
                            printf("\nVocê não possui esse item!\n");
                            sleep(2);
                        }else
                        {
                            hpEne = danoG(hpEne);
                            hpEne -= 3;
                            ult -= 1;
                            printf("\nVocê fica invisível e, sorrateiramente, aparece por trás do inimigo dando um salto e desferindo um golpe laminático\n");
                            sleep(5);
                        }
                    }
                    break;
                    
                    case 2:
                    printf("\n1 - Cura Alta: %d // 2 - Cura Leve: %d\n", curaT, curaM);
                    scanf("%d", &escolha);
                    
                    if(escolha == 1)
                    {
                        if(curaT == 0)
                        {
                            printf("\nVocê não possui esse item!\n");
                            sleep(2);
                        }else
                        {
                            hp[2] = curaTot(hp[2]);
                            curaT -= 1;
                            printf("\nVocê fica cheio de energia\n");
                            sleep(5);
                        }
                    }else if(escolha == 2)
                    {
                        if(curaM == 0)
                        {
                            printf("\nVocê não possui esse item!\n");
                            sleep(2);
                        }else
                        {
                            hp[2] = curaMed(hp[2]);
                            curaM -= 1;
                            printf("\nVocê se sente um pouco melhor\n");
                            sleep(5);
                        }
                    }
                    break;
                    
                    case 3:
                    printf("\nDex - Qual é cara, vai ficar me barrando mesmo?\n");
                    sleep(5);
                    printf("\nLit'shadow - *¥¥?¥££€\n");
                    sleep(5);
                    printf("\nDex - Bom, eu acho que isso é um sim\n");
                    sleep(5);
                    break;
                }
                
                if(hpEne <= 0)
                {
                    xp += 5;
                    printf("\nO inimigo foi derrotado!!\n");
                    sleep(5);
                    printf("\nVITÓRIA\n");
                    sleep(5);
                    printf("\nSeu HP atual: %d\n", hp[2]);
                    sleep(5);
                    break;
                }    
                
                if(protecao == 1)
                {
                    protecao = 0;
                    printf("\nO inimigo não pôde te acertar pois você está protegido\n");
                    sleep(5);
                    printf("\nSua tentativa de atacar enquanto defende é ");
                	sorte = dado();
                
                	if(sorte == 2 || sorte == 5 || sorte == 6 || sorte == 8)
                	{
                		sleep(2);
                		printf("um sucesso!\n");
                		sleep(2);
                		printf("\nVocê contra-ataca\n");
                		hpEne = danoL(hpEne);
                		sleep(5);
					}else
					{
						sleep(2);
						printf("um fracasso!\n");
						sleep(2);
						printf("\nVocê não consegue atacar\n");
						sleep(5);
					}
                }else
                {
                    sorte = dado();
                    
                    if(sorte == 6)
                    {
                        hp[2] = danoL(hp[2]);
                        hp[2] -= 5;
                        printf("\nVocê foi atacado. DANO CRÍTICO\n");
                        sleep(5);
                    }else
                    {
                        hp[2] = danoL(hp[2]);
                        printf("\nVocê foi atacado\n");
                        sleep(5);
                    }
                }
            }
            
            printf("\nDepois de se salvar, você volta pra sala anterior e decide abrir a porta da esquerda\n");
            sleep(5);
        }
		
		printf("\nSem muito o que fazer, você sai da sala\n");
		sleep(5);
		printf("\nAo atravessar a sala, você dá de cara com uma figura familiar sentada no meio do recinto\n");
		sleep(5);
		printf("\nDex - Kiber?? Tá fazendo o que aqui??\n");
		sleep(3);
		printf("\nKiber - Ah oi, Dex. Eu sei tanto quanto você sabe. Eu acordei e parei aqui do nada\n");
		sleep(5);
		printf("\nDex - Isso tudo é bizarro! A gente foi sequestrado?\n");
		sleep(3);
		printf("\nKiber - Não sei. Só não pretendo morrer ainda\n");
		sleep(3);
		printf("\nDex - Para com isso! Vamos vasculhar por aí e tentar achar uma saída\n");
		sleep(5);
		printf("\nKiber - Verdade. Aliás, pegue isso. Pode ser de ajuda\n");
		sleep(5);
		espada += 2;
		xp += 3;
		printf("\nVocê obteve duas espadas\n");
		sleep(5);
		printf("\nDex - Uau, valeu!\n");
		sleep(3);
		printf("\nKiber - Tranquilo. Olha, aquilo parece uma entrada pra um elevador\n");
		sleep(5);
		printf("\nDex - Verdade! Você já tentou entrar?\n");
		sleep(3);
		printf("\nKiber - Ainda não. Vamos ver se funciona\n");
		sleep(5);
		printf("\n??? - Não tão rápido, mocinhos\n");
		sleep(5);
		printf("\nKiber - Eiita\n");
		sleep(2);
		printf("\nDex - Lascou, cara. É agora que a gente morre!\n");
		sleep(3);
		printf("\n??? - Poder ser. Tudo depende do desempenho de vocês\n");
		sleep(5);
		printf("\n??? - Preparem-se, cobaias!!\n");
		sleep(3);
		printf("\nDex - Cobaias?\n");
		sleep(5);
		printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: Shieldo\n\n");
        hpEne = 40;
        sleep(2);
            
        for(int i = 1; i <= 100; i++)
        {
            if(hp[2] <= 0)
            {
                printf("\nGAME OVER\n");
                sleep(7);
                return 0;
            }
                    
            printf("\n\nTurno %d\n\n", i);
            sleep(2);
            printf("\nO que vai fazer?\n");
            printf("\n1 - Lutar // 2 - Itens // 3 - Conversar\n");
            scanf("%d", &escolha);
                
            switch(escolha)
            {
                case 1:
                printf("\n1 - Investida: infinito // 2 - Martelo: %d // 3 - Espada: %d // 4 - Escudo: %d // 5 - Ultimate: %d\n", martelo, espada, escudo, ult);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    hpEne = danoL(hpEne);
                    hpEne -= 3;
                    printf("\nO inimigo levou um dano considerável\n");
                    sleep(5);
                }else if(escolha == 2)
                {
                    if(martelo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 3;
                        martelo -= 1;
                        printf("\nDale marretada nele!!\n");
                        sleep(5);
                    }
                }else if(escolha == 3)
                {
                    if(espada == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 3;
                        espada -= 1;
                        printf("\nUma bela execução no manejo de espada\n");
                        sleep(5);
                    }
                }else if(escolha == 4)
                {
                    if(escudo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        protecao = 1;
                        escudo -= 1;
                        printf("\nVocê está isento de ser ferido\n");
                        sleep(5);
                    }
                }else if(escolha == 5)
                {
                    if(ult == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoG(hpEne);
                        hpEne -= 3;
                        ult -= 1;
                        printf("\nVocê fica invisível e, sorrateiramente, aparece por trás do inimigo dando um salto e desferindo um golpe laminático\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 2:
                printf("\n1 - Cura Alta: %d // 2 - Cura Leve: %d\n", curaT, curaM);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    if(curaT == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[2] = curaTot(hp[2]);
                        curaT -= 1;
                        printf("\nVocê fica cheio de energia\n");
                        sleep(5);
                    }
                }else if(escolha == 2)
                {
                    if(curaM == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[2] = curaMed(hp[2]);
                        curaM -= 1;
                        printf("\nVocê se sente um pouco melhor\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 3:
                printf("\nDex - Ele tem uma armadura bem resistente!\n");
                sleep(5);
                printf("\nKiber - Isso não vai resistir pra sempre. Se persistirmos, conseguimos quebrar\n");
                sleep(5);
                printf("\nShieldo - Minha defesa é implacável. Já não posso dizer o mesmo sobre a ofensiva de vocês\n");
                sleep(5);
                break;
            }
                
            if(hpEne <= 0)
            {
                xp += 7;
                printf("\nO inimigo foi derrotado!!\n");
                sleep(5);
                printf("\nVITÓRIA\n");
                sleep(5);
                printf("\nSeu HP atual: %d\n", hp[2]);
                sleep(5);
                break;
            }    
                
            if(protecao == 1)
            {
                protecao = 0;
                printf("\nO inimigo não pôde te acertar pois você está protegido\n");
                sleep(5);
                printf("\nSua tentativa de atacar enquanto defende é ");
                sorte = dado();
                
                if(sorte == 2 || sorte == 5 || sorte == 6 || sorte == 8)
                {
                	sleep(2);
                	printf("um sucesso!\n");
                	sleep(2);
                	printf("\nVocê contra-ataca\n");
                	hpEne = danoL(hpEne);
                	sleep(5);
				}else
				{
					sleep(2);
					printf("um fracasso!\n");
					sleep(2);
					printf("\nVocê não consegue atacar\n");
					sleep(5);
				}
            }else
            {
                sorte = dado();
                    
                if(sorte == 3)
                {
                    hp[2] = danoL(hp[2]);
                    hp[2] -= 5;
                    printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    sleep(5);
                }else
                {
                    hp[2] = danoL(hp[2]);
                    printf("\nVocê foi atacado\n");
                    sleep(5);
                }
            }
        }
		
		printf("\nDex - A nossa vitória foi implacável\n");
		sleep(3);
		printf("\nKiber - Nunca critiquei. HAhahaaha\n");
		sleep(3);
		printf("\nOs restos rígidos do inimigo caem e se despedaçam, revelando o seu interior\n");
		sleep(5);
		printf("\nDex - Olha só. Isso será muito bom\n");
		sleep(3);
		curaT += 2;
		printf("\nVocê obteve duas poções grandes\n");
		sleep(5);
		printf("\nDex - Usarei com sabedoria\n");
		sleep(3);
		printf("\nKiber - Ei, Dex. O elevador abriu!\n");
		sleep(3);
		printf("\nDex - Beleza. Vamos dar o fora dessa sala\n");
		sleep(5);
		printf("\nAssim que vocês entram no elevador, ele se fecha e vocês começam a subir\n");
		sleep(5);
		printf("\nEstão mais seguros agora\n");
		sleep(5);
		printf("\nFASE 1 - FINALIZADA  //  Seu XP: %d\n", xp);
		sleep(7);
		printf("\nVocê subiu para o nível 2\n");
		sleep(5);
		printf("\nRecompensa: 3 martelos, 2 espadas, 1 escudo, 1 ultimate\n");
		martelo += 3;
		espada += 2;
		escudo += 1;
		ult += 1;
		sleep(7);                    
	}else if(avancar == 4){
		printf("\n12:30 - Saindo de Casa\n\n");
        sleep(1);
		printf("\nVocê vai pra faculdade e recebe uma ligação do seu amigo falando que o trânsito está congestionado.\n");
		sleep(5);
		printf("\nJax - Que merda, vou me atrasar pra faculdade porque ta tudo engarrafado, bacana (ironia).\n");
		sleep(5);
		printf("\nA chegada para o seu destino foi adiada.\n");
		sleep(5);
		printf("\nA apreensão por estar atrasado o deixa nervoso. Mas tudo muda a partir do momento em que você ouve um barulho\n");
		sleep(5);
		printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
		sleep(5);
        printf("\n3\n");
        sleep(2);
        printf("\n2\n");
        sleep(2);
        printf("\n1\n");
        sleep(2);
        printf("\n\n=== <:THE GAME HAS STARTED:> ===\n\n");
        printf("\nJax ---  HP = 45 // Sorte = 3/10 // Força = 8/10\n");
        sleep(7);
        printf("\nVocê acorda em uma sala. Há uma porta na sua frente, uma espada pendurada na parede da esquerda e um escudo na direita\n");
        sleep(5);
        printf("\nO que deseja fazer?\n");
        printf("\n1 - Sair da sala // 2 - Pegar o escudo // 3 - Pegar a espada\n");
        scanf("%d", &escolha);
        
        if(escolha == 2)
        {
        	printf("\nUm escudo básico. Agora ele é seu\n");
        	escudo += 1;
        	xp += 1;
        	sleep(5);
        	printf("\nAssim que você o pega, a espada some dentro da parede\n");
        	sleep(5);
		}else if(escolha == 3)
		{
			printf("\nUma espada simples. Agora ela é sua\n");
			espada += 1;
			xp += 1;
			sleep(5);
			printf("\nAssim que você a pega, o escudo some dentro da parede\n");
			sleep(5);
		}
		
		printf("\nSem ter muito o que fazer, você sai da sala\n");
		sleep(5);
		printf("\nAo se retirar, você chega em uma sala grande e peculiar\n");
		sleep(5);
		printf("\nNela, você vê quatro tótens pequenos e gordos, um em cada canto\n");
		sleep(5);
		printf("\nUma pessoa familiar está verificando um dos tótens\n");
		sleep(5);
		printf("\nJax - Mentira. É você, Dex?\n");
		sleep(3);
		printf("\nDex - Fala sério! Tinha que ser você, né\n");
		sleep(5);
		printf("\nJax - Para de ser chato na pior hora. Onde a gente tá?\n");
		sleep(5);
		printf("\nDex - Você acha mesmo que eu sei? Eu tô um tempinho tentando fazer alguma coisa pra sair daqui\n");
		sleep(5);
		printf("\nDex - A única coisa relevante que encontrei foi um botão vermelho\n");
		sleep(5);
		printf("\nJax - Larga isso daí!\n");
		sleep(3);
		printf("\nDex - Ue. Por quê?\n");
		sleep(2);
		printf("\nJax - Como assim  =Por quê?=. Seu quadrúpede!\n");
		sleep(5);
		printf("\nJax - Botões no geral não devem ser apertados assim sem mais nem menos.\n");
		sleep(5);
		printf("\nJax - Principalmente quando você não sabe pra que serve!!\n");
		sleep(5);
		printf("\nDex - Tarde demais. Acabei de apertar\n");
		sleep(3);
		printf("\nJax - Ai, eu mereço\n");
		sleep(3);
		printf("\nOs quatro tótens presentes na sala tomam vida, e partem para cima de vocês\n");
		sleep(5);
		printf("\nJax - Parabéns, Dex\n");
		sleep(2);
		printf("\nDex - Ops...\n");
		sleep(5);
		printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: Tótem 1\n\n");
        hpEne = 15;
        sleep(2);
            
        for(int i = 1; i <= 100; i++)
        {
            if(hp[3] <= 0)
            {
                printf("\nGAME OVER\n");
                sleep(7);
                return 0;
            }
                    
            printf("\n\nTurno %d\n\n", i);
            sleep(2);
            printf("\nO que vai fazer?\n");
            printf("\n1 - Lutar // 2 - Itens // 3 - Conversar\n");
            scanf("%d", &escolha);
                
            switch(escolha)
            {
                case 1:
                printf("\n1 - Investida: infinito // 2 - Martelo: %d // 3 - Espada: %d // 4 - Escudo: %d // 5 - Ultimate: %d\n", martelo, espada, escudo, ult);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    hpEne = danoL(hpEne);
                    hpEne -= 4;
                    printf("\nO inimigo levou um dano considerável\n");
                    sleep(5);
                }else if(escolha == 2)
                {
                    if(martelo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 4;
                        martelo -= 1;
                        printf("\nDale marretada nele!!\n");
                        sleep(5);
                    }
                }else if(escolha == 3)
                {
                    if(espada == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 4;
                        espada -= 1;
                        printf("\nUma bela execução no manejo de espada\n");
                        sleep(5);
                    }
                }else if(escolha == 4)
                {
                    if(escudo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        protecao = 1;
                        escudo -= 1;
                        printf("\nVocê está isento de ser ferido\n");
                        sleep(5);
                    }
                }else if(escolha == 5)
                {
                    if(ult == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoG(hpEne);
                        hpEne -= 4;
                        ult -= 1;
                        printf("\nVocê transfere sua resistência para seus punhos e desfere uma sequência de golpes devastadores\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 2:
                printf("\n1 - Cura Alta: %d // 2 - Cura Leve: %d\n", curaT, curaM);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    if(curaT == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[3] = curaTot(hp[3]);
                        curaT -= 1;
                        printf("\nVocê fica cheio de energia\n");
                        sleep(5);
                    }
                }else if(escolha == 2)
                {
                    if(curaM == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[3] = curaMed(hp[3]);
                        curaM -= 1;
                        printf("\nVocê se sente um pouco melhor\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 3:
                printf("\nJax - Você pediu por isso. Agora, me ajuda aí\n");
                sleep(5);
                printf("\nDex - Não precisa ficar esfregando na minha cara. Não vai ajudar em nada\n");
                sleep(5);
                printf("\nTótem 1 - ...\n");
                sleep(5);
                break;
            }
                
            if(hpEne <= 0)
            {
                xp += 3;
                printf("\nO inimigo foi derrotado!!\n");
                sleep(5);
                printf("\nVITÓRIA\n");
                sleep(5);
                printf("\nSeu HP atual: %d\n", hp[3]);
                sleep(5);
                break;
            }    
                
            if(protecao == 1)
            {
                protecao = 0;
                printf("\nO inimigo não pôde te acertar pois você está protegido\n");
                sleep(5);
                printf("\nSua tentativa de atacar enquanto defende é ");
                sorte = dado();
                
                if(sorte == 1 || sorte == 2 || sorte == 3 || sorte == 7 || sorte == 8 || sorte == 9 || sorte == 10)
                {
                	sleep(2);
                	printf("um sucesso!\n");
                	sleep(2);
                	printf("\nVocê contra-ataca\n");
                	hpEne = danoL(hpEne);
                	sleep(5);
				}else
				{
					sleep(2);
					printf("um fracasso!\n");
					sleep(2);
					printf("\nVocê não consegue atacar\n");
					sleep(5);
				}
            }else
            {
                sorte = dado();
                    
                if(sorte == 9)
                {
                    hp[3] = danoL(hp[3]);
                    hp[3] -= 5;
                    printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    sleep(5);
                }else
                {
                    hp[3] = danoL(hp[3]);
                    printf("\nVocê foi atacado\n");
                    sleep(5);
                }
            }
        }
        
        printf("\nJax - Sem relaxar! Que venha o próximo\n");
        sleep(5);
        printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: Tótem 2\n\n");
        hpEne = 15;
        sleep(2);
            
        for(int i = 1; i <= 100; i++)
        {
            if(hp[3] <= 0)
            {
                printf("\nGAME OVER\n");
                sleep(7);
                return 0;
            }
                    
            printf("\n\nTurno %d\n\n", i);
            sleep(2);
            printf("\nO que vai fazer?\n");
            printf("\n1 - Lutar // 2 - Itens // 3 - Conversar\n");
            scanf("%d", &escolha);
                
            switch(escolha)
            {
                case 1:
                printf("\n1 - Investida: infinito // 2 - Martelo: %d // 3 - Espada: %d // 4 - Escudo: %d // 5 - Ultimate: %d\n", martelo, espada, escudo, ult);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    hpEne = danoL(hpEne);
                    hpEne -= 4;
                    printf("\nO inimigo levou um dano considerável\n");
                    sleep(5);
                }else if(escolha == 2)
                {
                    if(martelo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 4;
                        martelo -= 1;
                        printf("\nDale marretada nele!!\n");
                        sleep(5);
                    }
                }else if(escolha == 3)
                {
                    if(espada == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 4;
                        espada -= 1;
                        printf("\nUma bela execução no manejo de espada\n");
                        sleep(5);
                    }
                }else if(escolha == 4)
                {
                    if(escudo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        protecao = 1;
                        escudo -= 1;
                        printf("\nVocê está isento de ser ferido\n");
                        sleep(5);
                    }
                }else if(escolha == 5)
                {
                    if(ult == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoG(hpEne);
                        hpEne -= 4;
                        ult -= 1;
                        printf("\nVocê transfere sua resistência para seus punhos e desfere uma sequência de golpes devastadores\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 2:
                printf("\n1 - Cura Alta: %d // 2 - Cura Leve: %d\n", curaT, curaM);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    if(curaT == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[3] = curaTot(hp[3]);
                        curaT -= 1;
                        printf("\nVocê fica cheio de energia\n");
                        sleep(5);
                    }
                }else if(escolha == 2)
                {
                    if(curaM == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[3] = curaMed(hp[3]);
                        curaM -= 1;
                        printf("\nVocê se sente um pouco melhor\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 3:
                printf("\nDex - Se quiser eu posso te dar uma maozinha\n");
                sleep(5);
                printf("\nJax - Presta atenção aí no seu lado, peste\n");
                sleep(3);
                printf("\nTótem 2 - ...\n");
                sleep(5);
                break;
            }
                
            if(hpEne <= 0)
            {
                xp += 3;
                printf("\nO inimigo foi derrotado!!\n");
                sleep(5);
                printf("\nVITÓRIA\n");
                sleep(5);
                printf("\nSeu HP atual: %d\n", hp[3]);
                sleep(5);
                break;
            }    
                
            if(protecao == 1)
            {
                protecao = 0;
                printf("\nO inimigo não pôde te acertar pois você está protegido\n");
                sleep(5);
                printf("\nSua tentativa de atacar enquanto defende é ");
                sorte = dado();
                
                if(sorte == 1 || sorte == 2 || sorte == 3 || sorte == 7 || sorte == 8 || sorte == 9 || sorte == 10)
                {
                	sleep(2);
                	printf("um sucesso!\n");
                	sleep(2);
                	printf("\nVocê contra-ataca\n");
                	hpEne = danoL(hpEne);
                	sleep(5);
				}else
				{
					sleep(2);
					printf("um fracasso!\n");
					sleep(2);
					printf("\nVocê não consegue atacar\n");
					sleep(5);
				}
            }else
            {
                sorte = dado();
                    
                if(sorte == 9)
                {
                    hp[3] = danoL(hp[3]);
                    hp[3] -= 5;
                    printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    sleep(5);
                }else
                {
                    hp[3] = danoL(hp[3]);
                    printf("\nVocê foi atacado\n");
                    sleep(5);
                }
            }
        }
        
        printf("\nJax - Posso fazer isso o dia todo\n");
        sleep(5);
        printf("\nDex - Vai, exibido\n");
        sleep(5);
        printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: Tótem 3\n\n");
        hpEne = 15;
        sleep(2);
            
        for(int i = 1; i <= 100; i++)
        {
            if(hp[3] <= 0)
            {
                printf("\nGAME OVER\n");
                sleep(7);
                return 0;
            }
                    
            printf("\n\nTurno %d\n\n", i);
            sleep(2);
            printf("\nO que vai fazer?\n");
            printf("\n1 - Lutar // 2 - Itens // 3 - Conversar\n");
            scanf("%d", &escolha);
                
            switch(escolha)
            {
                case 1:
                printf("\n1 - Investida: infinito // 2 - Martelo: %d // 3 - Espada: %d // 4 - Escudo: %d // 5 - Ultimate: %d\n", martelo, espada, escudo, ult);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    hpEne = danoL(hpEne);
                    hpEne -= 4;
                    printf("\nO inimigo levou um dano considerável\n");
                    sleep(5);
                }else if(escolha == 2)
                {
                    if(martelo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 4;
                        martelo -= 1;
                        printf("\nDale marretada nele!!\n");
                        sleep(5);
                    }
                }else if(escolha == 3)
                {
                    if(espada == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 4;
                        espada -= 1;
                        printf("\nUma bela execução no manejo de espada\n");
                        sleep(5);
                    }
                }else if(escolha == 4)
                {
                    if(escudo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        protecao = 1;
                        escudo -= 1;
                        printf("\nVocê está isento de ser ferido\n");
                        sleep(5);
                    }
                }else if(escolha == 5)
                {
                    if(ult == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoG(hpEne);
                        hpEne -= 4;
                        ult -= 1;
                        printf("\nVocê transfere sua resistência para seus punhos e desfere uma sequência de golpes devastadores\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 2:
                printf("\n1 - Cura Alta: %d // 2 - Cura Leve: %d\n", curaT, curaM);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    if(curaT == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[3] = curaTot(hp[3]);
                        curaT -= 1;
                        printf("\nVocê fica cheio de energia\n");
                        sleep(5);
                    }
                }else if(escolha == 2)
                {
                    if(curaM == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[3] = curaMed(hp[3]);
                        curaM -= 1;
                        printf("\nVocê se sente um pouco melhor\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 3:
                printf("\nDex - Você parece cansado\n");
                sleep(3);
                printf("\nJax - Não mais do que você\n");
                sleep(3);
                printf("\nTótem 3 - ...\n");
                sleep(5);
                break;
            }
                
            if(hpEne <= 0)
            {
                xp += 3;
                printf("\nO inimigo foi derrotado!!\n");
                sleep(5);
                printf("\nVITÓRIA\n");
                sleep(5);
                printf("\nSeu HP atual: %d\n", hp[3]);
                sleep(5);
                break;
            }    
                
            if(protecao == 1)
            {
                protecao = 0;
                printf("\nO inimigo não pôde te acertar pois você está protegido\n");
                sleep(5);
                printf("\nSua tentativa de atacar enquanto defende é ");
                sorte = dado();
                
                if(sorte == 1 || sorte == 2 || sorte == 3 || sorte == 7 || sorte == 8 || sorte == 9 || sorte == 10)
                {
                	sleep(2);
                	printf("um sucesso!\n");
                	sleep(2);
                	printf("\nVocê contra-ataca\n");
                	hpEne = danoL(hpEne);
                	sleep(5);
				}else
				{
					sleep(2);
					printf("um fracasso!\n");
					sleep(2);
					printf("\nVocê não consegue atacar\n");
					sleep(5);
				}
            }else
            {
                sorte = dado();
                    
                if(sorte == 9)
                {
                    hp[3] = danoL(hp[3]);
                    hp[3] -= 5;
                    printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    sleep(5);
                }else
                {
                    hp[3] = danoL(hp[3]);
                    printf("\nVocê foi atacado\n");
                    sleep(5);
                }
            }
        }
        
        printf("\nJax - Receba isso, lata velha!!\n");
        sleep(3);
        printf("\nDex - Cuidado, Jax! Atrás de você\n");
        sleep(3);
        printf("\nJax - Eu já tava olhando. Esse é o último deles. Pode vir!!\n");
        sleep(5);
        printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: Tótem 4\n\n");
        hpEne = 15;
        sleep(2);
            
        for(int i = 1; i <= 100; i++)
        {
            if(hp[3] <= 0)
            {
                printf("\nGAME OVER\n");
                sleep(7);
                return 0;
            }
                    
            printf("\n\nTurno %d\n\n", i);
            sleep(2);
            printf("\nO que vai fazer?\n");
            printf("\n1 - Lutar // 2 - Itens // 3 - Conversar\n");
            scanf("%d", &escolha);
                
            switch(escolha)
            {
                case 1:
                printf("\n1 - Investida: infinito // 2 - Martelo: %d // 3 - Espada: %d // 4 - Escudo: %d // 5 - Ultimate: %d\n", martelo, espada, escudo, ult);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    hpEne = danoL(hpEne);
                    hpEne -= 4;
                    printf("\nO inimigo levou um dano considerável\n");
                    sleep(5);
                }else if(escolha == 2)
                {
                    if(martelo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 4;
                        martelo -= 1;
                        printf("\nDale marretada nele!!\n");
                        sleep(5);
                    }
                }else if(escolha == 3)
                {
                    if(espada == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoM(hpEne);
                        hpEne -= 4;
                        espada -= 1;
                        printf("\nUma bela execução no manejo de espada\n");
                        sleep(5);
                    }
                }else if(escolha == 4)
                {
                    if(escudo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        protecao = 1;
                        escudo -= 1;
                        printf("\nVocê está isento de ser ferido\n");
                        sleep(5);
                    }
                }else if(escolha == 5)
                {
                    if(ult == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hpEne = danoG(hpEne);
                        hpEne -= 4;
                        ult -= 1;
                        printf("\nVocê transfere sua resistência para seus punhos e desfere uma sequência de golpes devastadores\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 2:
                printf("\n1 - Cura Alta: %d // 2 - Cura Leve: %d\n", curaT, curaM);
                scanf("%d", &escolha);
                    
                if(escolha == 1)
                {
                    if(curaT == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[3] = curaTot(hp[3]);
                        curaT -= 1;
                        printf("\nVocê fica cheio de energia\n");
                        sleep(5);
                    }
                }else if(escolha == 2)
                {
                    if(curaM == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                        hp[3] = curaMed(hp[3]);
                        curaM -= 1;
                        printf("\nVocê se sente um pouco melhor\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 3:
                printf("\nDex - Desde quando você sabe se defender assim?\n");
                sleep(5);
                printf("\nJax - Acho que desde que cheguei aqui. Estranho como as coisas funcionam nesse lugar\n");
                sleep(5);
                printf("\nTótem 4 - ...\n");
                sleep(5);
                printf("\nJax - Opa! Esqueci de você\n");
                sleep(5);
                break;
            }
                
            if(hpEne <= 0)
            {
                xp += 3;
                printf("\nO inimigo foi derrotado!!\n");
                sleep(5);
                printf("\nVITÓRIA\n");
                sleep(5);
                printf("\nSeu HP atual: %d\n", hp[3]);
                sleep(5);
                break;
            }    
                
            if(protecao == 1)
            {
                protecao = 0;
                printf("\nO inimigo não pôde te acertar pois você está protegido\n");
                sleep(5);
                printf("\nSua tentativa de atacar enquanto defende é ");
                sorte = dado();
                
                if(sorte == 1 || sorte == 2 || sorte == 3 || sorte == 7 || sorte == 8 || sorte == 9 || sorte == 10)
                {
                	sleep(2);
                	printf("um sucesso!\n");
                	sleep(2);
                	printf("\nVocê contra-ataca\n");
                	hpEne = danoL(hpEne);
                	sleep(5);
				}else
				{
					sleep(2);
					printf("um fracasso!\n");
					sleep(2);
					printf("\nVocê não consegue atacar\n");
					sleep(5);
				}
            }else
            {
                sorte = dado();
                    
                if(sorte == 9)
                {
                    hp[3] = danoL(hp[3]);
                    hp[3] -= 5;
                    printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    sleep(5);
                }else
                {
                    hp[3] = danoL(hp[3]);
                    printf("\nVocê foi atacado\n");
                    sleep(5);
                }
            }
        }
        
        printf("\nDex - Conseguimos levar todos!!\n");
        sleep(5);
        printf("\nJax - Graças a mim, né!?\n");
        sleep(3);
        printf("\nDex - Oh palhaço, você ainda não percebeu?\n");
        sleep(5);
        printf("\nJax - Percebi o quê?\n");
        sleep(3);
        printf("\nDex - A chave pra gente sair daqui era a destruição desses tótens\n");
        sleep(5);
        printf("\nJax - Como você pode dizer isso com tanta certeza?\n");
        sleep(5);
        printf("\nDex - Talvez porque a porta se abriu assim que a gente derrotou eles\n");
        sleep(5);
        printf("\nJax - Oh...\n");
        sleep(3);
        printf("\nVocê olha pra frente e vê a porta aberta\n");
        sleep(5);
        printf("\nJax - Sorte de principiante\n");
        sleep(3);
        printf("\nDex - Vai catar coquinho...\n");
        sleep(3);
        printf("\nVocês atravessam a porta e chegam num corredor\n");
        sleep(5);
        printf("\nEstão mais seguros agora\n");
        sleep(5);
        printf("\nFASE 1 - FINALIZADA  //  Seu XP: %d\n", xp);
		sleep(7);
		printf("\nVocê subiu para o nível 2\n");
		sleep(5);
		printf("\nRecompensa: 3 martelos, 2 espadas, 1 escudo, 1 ultimate\n");
		martelo += 3;
		espada += 2;
		escudo += 1;
		ult += 1;
		sleep(7);
	}else if(avancar == 5){
        printf("13:10 - Faculdade\n\n");
        sleep(1);
        printf("\nComo de costume, você se encontra no laboratório, organizando seus experimentos\n");
        sleep(5);
        printf("\nM'Baku - Cara, com certeza não era pra isso acontecer!\n");
	    sleep(5);
        printf("\nAo olhar pra baixo, fica nítido que sua mistura de elementos químicos expelem faíscas de energia\n");
        sleep(5);
        printf("\nM'Baku - Oh não...\n");
        sleep(5);
        printf("\nA luz cega seus olhos e seus sentidos se perdem. Você se encontra longe de si agora\n");
        sleep(5);
        printf("\n3\n");
        sleep(2);
        printf("\n2\n");
        sleep(2);
        printf("\n1\n");
        sleep(2);
        printf("\n\n=== <:THE GAME HAS STARTED:> ===\n\n");
        printf("\nM'Baku ---  HP = 25 // Sorte = 9/10 // Força = 5/10\n");
        sleep(7);
        printf("\nHá uma porta a sua frente. Existem dois báus, um de cada lado\n");
        sleep(5);
        printf("\nO primeiro baú diz: O trabalho árduo compensa o suor derramado de cada minuto de serviço. Ferramentas não fazem pouco caso da mão que as manuseiam\n");
        sleep(7);
        printf("\nO segundo baú diz: A chave da solidariedade é a proatividade. Me dê sua mão. Seu refúgio é próspero, e não lhe deixará\n");
        sleep(7);
        printf("\nO que deseja fazer?\n");
        printf("\n1 - Abrir baú 1 // 2 - Sair da sala // 3 - Abrir baú 2\n");
        scanf("%d", &escolha);
        
        if(escolha == 1)
        {
        	martelo += 1;
        	xp += 1;
        	printf("\nDentro do baú há um martelo. Ele é todo seu\n");
        	sleep(5);
        	printf("\nO que deseja fazer?\n");
        	printf("\n1 - Sair da sala // 2 - Abrir baú 2\n");
        	scanf("%d", &escolha);
        	
        	if(escolha == 2)
        	{
        		curaT += 1;
			    xp += 1;
				printf("\nDentro do baú há um frasco de super poção. Ela é toda sua\n");
				sleep(5);
			}
		}else if(escolha == 3)
		{
			curaT += 1;
			xp += 1;
			printf("\nDentro do baú há um frasco de super poção. Ela é toda sua\n");
			sleep(5);
			printf("\nO que deseja fazer?\n");
			printf("\n1 - 1 - Abrir baú 1 // 2 - Sair da sala\n");
			scanf("%d", &escolha);
			
			if(escolha == 1)
			{
				martelo += 1;
        		xp += 1;
        		printf("\nDentro do baú há um martelo. Ele é todo seu\n");
        		sleep(5);
			}
		}
		
		printf("\nVocê abre a porta e sai da sala\n");
		sleep(5);
		printf("\nApós chegar na sala seguinte, você repara que o ambiente é pequeno\n");
		sleep(5);
		printf("\nAos poucos, você sente um calafrio dentro de si. E está aumentando\n");
		sleep(5);
		printf("\nVocê começa a perder a noção do que é real ou não é\n");
		sleep(5);
		printf("\nAté que você sente uma mão encostar em seu ombro direito\n");
		sleep(5);
		printf("\nM'Baku - ");
	}
	return 0;
}