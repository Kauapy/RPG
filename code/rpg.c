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
    int ult = 0, hpEne, protecao = 0, redencao = 0;
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
		printf("\nVocês chegam ao fim do corredor e encontram uma porta\n");
		sleep(5);
		printf("\nAo atravessá-la, vocês surgem em uma sala enorme\n");
		sleep(5);
		printf("\nEssa sala possui a temática de um circo\n");
		sleep(5);
		printf("\nTom - Uau. Parece que estamos em um evento\n");
		sleep(5);
		printf("\nJax - Eh, o evento da morte. Namoral, como sai daqui?\n");
		sleep(5);
		printf("\nTom - Calma, cara. Acredito que isso seja algum tipo de puzzle\n");
		sleep(5);
		printf("\nJax - O que é isso? É de comer?\n");
		sleep(3);
		printf("\nTom - É uma espécie de desafio que precisa usar a cabeça pra resolver\n");
		sleep(5);
		printf("\nJax - Ixi, lascou então\n");
		sleep(3);
		printf("\nTom - Que tal nos separarmos? Quando descobrirmos algo, chamamos um ao outro\n");
		sleep(5);
		printf("\nJax - Tá certo\n");
		sleep(3);
		printf("\nAssim, você caminha pra um lado e seu amigo para o outro\n");
		sleep(5);
		printf("\nVocê chega em um local onde dá pra analisar algumas coisas\n");
		sleep(5);
		printf("\nO que você gostaria de checar?\n");
		printf("\n1 - Mesa de balões // 2 - Máscaras // 3 - Cartas de baralho // 4 - Andar reto\n");
		scanf("%d", &escolha);
		
		if(escolha == 1)
		{
			printf("\nUma mesa com balões coloridos. Você enxerga sobre a mesa uma pinça\n");
			sleep(5);
			printf("\nCom uma pinça em mãos, você é capaz de estourar os balões\n");
			sleep(5);
			printf("\nQual você deseja estourar?\n");
			printf("\n1 - Vermelho // 2 - Azul // 3 - Amarelo // 4 - Nenhum\n");
			scanf("%d", &escolha);
			
			if(escolha == 1)
			{
				printf("\nVocê estoura o balão vermelho. Você encontra ");
				sorte = dado();
				
				if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
				{
					sleep(2);
					printf("nada\n");
					sleep(2);
				}else
				{
					sleep(2);
					printf("duas poções grandes\n");
					curaT += 2;
					xp += 5;
					sleep(2);
				}
				
				printf("\nQual você deseja estourar?\n");
			    printf("\n1 - Azul // 2 - Amarelo // 3 - Nenhum\n");
			    scanf("%d", &escolha);
			    
			    if(escolha == 1)
			    {
			    	printf("\nVocê estoura o balão azul. Você encontra ");
			    	sorte = dado();
			    	
			    	if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
					{
						sleep(2);
						printf("nada\n");
						sleep(2);
					}else
					{
						sleep(2);
						printf("três espadas\n");
						espada += 3;
						xp += 5;
						sleep(2);
					}
					
					printf("\nQual você deseja estourar?\n");
					printf("\n1 - Amarelo // 2 - Nenhum\n");
					scanf("%d", &escolha);
					
					if(escolha == 1)
					{
						printf("\nVocê estoura o balão amarelo. Você encontra ");
						sorte = dado();
						
						if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
						{
							sleep(2);
							printf("nada\n");
							sleep(2);
						}else
						{
							sleep(2);
							printf("três escudos\n");
							escudo += 3;
							xp += 5;
							sleep(2);
						}
					}
				}else if(escolha == 2)
				{
					printf("\nVocê estoura o balão amarelo. Você encontra ");
					sorte = dado();
						
					if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
					{
						sleep(2);
						printf("nada\n");
						sleep(2);
					}else
					{
						sleep(2);
						printf("três escudos\n");
						escudo += 3;
						xp += 5;
						sleep(2);
					}
					
					printf("\nQual você deseja estourar?\n");
					printf("\n1 - Azul // 2 - Nenhum\n");
					scanf("%d", &escolha);
				
					if(escolha == 1)
					{
						printf("\nVocê estoura o balão azul. Você encontra ");
			    		sorte = dado();
			    	
			    		if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
						{
							sleep(2);
							printf("nada\n");
							sleep(2);
						}else
						{
							sleep(2);
							printf("três espadas\n");
							espada += 3;
							xp += 5;
							sleep(2);
						}
					}
				}
			}else if(escolha == 2)
			{
				printf("\nVocê estoura o balão azul. Você encontra ");
			    sorte = dado();
			    	
			    if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
				{
					sleep(2);
					printf("nada\n");
					sleep(2);
				}else
				{
					sleep(2);
					printf("três espadas\n");
					espada += 3;
					xp += 5;
					sleep(2);
				}
				
				printf("\nQual você deseja estourar?\n");
				printf("\n1 - Vermelho // 2 - Amarelo // 3 - Nenhum\n");
				scanf("%d", &escolha);
				
				if(escolha == 1)
				{
					printf("\nVocê estoura o balão vermelho. Você encontra ");
					sorte = dado();
				
					if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
					{
						sleep(2);
						printf("nada\n");
						sleep(2);
					}else
					{
						sleep(2);
						printf("duas poções grandes\n");
						curaT += 2;
						xp += 5;
						sleep(2);
					}
					
					printf("\nQual você deseja estourar?\n");
					printf("\n1 - Amarelo // 2 - Nenhum\n");
					scanf("%d", &escolha);
					
					if(escolha == 1)
					{
						printf("\nVocê estoura o balão amarelo. Você encontra ");
						sorte = dado();
						
						if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
						{
							sleep(2);
							printf("nada\n");
							sleep(2);
						}else
						{
							sleep(2);
							printf("três escudos\n");
							escudo += 3;
							xp += 5;
							sleep(2);
						}
					}
				}else if(escolha == 2)
				{
					printf("\nVocê estoura o balão amarelo. Você encontra ");
					sorte = dado();
						
					if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
					{
						sleep(2);
						printf("nada\n");
						sleep(2);
					}else
					{
						sleep(2);
						printf("três escudos\n");
						escudo += 3;
						xp += 5;
						sleep(2);
					}
					
					printf("\nQual você deseja estourar?\n");
					printf("\n1 - Vermelho // 2 - Nenhum\n");
					scanf("%d", &escolha);
					
					if(escolha == 1)
					{
						printf("\nVocê estoura o balão vermelho. Você encontra ");
						sorte = dado();
				
						if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
						{
							sleep(2);
							printf("nada\n");
							sleep(2);
						}else
						{
							sleep(2);
							printf("duas poções grandes\n");
							curaT += 2;
							xp += 5;
							sleep(2);
						}
					}
				}
			}else if(escolha == 3)
			{
				printf("\nVocê estoura o balão amarelo. Você encontra ");
				sorte = dado();
						
				if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
				{
					sleep(2);
					printf("nada\n");
					sleep(2);
				}else
				{
					sleep(2);
					printf("três escudos\n");
					escudo += 3;
					xp += 5;
					sleep(2);
				}
				
				printf("\nQual você deseja estourar?\n");
				printf("\n1 - Vermelho // 2 - Azul / 3 - Nenhum\n");
				scanf("%d", &escolha);
				
				if(escolha == 1)
				{
					printf("\nVocê estoura o balão vermelho. Você encontra ");
					sorte = dado();
				
					if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
					{
						sleep(2);
						printf("nada\n");
						sleep(2);
					}else
					{
						sleep(2);
						printf("duas poções grandes\n");
						curaT += 2;
						xp += 5;
						sleep(2);
					}
					
					printf("\nQual você deseja estourar?\n");
					printf("\n1 - Azul // 2 - Nenhum\n");
					scanf("%d", &escolha);
				
					if(escolha == 1)
					{
						printf("\nVocê estoura o balão azul. Você encontra ");
			    		sorte = dado();
			    	
			    		if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
						{
							sleep(2);
							printf("nada\n");
							sleep(2);
						}else
						{
							sleep(2);
							printf("três espadas\n");
							espada += 3;
							xp += 5;
							sleep(2);
						}
					}
				}else if(escolha == 2)
				{
					printf("\nVocê estoura o balão azul. Você encontra ");
			    	sorte = dado();
			    	
			    	if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
					{
						sleep(2);
						printf("nada\n");
						sleep(2);
					}else
					{
						sleep(2);
						printf("três espadas\n");
						espada += 3;
						xp += 5;
						sleep(2);
					}
					
					printf("\nQual você deseja estourar?\n");
					printf("\n1 - Vermelho // 2 - Nenhum");
					scanf("%d", &escolha);
					
					if(escolha == 1)
					{
						printf("\nVocê estoura o balão vermelho. Você encontra ");
						sorte = dado();
				
						if(sorte == 3 || sorte == 6 || sorte == 7 || sorte == 8 || sorte == 10)
						{
							sleep(2);
							printf("nada\n");
							sleep(2);
						}else
						{
							sleep(2);
							printf("duas poções grandes\n");
							curaT += 2;
							xp += 5;
							sleep(2);
						}
					}
				}
			}
		}else if(escolha == 2)
		{
			printf("\nHá um aviso na bancada onde as máscaras estão apoiadas\n");
			sleep(5);
			printf("\nDiz: Não encoste aí, são minha propriedade\n");
			sleep(5);
			printf("\nTom - Pode deixar\n");
			sleep(3);
		}else if(escolha == 3)
		{
			printf("\nQuatro cartas estão em evidência em cima da mesa\n");
			sleep(5);
			printf("\nEscolha uma\n");
			printf("\n1 - Valete // 2 - Rainha // 3 - Às // 4 - Rei\n");
			scanf("%d", &escolha);
			
			if(escolha == 1)
			{
				hp[0] += 10;
				printf("\nVocê ganhou 10 de HP\n");
				xp += 4;
				sleep(5);
			}else if(escolha == 2)
			{
				escudo += 2;
				printf("\nVocê ganhou 2 escudos\n");
				xp += 4;
				sleep(5);
			}else if(escolha == 3)
			{
				curaM += 3;
				printf("\nVocê ganhou 3 poções leves\n");
				xp += 4;
				sleep(5);
			}else if(escolha == 4)
			{
				espada += 2;
				martelo += 2;
				printf("\nVocê ganhou 2 espadas e 2 martelos\n");
				xp += 4;
				sleep(5);
			}
		}
		
		printf("\nVocê segue em frente\n");
		sleep(3);
		printf("\nEm meio a algumas tendas, você ouve risadas estranhas\n");
		sleep(5);
		printf("\nTom - Ue. Jax coringou do nada?\n");
		sleep(3);
		printf("\nSem muito tempo pra pensar, uma pessoa surge de repente na sua frente, correndo\n");
		sleep(5);
		printf("\n??? - Opa! Achei mais um\n");
		sleep(3);
		printf("\nTom - Epa! Quem é você?\n");
		sleep(3);
		printf("\n??? - Desculpa. Não me apresentei, hihihi\n");
		sleep(3);
		printf("\n??? - Me chamo Smily, e vim deixar seu dia melhor\n");
		sleep(5);
		printf("\nTom - Será que você tem como tirar eu e meu amigo daqui?\n");
		sleep(5);
		printf("\nSmily - Seu amigo, seu amigo...\n");
		sleep(3);
		printf("\nSmily - Ah sim!\n");
		sleep(2);
		printf("\nSmily - Você deve estar falando da atração principal\n");
		sleep(5);
		printf("\nTom - Atração principal?\n");
		sleep(3);
		printf("\nSmily - Hehehehe. Me acompanhe\n");
		sleep(3);
		printf("\nTom - Ok...\n");
		sleep(3);
		printf("\nVocê decide seguir Smily. Ele te leva até a outra ponta dessa enorme sala\n");
		sleep(5);
		printf("\nSmily - Veja só! A estrelinha conhecida como seu amigo está bem aqui\n");
		sleep(5);
		printf("\nJax - Tom!!\n");
		sleep(3);
		printf("\nTom - Jax, cara. O que você tá fazendo amarrado aí?\n");
		sleep(5);
		printf("\nJax - Esse cara me amarrou aqui! Tome cuidado\n");
		sleep(5);
		printf("\nTom - O que?\n");
		sleep(3);
		printf("\nSmily - Vocês formarão um belo número para o meu espetáculo\n");
		sleep(5);
		printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: Smily\n\n");
        hpEne = 45;
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
                printf("\nTom - Jax, aguente firme. Vou te desamarrar daí\n");
                sleep(3);
                printf("\nJax - Beleza. Pegue isso\n");
                curaM += 3;
                sleep(3);
                printf("\nVocê obteve 3 poções leves\n");
                sleep(5);
                printf("\nJax - Encontrei enquanto estava andando por aí\n");
                sleep(5);
                printf("\nSmily - Isso não está no roteiro! Comportem-se, cobaias\n");
                sleep(5);
                printf("\nTom - Agradeço, Jax\n");
                sleep(5);
                break;
            }
                
            if(hpEne <= 0)
            {
                xp += 8;
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
                    hp[0] = danoM(hp[0]);
                    printf("\nVocê foi atacado\n");
                    sleep(5);
                }
            }
        }
		
		printf("\nSmily - Um lugar divertido como esse teria bastante para entregar a vocês\n");
		sleep(5);
		printf("\nSmily - Mas a partir de agora, HEHE. Pura tristeza vos espera\n");
		sleep(5);
		printf("\nO inimigo Smily sucumbe\n");
		sleep(5);
		printf("\nVocê desamarra seu amigo\n");
		sleep(5);
		printf("\nTom - Que cara maluco\n");
		sleep(3);
		printf("\nJax - Pode crê. Obrigado por me salvar\n");
		sleep(3);
		printf("\nUma porta se abre\n");
		sleep(5);
		printf("\nTom - É isso. Vamos redobrar a atenção e continuar nossa fuga\n");
		sleep(5);
		printf("\nJax - Ok. Vamos nessa\n");
		sleep(5);
		printf("\nFASE 2 - FINALIZADA  //  Seu XP: %d\n", xp);
		sleep(7);
		printf("\nVocê subiu para o nível 3\n");
		sleep(5);
		printf("\nRecompensa: 4 martelos, 3 espadas, 2 escudos, 2 ultimates\n");
		martelo += 4;
		espada += 3;
		escudo += 2;
		ult += 2;
		sleep(7);
		printf("\nVocês passam pela porta e chegam numa escada\n");
		sleep(5);
		printf("\nSubindo ela, vocês começam a ficar aflitos com o que pode vir\n");
		sleep(5);
		printf("\nTom - Estou pensando naquilo que ele disse no final\n");
		sleep(5);
		printf("\nJax - Muito estranho. Você acha que devíamos voltar?\n");
		sleep(5);
		printf("\nTom - Temos que descobrir a verdade, Jax. Vamos em frente\n");
		sleep(5);
		printf("\nJax - E se tiver uma armadilha nos esperando?\n");
		sleep(5);
		printf("\nTom - Vamos descobrir lá\n");
		sleep(3);
		printf("\nA escadaria termina e vocês chegam em uma porta larga\n");
		sleep(5);
		
		for(int i = 1; i <= 100; i++)
		{
			printf("\nVocê está pronto para entrar?\n");
			printf("\n1 - Sim // 2 - Não\n");
			scanf("%d", &escolha);
			
			if(escolha == 1)
			{
				break;
			}else if(escolha == 2)
			{
				printf("\nJax - Relaxe, Tom. Viemos até aqui juntos. O que tiver de acontecer, passaremos juntos\n");
				sleep(5);
			}
		}
		
		printf("\nVocês abrem a porta e entram\n");
		sleep(3);
		printf("\nVocês se encontram em uma arena grande\n");
		sleep(3);
		printf("\nLuxuosa e com paleta amarela por todo lado\n");
		sleep(3);
		printf("\nAs luzes se acendem\n");
		sleep(3);
		printf("\n??? - Parabéns, vocês chegaram longe\n");
		sleep(3);
		printf("\nTom - Você é o organizador desse caos?\n");
		sleep(3);
		printf("\n??? - Bingo! Exatamente\n");
		sleep(3);
		printf("??? - Me chamo Ophion\n");
		sleep(3);
		printf("\nEle estava de máscara, mas ele tira ela e revela seu rosto\n");
		sleep(5);
		printf("\nTom - Diretor Morgan??\n");
		sleep(3);
		printf("\nJax - Mentira!!!\n");
		sleep(3);
		printf("\nOphion - Sim meninos, sou eu. Nossa faculdade teve êxito no projeto do tempo\n");
		sleep(5);
		printf("\nOphion - Pasmem, estamos no passado agora\n");
		sleep(3);
		printf("\nTom - Não pode ser. Como voltamos??\n");
		sleep(3);
		printf("\nOphion - Não voltarão a menos que eu permita. Vocês ainda serão úteis estando aqui\n");
		sleep(5);
		printf("\nOphion - Ah, e agradeçam ao seu colega Baku por isso\n");
		sleep(5);
		printf("\nOphion - O equívoco dele foi o sucesso do nosso projeto\n");
		sleep(5);
		printf("\nJax - Parem com essa palhaçada agora mesmo! Tire a gente daqui!\n");
		sleep(5);
		printf("\nOphion - O negócio é o seguinte. Se querem voltar, vão ter que lutar entre si\n");
		sleep(5);
		printf("\nOphion - Quem vencer, volta pra casa\n");
		sleep(3);
		printf("\nVocê sente sua espinha gelar\n");
		sleep(3);
		printf("\nOphion - É o único jeito\n");
		sleep(3);
		printf("\nO que você vai fazer?\n");
		printf("\n1 - Lutar contra Jax // 2 - Não lutar\n");
		scanf("%d", &escolha);
		
		if(escolha == 1)
		{
			printf("\nTom - Desculpa por isso, Jax\n");
			sleep(3);
			printf("\nJax - Tá maluco, cara? Não dê ouvidos a ele!\n");
			sleep(5);
			printf("\nTom - Eu tenho que voltar pro meu tempo. Não posso deixar tudo pra trás\n");
			sleep(5);
			printf("\nJax - Você perdeu meu respeito, Tom. Se é o que quer, então bora\n");
			sleep(5);
			printf("\nOphion - Hahahaha\n");
			sleep(3);
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Jax\n\n");
        	hpEne = 45;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
            	if(hp[0] <= 0)
            	{
            		printf("\nVocê perdeu\n");
            		sleep(5);
                	printf("\nJax - Uma pena te ver nesse estado, Tom\n");
                	sleep(3);
                	printf("\nJax - Mas você me deixou sem escolhas\n");
                	sleep(3);
                	printf("\nJax - Até mais\n");
                	sleep(3);
                	printf("\nSua visão fica turva, e você sucumbe\n");
                	sleep(5);
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
                	printf("\nJax - O que deu em você, cara?\n");
                	sleep(3);
                	printf("\nJax - Pensei que superaríamos isso juntos\n");
                	sleep(3);
                	printf("\nTom - Me desculpa, Jax. Eu tô com muito medo\n");
                	sleep(5);
                	printf("\nJax - Isso não é desculpa. Você me enoja!\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 15;
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
        	
        	printf("\nOphion - Você derrotou mesmo seu amigo para se salvar. Que atitude traiçoeira, jovem Tom\n");
        	sleep(5);
        	printf("\nTom - Nunca vou te perdoar, diretor. NUNCA!\n");
        	sleep(5);
        	printf("\nOphion - Não fique estressado. Como prometido, irei encerrar sua viajem ao passado aqui mesmo\n");
        	sleep(5);
        	printf("\nO sabor dessa vitória deixa um gosto amargo em sua boca\n");
        	sleep(5);
        	printf("\nOphion aperta seu grande botão vermelho e o leva de volta a sua realidade, no presente\n");
        	sleep(5);
        	printf("\nTom - Sei que nunca me perdoarei pelo que fiz. Me salvei do perigo, mas me submeti a culpa eterna\n");
        	sleep(5);
        	printf("\nO aluno Tom não conseguiu suportar por muito tempo o fardo que decidiu carregar\n");
        	sleep(5);
		}else if(escolha == 2)
		{
			printf("\nTom - Claro que eu não vou aceitar isso\n");
			sleep(5);
			printf("\nOphion - Como?\n");
			sleep(3);
			printf("\nTom - Não é contra meu amigo que devo lutar. É contra você!!\n");
			sleep(5);
			printf("\nJax - Diretor, você vai pagar caro pelo que fez!\n");
			sleep(5);
			printf("\nOphion - Hahaahhaha\n");
			sleep(3);
			printf("\nOphion - É tudo ou nada então\n");
			sleep(3);
			printf("\nVocê recebeu alguns itens de seu amigo\n");
			sleep(5);
			printf("\nOphion - Derrotem-me, se conseguirem\n");
			sleep(5);
			curaT += 3;
			espada += 3;
			escudo += 4;
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Ophion\n\n");
        	hpEne = 100;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
            	if(hp[0] <= 0)
            	{
                	printf("\nVocês perderam\n");
                	sleep(5);
                	printf("\nOphion - Bastava continuarem aqui. Uma pena que tentaram resistir\n");
                	sleep(5);
                	printf("\nJax - Desculpa por tudo, Tom\n");
                	sleep(3);
                	printf("\nTom - Tá tudo bem. O que importa é que tentamos de tudo e não nos rendemos ao desespero\n");
                	sleep(5);
                	printf("\nJax - Verdade. Não queria dizer adeus assim :(\n");
                	sleep(5);
                	printf("\nTom - Obrigado por estar do meu lado\n");
                	sleep(3);
                	printf("\nTom - Adeus\n");
                	sleep(5);
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
                	printf("\nTom - Jax!! Use seus golpes de boxe nele!\n");
                	sleep(5);
                	printf("\nJax - Belezaa!\n");
                	sleep(3);
                	printf("\nSeu amigo tirou bastante dano do inimigo\n");
                	hpEne = danoG(hpEne);
                	sleep(5);
                	printf("\nOphion - Vocês me pagam, malditos\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 30;
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
                    	hp[0] = danoM(hp[0]);
                    	hp[0] -= 5;
                    	printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    	sleep(5);
                	}else
                	{
                    	hp[0] = danoG(hp[0]);
                    	printf("\nVocê foi atacado\n");
                    	sleep(5);
                	}
            	}
        	}
        	
        	printf("\nOphion - Impossível\n");
        	sleep(3);
        	printf("\nO comandante da operação do tempo foi derrotado\n");
        	sleep(5);
        	printf("\nAo cair no chão, ele derruba um grande botão vermelho\n");
        	sleep(5);
        	printf("\nTom - Chegou a hora\n");
        	sleep(3);
        	printf("\nJax - Até nunca mais, espelunca maluca\n");
        	sleep(3);
        	printf("\nAntes de ir embora, vocês deixam registrado em um papel que seu diretor havia separado para anotar os resultados da pesquisa\n");
        	sleep(5);
        	printf("\n= Vejo você em meus sonhos =\n");
        	sleep(5);
		}    
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
		printf("\nVocês chegam no final do corredor e atravessam uma porta\n");
		sleep(5);
		printf("\nAo entrar, vocês vislumbram um lugar enorme\n");
		sleep(5);
		printf("\nOlhando os detalhes, vocês percebem que estão em um ambiente infantil\n");
		sleep(5);
		printf("\nKiber - Parece...uma creche\n");
		sleep(3);
		printf("\nM'Baku - Siimm, mano\n");
		sleep(3);
		printf("\nKiber - Isso tudo é muito estranho. O que os sequestradores querem de nós?\n");
		sleep(5);
		printf("\nM'Baku - Sequestradores?\n");
		sleep(3);
		printf("\nKiber - Pense comigo. Ficamos desacordados e acordamos aqui, do nada\n");
		sleep(5);
		printf("\nKiber - Isso é obra de alguém, ou de um grupo\n");
		sleep(5);
		printf("\nM'Baku - Até que faz sentido\n");
		sleep(3);
		printf("\nKiber - Ei, você ouviu?\n");
		sleep(3);
		printf("\nM'Baku - Ouvi o quê?\n");
		sleep(3);
		printf("\nKiber - Isso! Som de tremores\n");
		sleep(3);
		printf("\nM'Baku - Pera, tô ouvindo\n");
		sleep(3);
		printf("\nO barulho é real e está se intensificando\n");
		sleep(5);
		printf("\nDepois de segundos, uma figura grande aparece atrás de um dos objetos gigantes\n");
		sleep(5);
		printf("\nM'Baku - Oxi!!\n");
		sleep(3);
		printf("\nKiber - Não pode ser. Isso é um bebê gigante?\n");
		sleep(5);
		printf("\n??? - Gunter quer carinho\n");
		sleep(3);
		printf("\nM'Baku - Você ouviu ele, Kiber. É melhor fazer o que ele quer\n");
		sleep(5);
		printf("\nGunter - Gunter gostar muito de carinho\n");
		sleep(5);
		printf("\nKiber - Será que eu devo?\n");
		sleep(3);
		printf("\nO que você vai fazer?\n");
		printf("\n1 - Acariciar o bebê // 2 - Fazer caretas // 3 - Não fazer nada\n");
		scanf("%d", &escolha);
		
		if(escolha == 1)
		{
			printf("\nVocê decide acariciar o bebê\n");
			sleep(5);
			printf("\nM'Baku - KKkkkkkk isso tá muito fofinho\n");
			sleep(3);
			printf("\nKiber - Acho que ele está gostando\n");
			sleep(3);
			printf("\nGunter - ^_^  :)  :3\n");
			xp += 4;
			sleep(3);
			printf("\nM'Baku - Ele está bem calmo\n");
			sleep(3);
			printf("\nKiber - Confesso que me assustei de primeira, mas ele é mansinho\n");
			sleep(5);
			printf("\nGunter - Gunter querer te dar presente\n");
			sleep(5);
			printf("\nKiber - Que bom\n");
			curaT += 3;
			printf("\nVocê obteve 3 poções grandes\n");
			sleep(5);
			printf("\nKiber - Muito obrigado, Gunter\n");
			sleep(3);
			printf("\nM'Baku - Como será que um bebê conseguiu isso?\n");
			sleep(5);
			printf("\nKiber - O tamanho dele é um mistério. Isso com certeza deve ser também\n");
			sleep(5);
		}else if(escolha == 2)
		{
			printf("\nVocê faz uma sequência de caretas\n");
			sleep(5);
			printf("\nGunter - Aaaa...\n");
			sleep(3);
			printf("\nM'Baku - Que isso cara. Não foi isso que ele pediu\n");
			sleep(5);
			printf("\nKiber - Acho que foi o nervoso, sei lá\n");
			sleep(5);
			printf("\nGunter - AAhahaahahahhaha\n");
			xp += 5;
			sleep(3);
			printf("\nKiber - Olha, ele está sorrindo\n");
			sleep(3);
			printf("\nM'Baku - Ufa, ainda bem. Achei que fosse ser atacado agora\n");
			sleep(5);
			printf("\nGunter - Gunter gostar de você\n");
			sleep(3);
			printf("\nKiber - Tá vendo? Ele gostou de mim, hehe\n");
			sleep(5);
			printf("\nM'Baku - De mim ninguém gosta\n");
			sleep(3);
		}
		
		printf("\nGunter - Gunter se sentir só ultimamente\n");
		sleep(3);
		printf("\nGunter - Gunter sentir saudade dos pais\n");
		sleep(3);
		printf("\nKiber - Eita, ele tem pais\n");
		sleep(3);
		printf("\nM'Baku - Todo mundo tem pais, mané\n");
		sleep(3);
		printf("\nGunter - BUAAAAAAAAA\n");
		sleep(5);
		printf("\nKiber - Oh não. Ele tá chorando\n");
		sleep(3);
		printf("\nM'Baku - Caramba, que choro alto!\n");
		sleep(3);
		printf("\nO bebê parte pra cima de vocês, quase que os atropelando\n");
		sleep(5);
		printf("\nKiber - Essa foi por pouco!\n");
		sleep(3);
		printf("\nM'Baku - Precisamos ficar atentos\n");
		sleep(3);
		printf("\nGunter - BUUAAAAAAAAAA >:(\n");
		sleep(5);
		printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: Gunter\n\n");
        hpEne = 60;
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
                        protecao = 1;
                        hp[1] = curaTot(hp[1]);
                        printf("\nVocê expõe uma incrível defesa, bloqueando o próximo golpe inimigo e restaurando uma boa quantidade de HP\n");
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
                        hp[1] = curaTot(hp[1]);
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
                        hp[1] = curaMed(hp[1]);
                        curaM -= 1;
                        printf("\nVocê se sente um pouco melhor\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 3:
                printf("\nGunter - Ninguém me entender\n");
                sleep(3);
                printf("\nGunter - BUUAAAAAAAAAAAA :(\n");
                sleep(5);
                printf("\nM'Baku - Estamos perdidos. Ele é bem forte pra um bebê\n");
                sleep(5);
                printf("\nKiber - Talvez por ele ser um gigante\n");
                sleep(3);
                printf("\nKiber - Cara, ele é só um bebê\n");
                sleep(3);
                printf("\nKiber - Não acho certo machucar ele\n");
                sleep(3);
                printf("\nM'Baku - Mas ele tá super revoltado. Não temos o que fazer\n");
                sleep(5);
                printf("\nKiber - Podemos tentar acalmá-lo\n");
                sleep(3);
                printf("\nKiber - Aqui, Gunter. Passou, passou\n");
                sleep(3);
                printf("\nGunter - Bubuu, bu, bubu?\n");
                sleep(3);
                printf("\nKiber - Tudo vai ficar bem. Eu prometo a você\n");
                sleep(5);
                printf("\nGunter - ...\n");
                sleep(3);
                printf("\nVocê tenta acalmar o bebê\n");
                sleep(5);
                printf("\nSua tentativa é ");
                sorte = dado();
                
                if(sorte == 1 || sorte == 4 || sorte == 9)
                {
                	sleep(2);
                	printf("um fracasso!\n");
                	sleep(2);
                	printf("\nO inimigo continua irritado e voraz\n");
                	sleep(5);
				}else
				{
					sleep(2);
					printf("um sucesso!\n");
					xp += 8;
					sleep(2);
					printf("\nO inimigo se acalmou\n");
					sleep(5);
					redencao = 1;
				}
                break;
            }
            
            if(redencao == 1)
            {
            	redencao = 0;
            	break;
			}
                
            if(hpEne <= 0)
            {
                xp += 10;
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
                printf("\nSua tentativa de atacar enquanto defende é ");
                sorte = dado();
                
                if(sorte == 1 || sorte == 4 || sorte == 9)
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
                    
                if(sorte == 7)
                {
                    hp[1] = danoG(hp[1]);
                    hp[1] -= 5;
                    printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    sleep(5);
                }else
                {
                    hp[1] = danoM(hp[1]);
                    printf("\nVocê foi atacado\n");
                    sleep(5);
                }
            }
        }
        
        printf("\nO grande bebê cai no chão, inconsciente\n");
        sleep(5);
        printf("\nM'Baku - Você nos salvou agora, cara\n");
        sleep(3);
        printf("\nKiber - Fico triste por ele ter se machucado assim\n");
        sleep(5);
        printf("\nM'Baku - Também fico. Mas ao menos, estamos vivos!\n");
        sleep(5);
        printf("\nKiber - Eh, você tem razão\n");
        sleep(3);
        printf("\nVocês olham pro outro lado da enorme sala e observam uma escada que não estava ali\n");
        sleep(5);
        printf("\nM'Baku - Providenciaram uma continuação para nós por termos derrotado um bebê. Cruel...\n");
        sleep(5);
        printf("\nKiber - Vamos descobrir o que está acontecendo. Bora para as escadas\n");
        sleep(5);
        printf("\nM'Baku - Yes sir\n");
        sleep(5);
        printf("\nFASE 2 - FINALIZADA  //  Seu XP: %d\n", xp);
		sleep(7);
		printf("\nVocê subiu para o nível 3\n");
		sleep(5);
		printf("\nRecompensa: 4 martelos, 3 espadas, 2 escudos, 2 ultimates\n");
		martelo += 4;
		espada += 3;
		escudo += 2;
		ult += 2;
		sleep(7);
		printf("\nSubindo as escadas, vocês começam a ficar aflitos com o que pode vir\n");
		sleep(5);
		printf("\nKiber - Sei que não devemos desistir, mas não dá pra negar que tudo isso é assustador\n");
		sleep(5);
		printf("\nM'Baku - Estamos mais perto do que longe. Seremos vitoriosos em breve\n");
		sleep(5);
		printf("\nKiber - Prosseguir então, certo?\n");
		sleep(5);
		printf("\nM'Baku - Certo!!\n");
		sleep(5);
		printf("\nKiber - É assim que se fala\n");
		sleep(3);
		printf("\nA escadaria termina e vocês chegam em uma porta larga\n");
		sleep(5);
		
		for(int i = 1; i <= 100; i++)
		{
			printf("\nVocê está pronto para entrar?\n");
			printf("\n1 - Sim // 2 - Não\n");
			scanf("%d", &escolha);
			
			if(escolha == 1)
			{
				break;
			}else if(escolha == 2)
			{
				printf("\nM'Baku - É tenso, eu sei. Mas estou aqui. Conte comigo pro que houver depois dessa porta\n");
				sleep(5);
			}
		}
		
		printf("\nVocês abrem a porta e entram\n");
		sleep(3);
		printf("\nVocês se encontram em uma arena grande\n");
		sleep(3);
		printf("\nLuxuosa e com paleta amarela por todo lado\n");
		sleep(3);
		printf("\nAs luzes se acendem\n");
		sleep(3);
		printf("\n??? - Parabéns, vocês chegaram longe\n");
		sleep(3);
		printf("\nKiber - Por acaso você seria o chefe disso tudo?\n");
		sleep(3);
		printf("\n??? - Bingo! Exatamente\n");
		sleep(3);
		printf("??? - Me chamo Ophion\n");
		sleep(3);
		printf("\nEle estava de máscara, mas ele tira ela e revela seu rosto\n");
		sleep(5);
		printf("\nKiber - Diretor Morgan??\n");
		sleep(3);
		printf("\nM'Baku - Mentira!!!\n");
		sleep(3);
		printf("\nOphion - Sim meninos, sou eu. Nossa faculdade teve êxito no projeto do tempo\n");
		sleep(5);
		printf("\nOphion - Pasmem, estamos no passado agora\n");
		sleep(3);
		printf("\nKiber - Não pode ser. Como voltamos??\n");
		sleep(3);
		printf("\nOphion - Não voltarão a menos que eu permita. Vocês ainda serão úteis estando aqui\n");
		sleep(5);
		printf("\nOphion - Ah, e agradeça ao seu colega Baku por isso\n");
		sleep(5);
		printf("\nOphion - O equívoco dele foi o sucesso do nosso projeto\n");
		sleep(5);
		printf("\nM'Baku - Parem com essa palhaçada agora mesmo! Tire a gente daqui!\n");
		sleep(5);
		printf("\nOphion - O negócio é o seguinte. Se querem voltar, vão ter que lutar entre si\n");
		sleep(5);
		printf("\nOphion - Quem vencer, volta pra casa\n");
		sleep(3);
		printf("\nVocês sente sua espinha gelar\n");
		sleep(3);
		printf("\nOphion - É o único jeito\n");
		sleep(3);
		printf("\nO que você vai fazer?\n");
		printf("\n1 - Lutar contra M'Baku // 2 - Não lutar\n");
		scanf("%d", &escolha);
		
		if(escolha == 1)
		{
			printf("\nKiber - Desculpa por isso, Baku\n");
			sleep(3);
			printf("\nM'Baku - Como assim, mano!? Você vai mesmo fazer isso?\n");
			sleep(5);
			printf("\nKiber - Eu tenho que voltar pro meu tempo. Não posso deixar tudo pra trás\n");
			sleep(5);
			printf("\nM'Baku - Lamentável demais, Kiber. Se é o que quer, então vamos nessa\n");
			sleep(5);
			printf("\nOphion - Hahahaha\n");
			sleep(3);
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: M'Baku\n\n");
        	hpEne = 25;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
            	if(hp[1] <= 0)
            	{
            		printf("\nVocê perdeu\n");
            		sleep(5);
                	printf("\nM'Baku - Uma pena te ver nesse estado, Kiber\n");
                	sleep(3);
                	printf("\nM'Baku - Mas você me deixou sem escolhas\n");
                	sleep(3);
                	printf("\nM'Baku - Até mais\n");
                	sleep(3);
                	printf("\nSua visão fica turva, e você sucumbe\n");
                	sleep(5);
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
                        	protecao = 1;
                        	hp[1] = curaTot(hp[1]);
                        	printf("\nVocê expõe uma incrível defesa, bloqueando o próximo golpe inimigo e restaurando uma boa quantidade de HP\n");
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
                        	hp[1] = curaTot(hp[1]);
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
                        	hp[1] = curaMed(hp[1]);
                        	curaM -= 1;
                        	printf("\nVocê se sente um pouco melhor\n");
                        	sleep(5);
                    	}
                	}
                	break;
                    
                	case 3:
                	printf("\nM'Baku - O que deu em você, cara?\n");
                	sleep(3);
                	printf("\nM'Baku - Pensei que superaríamos isso juntos\n");
                	sleep(3);
                	printf("\nKiber - Me desculpa, Baku. Eu tô com muito medo\n");
                	sleep(5);
                	printf("\nM'Baku - Isso não é desculpa. Você me enoja!\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 15;
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
                	printf("\nSua tentativa de atacar enquanto defende é ");
                	sorte = dado();
                
                	if(sorte == 1 || sorte == 4 || sorte == 9)
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
                    	hp[1] = danoL(hp[1]);
                    	hp[1] -= 5;
                    	printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    	sleep(5);
                	}else
                	{
                    	hp[1] = danoL(hp[1]);
                    	printf("\nVocê foi atacado\n");
                    	sleep(5);
                	}
            	}
        	}
        	
        	printf("\nOphion - Você derrotou mesmo seu amigo para se salvar. Que atitude traiçoeira, jovem Kiber\n");
        	sleep(5);
        	printf("\nKiber - Nunca vou te perdoar, diretor. NUNCA!\n");
        	sleep(5);
        	printf("\nOphion - Não fique estressado. Como prometido, irei encerrar sua viajem ao passado aqui mesmo\n");
        	sleep(5);
        	printf("\nO sabor dessa vitória deixa um gosto amargo em sua boca\n");
        	sleep(5);
        	printf("\nOphion aperta seu grande botão vermelho e o leva de volta a sua realidade, no presente\n");
        	sleep(5);
        	printf("\nKiber - Sei que nunca me perdoarei pelo que fiz. Me salvei do perigo, mas me submeti a culpa eterna\n");
        	sleep(5);
        	printf("\nO aluno Kiber não conseguiu suportar por muito tempo o fardo que decidiu carregar\n");
        	sleep(5);
		}else if(escolha == 2)
		{
			printf("\nKiber - Claro que eu não vou aceitar isso\n");
			sleep(5);
			printf("\nOphion - Como?\n");
			sleep(3);
			printf("\nKiber - Não é contra meu amigo que devo lutar. É contra você!!\n");
			sleep(5);
			printf("\nM'Baku - Diretor, você vai aprender com quantos socos se fazem uma pancada!\n");
			sleep(5);
			printf("\nOphion - Hahaahhaha\n");
			sleep(3);
			printf("\nOphion - É tudo ou nada então\n");
			sleep(3);
			printf("\nVocê recebeu alguns itens de seu amigo\n");
			sleep(5);
			printf("\nOphion - Derrotem-me, se conseguirem\n");
			sleep(5);
			curaT += 3;
			espada += 3;
			escudo += 4;
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Ophion\n\n");
        	hpEne = 100;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
            	if(hp[1] <= 0)
            	{
                	printf("\nVocês perderam\n");
                	sleep(5);
                	printf("\nOphion - Bastava continuarem aqui. Uma pena que tentaram resistir\n");
                	sleep(5);
                	printf("\nM'Baku - Desculpa por tudo, Kiber\n");
                	sleep(3);
                	printf("\nKiber - Tá tudo bem. O que importa é que tentamos de tudo e não nos rendemos ao desespero\n");
                	sleep(5);
                	printf("\nM'Baku - Verdade. Não queria dizer adeus assim :(\n");
                	sleep(5);
                	printf("\nKiber - Obrigado por estar do meu lado\n");
                	sleep(3);
                	printf("\nKiber - Adeus\n");
                	sleep(5);
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
                        	protecao = 1;
                        	hp[1] = curaTot(hp[1]);
                        	printf("\nVocê expõe uma incrível defesa, bloqueando o próximo golpe inimigo e restaurando uma boa quantidade de HP\n");
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
                        	hp[1] = curaTot(hp[1]);
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
                        	hp[1] = curaMed(hp[1]);
                        	curaM -= 1;
                        	printf("\nVocê se sente um pouco melhor\n");
                        	sleep(5);
                    	}
                	}
                	break;
                    
                	case 3:
                	printf("\nKiber - Baku!! Use seu ataque bizarro com as mãos!\n");
                	sleep(5);
                	printf("\nM'Baku - Vamoooou!\n");
                	sleep(3);
                	printf("\nSeu amigo tirou bastante dano do inimigo\n");
                	hpEne = danoG(hpEne);
                	sleep(5);
                	printf("\nOphion - Vocês me pagam, malditos\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 30;
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
                	printf("\nSua tentativa de atacar enquanto defende é ");
                	sorte = dado();
                
                	if(sorte == 1 || sorte == 4 || sorte == 9)
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
                    	hp[1] = danoM(hp[1]);
                    	hp[1] -= 5;
                    	printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    	sleep(5);
                	}else
                	{
                    	hp[1] = danoG(hp[1]);
                    	printf("\nVocê foi atacado\n");
                    	sleep(5);
                	}
            	}
        	}
        	
        	printf("\nOphion - Impossível\n");
        	sleep(3);
        	printf("\nO comandante da operação do tempo foi derrotado\n");
        	sleep(5);
        	printf("\nAo cair no chão, ele derruba um grande botão vermelho\n");
        	sleep(5);
        	printf("\nKiber - Chegou a hora\n");
        	sleep(3);
        	printf("\nM'Baku - Até nunca mais, mansão dos horrores\n");
        	sleep(3);
        	printf("\nAntes de ir embora, vocês deixam registrado em um papel que seu diretor havia separado para anotar os resultados da pesquisa\n");
        	sleep(5);
        	printf("\n= Vejo você em meus sonhos =\n");
        	sleep(5);
		}
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
		printf("\nO elevador oferece um ambiente calmo, mas você percebe que está ficando quente\n");
		sleep(5);
		printf("\nDex - Calor, ein?\n");
		sleep(3);
		printf("\nKiber - Eu percebi isso também\n");
		sleep(3);
		printf("\nDex - Quem me dera um copo de água agora\n");
		sleep(5);
		printf("\nKiber - Isso aqui virou uma sauna, só pode!\n");
		sleep(5);
		printf("\nVocês continuam a subir\n");
		sleep(3);
		printf("\nSubindo\n");
		sleep(3);
		printf("\nSubindo...\n");
		sleep(3);
		printf("\nSubindo.....................\n");
		sleep(3);
		printf("\nDex - Palhaçada é essa, rapaz. Esse elevedor é movido a lenha\n");
		sleep(5);
		printf("\nKiber - KKKkkkkkkkkkkkk\n");
		sleep(3);
		printf("\nKiber - É mais fácil a gente virar churrasco do que chegar lá\n");
		sleep(5);
		printf("\nO elevador começa a balançar de leve\n");
		sleep(5);
		printf("\nDex - Esses tremores estão me preocupando\n");
		sleep(5);
		printf("\nKiber - Tudo aqui parece ser velho. As ferrugens e poeiras entregam isso\n");
		sleep(5);
		printf("\nDex - Desde que não pare de funcionar, já está ótimo\n");
		sleep(5);
		printf("\nO elevador para de se mexer subitamente\n");
		sleep(5);
		printf("\nKiber - Oh não!\n");
		sleep(3);
		printf("\nDex - Tá de brincadeira...\n");
		sleep(3);
		printf("\nOs tremores ficam maiores. As paredes começam a rachar, vazando água para dentro do elevador\n");
		sleep(5);
		printf("\nDex - Lascou!! E agora, Kiber?\n");
		sleep(3);
		printf("\nKiber - Nunca te odiei tanto por desejar água!\n");
		sleep(5);
		printf("\nKiber - Podemos aproveitar algumas partes do elevador que cederam para empurrar o vazamento contra a parede\n");
		sleep(5);
		printf("\nKiber - Mas não é garantido que vai dar certo\n");
		sleep(5);
		printf("\nDex - Melhor do que esperar a morte. Vamos lá\n");
		sleep(5);
		
		for(int i = 1; i <= 5; i++)
		{
			printf("\n\nVocê e seu amigo amontoam pedaços do elevador para estancar o vazamento com empurrões\n");
			sleep(5);
			printf("\nA %dª tentativa é ", i);
			sorte = dado();
			
			if(sorte == 2 || sorte == 5 || sorte == 6 || sorte == 8)
			{
				sleep(2);
				printf("um fracasso!\n");
				sleep(2);
				printf("\nO vazamento se intensifica\n");
				sleep(5);
			}else
			{
				sleep(2);
				printf("um sucesso!\n");
				sleep(2);
				printf("\nO vazamento começa a diminuir\n");
				redencao += 1;
				sleep(5);
			}
		}
		
		if(redencao < 3)
		{
			printf("\nVocê não consegue conter o vazamento\n");
			sleep(5);
			printf("\nO elevador é preenchido de água e vocês estão presos\n");
			sleep(5);
			printf("\nGAME OVER\n");
			sleep(7);
			return 0;
		}else
		{
			redencao = 0;
			xp += 4;
			printf("\nVocês dois ficam bem cansados\n");
			sleep(5);
			printf("\nPorém, conseguem se salvar\n");
			sleep(3);
			printf("\nKiber - Essa foi quase, cara\n");
			sleep(3);
			printf("\nDex - Conseguimos. Realmente achei que fosse bater as botas\n");
			sleep(5);
			printf("\nDepois de alguns segundos, o elevador para, mas agora vocês chegam em outra sala\n");
			sleep(5);
			printf("\nSaindo do elevador, vocês se deparam com uma sala enorme\n");
			sleep(5);
			printf("\nNela, há muitos elementos que remetem a uma selva\n");
			sleep(5);
			printf("\nDex - Sinistro. Dá a impressão de que estamos do lado de fora\n");
			sleep(5);
			printf("\nKiber - Isso tá muito realista. Precisamos tomar cuidado\n");
			sleep(5);
			printf("\nDex - Vou ali ver se encontro algo bacana\n");
			sleep(5);
			printf("\nKiber - Não vai se perder, ein\n");
			sleep(3);
			printf("\nVocê foi dar uma volta por aí\n");
			sleep(5);
			printf("\nNo meio do caminho, você encontra um pedaço de carne\n");
			sleep(5);
			printf("\nO que pretende fazer?\n");
			printf("\n1 - Comer // 2 - Andar reto\n");
			scanf("%d", &escolha);
			
			if(escolha == 1)
			{
				redencao = 1;
				printf("\nUma carne bem suculenta. Você recupera 30 HP\n");
				hp[2] = curaTot(hp[2]);
				sleep(5);
			}
			
			printf("\nVocê continua a andar\n");
			sleep(3);
			printf("\nSua trajetória é grande. Você passa por bananeiras, lagos, pedras\n");
			sleep(5);
			printf("\nDex - Estranho. Não tem um animal sequer andando por essa mata toda\n");
			sleep(5);
			printf("\nCedo demais para uma afirmação dessas. Você ouve passos fortes atrás de você\n");
			sleep(5);
			printf("\nVocê olha para trás e vê um animal bípede estranho\n");
			sleep(5);
			printf("\n??? - GIaaaaahhhrr\n");
			sleep(3);
			printf("\nDex - AAAAahhhhh\n");
			sleep(3);
			printf("\nVocê começa a correr\n");
			sleep(3);
			printf("\nDurante sua corrida, você é cercado pelo animal em uma área isolada\n");
			sleep(5);
			printf("\nDex - Vou ter que entrar em combate\n");
			sleep(5);
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Hork\n\n");
        	hpEne = 20;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
        		if(redencao == 1)
        		{
        			printf("\nVocê sente seu estômago embrulhar\n");
        			sleep(5);
        			printf("\nDex - Deve ter sido aquela maldita carne que comi\n");
        			sleep(5);
        			hp[2] = danoL(hp[2]);
        			printf("\nVocê perde seu HP de leve\n");
        			sleep(5);
				}
        		
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
                	printf("\nDex - Sai, coisa feia!\n");
                	sleep(3);
                	printf("\nHork - Ghaaaarrruuuu\n");
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
                    
                	if(sorte == 10)
                	{
                    	hp[2] = danoL(hp[2]);
                    	hp[2] -= 5;
                    	printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    	sleep(5);
                	}else
                	{
                    	hp[2] = danoM(hp[2]);
                    	printf("\nVocê foi atacado\n");
                    	sleep(5);
                	}
            	}
        	}
        	
        	printf("\nHork - Griaauuuuuhhhrrr\n");
        	sleep(3);
        	printf("\nDex - Misericórdia. Que grito desnecessário\n");
        	sleep(5);
        	printf("\nKiber - Ah, Dex! Que bom que te achei\n");
        	sleep(5);
        	printf("\nDex - Calma, sem desespero. Acabei de derrotar esse daqui, estou salvo\n");
        	sleep(5);
        	printf("\nKiber - Ótimo, mas está vindo um bem maior do que esse aí atrás!\n");
        	sleep(5);
        	printf("\nDex - E você só avisa agora??\n");
        	sleep(3);
        	printf("\nSem tempo pra fugir, vocês são cercados pela maior da espécie\n");
        	sleep(5);
        	printf("\n??? - GRROOARRRRRR\n");
        	sleep(5);
        	printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Horkueen\n\n");
        	hpEne = 50;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
        		if(redencao == 1)
        		{
        			printf("\nVocê sente seu estômago embrulhar\n");
        			sleep(5);
        			printf("\nDex - Deve ter sido aquela maldita carne que comi\n");
        			sleep(5);
        			hp[2] = danoL(hp[2]);
        			printf("\nVocê perde seu HP de leve\n");
        			sleep(5);
				}
        		
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
                	printf("\nDex - Deve ser a mãe do último. É tão feia quanto\n");
                	sleep(5);
                	printf("\nKiber - Chega de piadinhas, animal\n");
                	sleep(3);
                	printf("\nKiber - Pegue isso\n");
                	sleep(3);
                	escudo += 1;
                	printf("\nVocê obteve um escudo\n");
                	sleep(5);
                	printf("\nDex - Valeu! Vai me dando cobertura\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 9;
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
                    
                	if(sorte == 10)
                	{
                    	hp[2] = danoG(hp[2]);
                    	hp[2] -= 5;
                    	printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    	sleep(5);
                	}else
                	{
                    	hp[2] = danoM(hp[2]);
                    	printf("\nVocê foi atacado\n");
                    	sleep(5);
                	}
            	}
        	}
        	
        	redencao = 0;
        	printf("\nHorkueen - GRRAUAUUUUuuiiaah\n");
        	sleep(3);
        	printf("\nO inimigo sucumbe\n");
        	sleep(3);
        	printf("\nKiber - Parabéns cara\n");
        	sleep(3);
        	printf("\nDex - Obrigado. Você prometeu e entregou\n");
        	sleep(5);
        	printf("\nKiber - ...ufa... Suave kkkkkkkk\n");
        	sleep(3);
        	printf("\nDex - Você tá legal?\n");
        	sleep(3);
        	printf("\nKiber - Estou sim. Vamos continuar\n");
        	sleep(3);
        	printf("\nDex - Ok\n");
        	sleep(3);
        	printf("\nNão demora muito e vocês chegam ao fim da enorme sala\n");
        	sleep(5);
        	printf("\nComo recompensa pela imensa batalha, uma escada foi liberada para vocês\n");
        	sleep(5);
        	printf("\nVocês sobem e deixam o local\n");
        	sleep(5);
        	printf("\nFASE 2 - FINALIZADA  //  Seu XP: %d\n", xp);
			sleep(7);
			printf("\nVocê subiu para o nível 3\n");
			sleep(5);
			printf("\nRecompensa: 4 martelos, 3 espadas, 2 escudos, 2 ultimates\n");
			martelo += 4;
			espada += 3;
			escudo += 2;
			ult += 2;
			sleep(7);
		}
		
		printf("\nSubindo as escadas, vocês começam a ficar aflitos com o que pode vir\n");
		sleep(5);
		printf("\nDex - Sei lá. De repente eu me senti um herói agora\n");
		sleep(5);
		printf("\nKiber - Pelo visto suas habilidades estão subindo a cabeça\n");
		sleep(5);
		printf("\nDex - KKkkkkkkkk. De qualquer forma, acredito muito que vamos conseguir\n");
		sleep(5);
		printf("\nKiber - Eu penso o mesmo\n");
		sleep(5);
		printf("\nDex - Então pensamos o mesmo\n");
		sleep(3);
		printf("\nA escadaria termina e vocês chegam em uma porta larga\n");
		sleep(5);
		
		for(int i = 1; i <= 100; i++)
		{
			printf("\nVocê está pronto para entrar?\n");
			printf("\n1 - Sim // 2 - Não\n");
			scanf("%d", &escolha);
			
			if(escolha == 1)
			{
				break;
			}else if(escolha == 2)
			{
				printf("\nKiber - Sei bem como se sente, mas precisamos continuar. Se não, tudo lá atrás terá sido em vão\n");
				sleep(5);
			}
		}
		
		printf("\nVocês abrem a porta e entram\n");
		sleep(3);
		printf("\nVocês se encontram em uma arena grande\n");
		sleep(3);
		printf("\nLuxuosa e com paleta amarela por todo lado\n");
		sleep(3);
		printf("\nAs luzes se acendem\n");
		sleep(3);
		printf("\n??? - Parabéns, vocês chegaram longe\n");
		sleep(3);
		printf("\nDex - Muito provavelmente ele que é o manda-chuva\n");
		sleep(3);
		printf("\n??? - Bingo! Exatamente\n");
		sleep(3);
		printf("??? - Me chamo Ophion\n");
		sleep(3);
		printf("\nEle estava de máscara, mas ele tira ela e revela seu rosto\n");
		sleep(5);
		printf("\nDex - Diretor Morgan??\n");
		sleep(3);
		printf("\nKiber - Mentira!!!\n");
		sleep(3);
		printf("\nOphion - Sim meninos, sou eu. Nossa faculdade teve êxito no projeto do tempo\n");
		sleep(5);
		printf("\nOphion - Pasmem, estamos no passado agora\n");
		sleep(3);
		printf("\nDex - Não pode ser. Como voltamos??\n");
		sleep(3);
		printf("\nOphion - Não voltarão a menos que eu permita. Vocês ainda serão úteis estando aqui\n");
		sleep(5);
		printf("\nOphion - Ah, e agradeçam ao seu colega Baku por isso\n");
		sleep(5);
		printf("\nOphion - O equívoco dele foi o sucesso do nosso projeto\n");
		sleep(5);
		printf("\nKiber - Parem com essa palhaçada agora mesmo! Tire a gente daqui!\n");
		sleep(5);
		printf("\nOphion - O negócio é o seguinte. Se querem voltar, vão ter que lutar entre si\n");
		sleep(5);
		printf("\nOphion - Quem vencer, volta pra casa\n");
		sleep(3);
		printf("\nVocê sente sua espinha gelar\n");
		sleep(3);
		printf("\nOphion - É o único jeito\n");
		sleep(3);
		printf("\nO que você vai fazer?\n");
		printf("\n1 - Lutar contra Kiber // 2 - Não lutar\n");
		scanf("%d", &escolha);
		
		if(escolha == 1)
		{
			printf("\nDex - Desculpa por isso, Kiber\n");
			sleep(3);
			printf("\nKiber - Não entendi, Dex. Vai ser dessa forma?\n");
			sleep(5);
			printf("\nDex - Eu tenho que voltar pro meu tempo. Não posso deixar tudo pra trás\n");
			sleep(5);
			printf("\nKiber - Que ridículo. Sou obrigado a te encarar, então\n");
			sleep(5);
			printf("\nOphion - Hahahaha\n");
			sleep(3);
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Kiber\n\n");
        	hpEne = 35;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
            	if(hp[2] <= 0)
            	{
            		printf("\nVocê perdeu\n");
            		sleep(5);
                	printf("\nKiber - Uma pena te ver nesse estado, Dex\n");
                	sleep(3);
                	printf("\nKiber - Mas você me deixou sem escolhas\n");
                	sleep(3);
                	printf("\nKiber - Até mais\n");
                	sleep(3);
                	printf("\nSua visão fica turva, e você sucumbe\n");
                	sleep(5);
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
                	printf("\nKiber - O que deu em você, cara?\n");
                	sleep(3);
                	printf("\nKiber - Pensei que superaríamos isso juntos\n");
                	sleep(3);
                	printf("\nDex - Me desculpa, Kiber. Eu tô com muito medo\n");
                	sleep(5);
                	printf("\nKiber - Isso não é desculpa. Você me enoja!\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 15;
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
                    
                	if(sorte == 4)
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
        	
        	printf("\nOphion - Você derrotou mesmo seu amigo para se salvar. Que atitude traiçoeira, jovem Dex\n");
        	sleep(5);
        	printf("\nDex - Nunca vou te perdoar, diretor. NUNCA!\n");
        	sleep(5);
        	printf("\nOphion - Não fique estressado. Como prometido, irei encerrar sua viajem ao passado aqui mesmo\n");
        	sleep(5);
        	printf("\nO sabor dessa vitória deixa um gosto amargo em sua boca\n");
        	sleep(5);
        	printf("\nOphion aperta seu grande botão vermelho e o leva de volta a sua realidade, no presente\n");
        	sleep(5);
        	printf("\nDex - Sei que nunca me perdoarei pelo que fiz. Me salvei do perigo, mas me submeti a culpa eterna\n");
        	sleep(5);
        	printf("\nO aluno Dex não conseguiu suportar por muito tempo o fardo que decidiu carregar\n");
        	sleep(5);
		}else if(escolha == 2)
		{
			printf("\nDex - Claro que eu não vou aceitar isso\n");
			sleep(5);
			printf("\nOphion - Como?\n");
			sleep(3);
			printf("\nDex - Não é contra meu amigo que devo lutar. É contra você!!\n");
			sleep(5);
			printf("\nKiber - Diretor, você vai andar com duas muletas de agora em diante\n");
			sleep(5);
			printf("\nOphion - Hahaahhaha\n");
			sleep(3);
			printf("\nOphion - É tudo ou nada então\n");
			sleep(3);
			printf("\nVocê recebeu alguns itens de seu amigo\n");
			sleep(5);
			printf("\nOphion - Derrotem-me, se conseguirem\n");
			sleep(5);
			curaT += 3;
			espada += 3;
			escudo += 4;
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Ophion\n\n");
        	hpEne = 100;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
            	if(hp[2] <= 0)
            	{
                	printf("\nVocês perderam\n");
                	sleep(5);
                	printf("\nOphion - Bastava continuarem aqui. Uma pena que tentaram resistir\n");
                	sleep(5);
                	printf("\nKiber - Desculpa por tudo, Dex\n");
                	sleep(3);
                	printf("\nDex - Tá tudo bem. O que importa é que tentamos de tudo e não nos rendemos ao desespero\n");
                	sleep(5);
                	printf("\nKiber - Verdade. Não queria dizer adeus assim :(\n");
                	sleep(5);
                	printf("\nDex - Obrigado por estar do meu lado\n");
                	sleep(3);
                	printf("\nDex - Adeus\n");
                	sleep(5);
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
                	printf("\nDex - Kiber!! Use seus equipamentos reserva!\n");
                	sleep(5);
                	printf("\nKiber - É pra já!\n");
                	sleep(3);
                	printf("\nSeu amigo tirou bastante dano do inimigo\n");
                	hpEne = danoG(hpEne);
                	protecao = 1;
                	sleep(5);
                	printf("\nOphion - Vocês me pagam, malditos\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 30;
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
                    
                	if(sorte == 4)
                	{
                    	hp[2] = danoM(hp[2]);
                    	hp[2] -= 5;
                    	printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    	sleep(5);
                	}else
                	{
                    	hp[2] = danoG(hp[2]);
                    	printf("\nVocê foi atacado\n");
                    	sleep(5);
                	}
            	}
        	}
        	
        	printf("\nOphion - Impossível\n");
        	sleep(3);
        	printf("\nO comandante da operação do tempo foi derrotado\n");
        	sleep(5);
        	printf("\nAo cair no chão, ele derruba um grande botão vermelho\n");
        	sleep(5);
        	printf("\nDex - Chegou a hora\n");
        	sleep(3);
        	printf("\nKiber - Até nunca mais, chernobyl\n");
        	sleep(3);
        	printf("\nAntes de ir embora, vocês deixam registrado em um papel que seu diretor havia separado para anotar os resultados da pesquisa\n");
        	sleep(5);
        	printf("\n= Vejo você em meus sonhos =\n");
        	sleep(5);
		}                    
	}else if(avancar == 4){
		printf("\n12:30 - Saindo de Casa\n\n");
        sleep(1);
		printf("\nVocê vai pra faculdade e recebe uma ligação do seu amigo falando que o trânsito está congestionado.\n");
		sleep(5);
		printf("\nJax - Que saco, vou me atrasar pra faculdade porque ta tudo engarrafado, bacana (ironia).\n");
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
		printf("\nVocês abrem uma porta ao final do corredor e chegam numa sala\n");
		sleep(5);
		printf("\nOs primeiros segundos dentro da sala já são motivos de comentários\n");
		sleep(5);
		printf("\nJax - Maluco, que frio é esse??\n");
		sleep(3);
		printf("\nDex - Frozen, você está aí\n");
		sleep(3);
		printf("\nA neve nesse lugar enorme cai rápido, e vocês precisam andar de forma controlada para não escorregar\n");
		sleep(5);
		printf("\nJax - É muito difícil olhar ao redor. Vamos prosseguir estando próximos\n");
		sleep(5);
		printf("\nDex - Oolhaa, que fofo\n");
		sleep(3);
		printf("\nJax - Correção: Estratégico\n");
		sleep(3);
		printf("\nDex - Está muito frio. Vamos nos mexer para não congelar\n");
		sleep(5);
		printf("\nVocês andam seguindo em frente, prestando muita atenção\n");
		sleep(5);
		printf("\nJax - Medo chato de escorregar do nada\n");
		sleep(3);
		printf("\nDex - Percebi que esse piso é plano. Se avançarmos bem, podemos seguir escorregando\n");
		sleep(5);
		printf("\nJax - Eh, podemos tentar\n");
		sleep(3);
		printf("\nDito isso, vocês dois dão uma boa arrancada e seguem derrapando de forma veloz\n");
		sleep(5);
		printf("\nHá alguns obstáculos na frente. Como sua visão está comprometida, você tenta desviar a esmo\n");
		sleep(5);
		
		for(int i = 1; i <= 10; i++)
		{
			if(hp[3] <= 0)
			{
				printf("\nGAME OVER\n");
				sleep(7);
				return 0;
			}
			
			printf("\n\nO obstáculo %d se aproxima. Você escolhe desviar pra qual lado?\n", i);
			printf("\n1 -- Esquerda // 2 -- Direita\n");
			scanf("%d", &escolha);
			
			if(escolha == 1)
			{
				printf("\nVocê desviou para o lado ");
				sorte = dado();
				
				if(sorte == 1 || sorte == 2 || sorte == 3 || sorte == 4 || sorte == 5)
				{
					sleep(2);
					printf("certo!\n");
					xp += 2;
					sleep(2);
					printf("\nVocê avança com segurança\n");
					sleep(5);
				}else
				{
					sleep(2);
					printf("errado!\n");
					sleep(2);
					printf("\nVocê se machuca de leve\n");
					hp[3] = danoL(hp[3]);
					sleep(5);
				}
			}else if(escolha == 2)
			{
				printf("\nVocê desviou para o lado ");
				sorte = dado();
				
				if(sorte == 6 || sorte == 7 || sorte == 8 || sorte == 9 || sorte == 10)
				{
					sleep(2);
					printf("certo!\n");
					xp += 2;
					sleep(2);
					printf("\nVocê avança com segurança\n");
					sleep(5);
				}else
				{
					sleep(2);
					printf("errado!\n");
					sleep(2);
					printf("\nVocê se machuca de leve\n");
					hp[3] = danoL(hp[3]);
					sleep(5);
				}
			}
		}
		
		printf("\nFinalmente o trajeto plano e escorregadio termina\n");
		sleep(5);
		printf("\nVocês chegam num terreno de neve, seguros\n");
		sleep(5);
		printf("\nDex - Avançamos bem\n");
		sleep(3);
		printf("\nJax - Eh, mas tinha muito trambolho glacial no meio do trajeto. Isso foi perigoso\n");
		sleep(5);
		printf("\nDex - Mas foi divertido. E você tá bem\n");
		sleep(3);
		printf("\nJax - Hum...\n");
		sleep(3);
		printf("\nDex - Olha só aquele monte médio de neve. Vamos nos jogar com tudo ali\n");
		sleep(5);
		printf("\nJax - Ideiazinha de maluco a sua ein\n");
		sleep(3);
		printf("\nDex - Vamos lá cara, curte o momento um pouco\n");
		sleep(5);
		printf("\nO que vai fazer?\n");
		printf("\n1 - Se jogar com Dex // 2 - Não se render a loucura\n");
		scanf("%d", &escolha);
		
		if(escolha == 1)
		{
			printf("\nJax - Não sei porque estou aceitando isso. Só vamos logo\n");
			sleep(5);
			printf("\nDex - Uhuuuu, aí sim!!\n");
			sleep(3);
			printf("\nVocês se lançam com tudo no monte de neve\n");
			sleep(5);
			printf("\nVocês se divertem e dão risada, aliviando a tensão\n");
			sleep(5);
			printf("\nJax - Hahahaha, isso foi daora\n");
			sleep(3);
			printf("\nJax - Opa, acabei pisando em algo\n");
			sleep(3);
			printf("\nVocê segura o objeto e traz pra si\n");
			sleep(5);
			printf("\nVocê obteve uma poção grande\n");
			curaT += 1;
			sleep(5);
			xp += 3;
			printf("\nJax - Olha o que eu acheeii\n");
			sleep(2);
			printf("\nDex - Você também? Massa, que sorte\n");
			sleep(3);
		}else if(escolha == 2)
		{
			printf("\nJax - Eu dispenso. Mas fique à vontade pra fazer o que quiser\n");
			sleep(5);
			printf("\nDex - Hmm, ok então\n");
			sleep(3);
			printf("\nVocê observa seu amigo se divertindo em meio a neve\n");
			sleep(5);
		}
		
		printf("\nJax - Ok, vamos continuar\n");
		sleep(3);
		printf("\n??? - Ora, ora, ora. Se não são as cobaias perdidas\n");
		sleep(5);
		printf("\nDex - Hãn?\n");
		sleep(2);
		printf("\nJax - Que susto. Quem é você? E que papo é esse de cobaias?\n");
		sleep(5);
		printf("\n??? - Me chamo Onalina, e vim verificar vocês\n");
		sleep(5);
		printf("\nDex - Então você é a responsável por nos prender aqui?\n");
		sleep(5);
		printf("\nOnalina - Não\n");
		sleep(3);
		printf("\nJax - Então...\n");
		sleep(3);
		printf("\nJax - O que raios você faz aqui?\n");
		sleep(3);
		printf("\nOnalina - Vim pra...\n");
		sleep(5);
		printf("\nOnalina - verificar vocês\n");
		sleep(3);
		printf("\nDe repente, a mulher suspende vocês dois com força e os arremesa para o piso plano e escorregadio\n");
		sleep(5);
		printf("\nJax - Aii!\n");
		sleep(2);
		printf("\nDex - Uuii!\n");
		sleep(2);
		printf("\nOnalina - Vamos dançar. E testar as vossas verificações\n");
		sleep(5);
		printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: Onalina\n\n");
        hpEne = 45;
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
                	sorte = dado();
                	
                	if(sorte == 5 || sorte == 8)
                	{
                		printf("\nO inimigo desviou do seu ataque\n");
                		sleep(5);
					}else
                    {
                    	hpEne = danoL(hpEne);
                    	hpEne -= 4;
                    	printf("\nO inimigo levou um dano considerável\n");
                    	sleep(5);
					}
                }else if(escolha == 2)
                {
                    if(martelo == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                    	sorte = dado();
                    	
                    	if(sorte == 5)
                    	{
                    		printf("\nO inimigo desviou do seu ataque\n");
                    		sleep(5);
						}else
						{
							hpEne = danoM(hpEne);
                        	hpEne -= 4;
                        	martelo -= 1;
                        	printf("\nDale marretada nele!!\n");
                        	sleep(5);
						}
                    }
                }else if(escolha == 3)
                {
                    if(espada == 0)
                    {
                        printf("\nVocê não possui esse item!\n");
                        sleep(2);
                    }else
                    {
                    	sorte = dado();
                    	
                    	if(sorte == 5 || sorte == 8)
                    	{
                    		printf("\nO inimigo desviou do seu ataque\n");
                    		sleep(5);
						}else
						{
							hpEne = danoM(hpEne);
                        	hpEne -= 4;
                        	espada -= 1;
                        	printf("\nUma bela execução no manejo de espada\n");
                        	sleep(5);
						}
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
                printf("\nJax - Tá muito difícil ficar em pé!\n");
                sleep(3);
                printf("\nDex - Tenta mexer menos os pés. Ataque com isso\n");
                sleep(5);
                printf("\nVocê recebeu uma espada\n");
                espada += 1;
                sleep(5);
                printf("\nJax - Valeu, Dex. Mas não vou ficar te devendo\n");
                sleep(5);
                printf("\nDex - haha\n");
                sleep(2);
                printf("\nOnalina - Receba minha investida com tremenda performance\n");
                sleep(5);
                break;
            }
                
            if(hpEne <= 0)
            {
                xp += 9;
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
                    hp[3] = danoG(hp[3]);
                    hp[3] -= 5;
                    printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    sleep(5);
                }else
                {
                    hp[3] = danoM(hp[3]);
                    printf("\nVocê foi atacado\n");
                    sleep(5);
                }
            }
        }
        
        printf("\nOnalina - Fracassei...\n");
        sleep(3);
        printf("\nJax - Exato. Agora vê se nos deixa em paz\n");
        sleep(5);
        printf("\nOnalina - Talvez ele esteja errado sobre vocês. Algo não esperado aconteceu\n");
        sleep(5);
        printf("\nDex - Como assim, moça? Não entendemos nada\n");
        sleep(5);
        printf("\nJax - Desembucha logo!!\n");
        sleep(3);
        printf("\nOnalina - Boa sorte\n");
        sleep(3);
        printf("\nSem dizer mais nada, ela some na neblina\n");
        sleep(5);
        printf("\nJax - O que ta rolando aqui?\n");
        sleep(3);
        printf("\nDex - É um mistério...\n");
        sleep(3);
        printf("\nUm caminho iluminado começa a se formar no chão, guiando vocês\n");
        sleep(5);
        printf("\nSeguindo ele, vocês chegam ao extremo oposto de onde entraram\n");
        sleep(5);
        printf("\nUma escada para cima é revelada a vocês\n");
        sleep(5);
        printf("\nDex - Eai? Pronto?\n");
        sleep(3);
        printf("\nJax - É agora ou nunca. Sem recuar nessa altura do campeonato\n");
        sleep(5);
        printf("\nDex - Tô contigo\n");
        sleep(5);
        printf("\nFASE 2 - FINALIZADA  //  Seu XP: %d\n", xp);
		sleep(7);
		printf("\nVocê subiu para o nível 3\n");
		sleep(5);
		printf("\nRecompensa: 4 martelos, 3 espadas, 2 escudos, 2 ultimates\n");
		martelo += 4;
		espada += 3;
		escudo += 2;
		ult += 2;
		sleep(7);
		printf("\nSubindo as escadas, vocês começam a ficar aflitos com o que pode vir\n");
		sleep(5);
		printf("\nJax - Estou tão leve e me sentindo muito bem. Mesmo tendo que olhar pra você\n");
		sleep(5);
		printf("\nDex - Minha presença sempre causou isso. Você só não sabia\n");
		sleep(5);
		printf("\nJax - Seisei\n");
		sleep(5);
		printf("\nDex - Devemos estar perto de chegar\n");
		sleep(5);
		printf("\nJax - Sim\n");
		sleep(3);
		printf("\nA escadaria termina e vocês chegam em uma porta larga\n");
		sleep(5);
		
		for(int i = 1; i <= 100; i++)
		{
			printf("\nVocê está pronto para entrar?\n");
			printf("\n1 - Sim // 2 - Não\n");
			scanf("%d", &escolha);
			
			if(escolha == 1)
			{
				break;
			}else if(escolha == 2)
			{
				printf("\nDex - Todo medroso você ein. Vamos lá, vamos conseguir bater de frente com qualquer um. Acredite\n");
				sleep(5);
			}
		}
		
		printf("\nVocês abrem a porta e entram\n");
		sleep(3);
		printf("\nVocês se encontram em uma arena grande\n");
		sleep(3);
		printf("\nLuxuosa e com paleta amarela por todo lado\n");
		sleep(3);
		printf("\nAs luzes se acendem\n");
		sleep(3);
		printf("\n??? - Parabéns, vocês chegaram longe\n");
		sleep(3);
		printf("\nJax - Não me diga que você é o responsável dessa bagaça?\n");
		sleep(3);
		printf("\n??? - Bingo! Exatamente\n");
		sleep(3);
		printf("??? - Me chamo Ophion\n");
		sleep(3);
		printf("\nEle estava de máscara, mas ele tira ela e revela seu rosto\n");
		sleep(5);
		printf("\nJax - Diretor Morgan??\n");
		sleep(3);
		printf("\nDex - Mentira!!!\n");
		sleep(3);
		printf("\nOphion - Sim meninos, sou eu. Nossa faculdade teve êxito no projeto do tempo\n");
		sleep(5);
		printf("\nOphion - Pasmem, estamos no passado agora\n");
		sleep(3);
		printf("\nJax - Não pode ser. Como voltamos??\n");
		sleep(3);
		printf("\nOphion - Não voltarão a menos que eu permita. Vocês ainda serão úteis estando aqui\n");
		sleep(5);
		printf("\nOphion - Ah, e agradeçam ao seu colega Baku por isso\n");
		sleep(5);
		printf("\nOphion - O equívoco dele foi o sucesso do nosso projeto\n");
		sleep(5);
		printf("\nDex - Parem com essa palhaçada agora mesmo! Tire a gente daqui!\n");
		sleep(5);
		printf("\nOphion - O negócio é o seguinte. Se querem voltar, vão ter que lutar entre si\n");
		sleep(5);
		printf("\nOphion - Quem vencer, volta pra casa\n");
		sleep(3);
		printf("\nVocê sente sua espinha gelar\n");
		sleep(3);
		printf("\nOphion - É o único jeito\n");
		sleep(3);
		printf("\nO que você vai fazer?\n");
		printf("\n1 - Lutar contra Dex // 2 - Não lutar\n");
		scanf("%d", &escolha);
		
		if(escolha == 1)
		{
			printf("\nJax - Desculpa por isso, Dex\n");
			sleep(3);
			printf("\nDex - Quê? Pirou de vez, foi??\n");
			sleep(5);
			printf("\nJax - Eu tenho que voltar pro meu tempo. Não posso deixar tudo pra trás\n");
			sleep(5);
			printf("\nDex - Você comeu cocô, só pode. Vai se arrepender de ter decidido isso\n");
			sleep(5);
			printf("\nOphion - Hahahaha\n");
			sleep(3);
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Dex\n\n");
        	hpEne = 40;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
            	if(hp[3] <= 0)
            	{
            		printf("\nVocê perdeu\n");
            		sleep(5);
                	printf("\nDex - Uma pena te ver nesse estado, Jax\n");
                	sleep(3);
                	printf("\nDex - Mas você me deixou sem escolhas\n");
                	sleep(3);
                	printf("\nDex - Até mais\n");
                	sleep(3);
                	printf("\nSua visão fica turva, e você sucumbe\n");
                	sleep(5);
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
                	printf("\nDex - O que deu em você, cara?\n");
                	sleep(3);
                	printf("\nDex - Pensei que superaríamos isso juntos\n");
                	sleep(3);
                	printf("\nJax - Me desculpa, Dex. Eu tô com muito medo\n");
                	sleep(5);
                	printf("\nDex - Isso não é desculpa. Você me enoja!\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 15;
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
                    
                	if(sorte == 4)
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
        	
        	printf("\nOphion - Você derrotou mesmo seu amigo para se salvar. Que atitude traiçoeira, jovem Jax\n");
        	sleep(5);
        	printf("\nJax - Nunca vou te perdoar, diretor. NUNCA!\n");
        	sleep(5);
        	printf("\nOphion - Não fique estressado. Como prometido, irei encerrar sua viajem ao passado aqui mesmo\n");
        	sleep(5);
        	printf("\nO sabor dessa vitória deixa um gosto amargo em sua boca\n");
        	sleep(5);
        	printf("\nOphion aperta seu grande botão vermelho e o leva de volta a sua realidade, no presente\n");
        	sleep(5);
        	printf("\nJax - Sei que nunca me perdoarei pelo que fiz. Me salvei do perigo, mas me submeti a culpa eterna\n");
        	sleep(5);
        	printf("\nO aluno Jax não conseguiu suportar por muito tempo o fardo que decidiu carregar\n");
        	sleep(5);
		}else if(escolha == 2)
		{
			printf("\nJax - Claro que eu não vou aceitar isso\n");
			sleep(5);
			printf("\nOphion - Como?\n");
			sleep(3);
			printf("\nJax - Não é contra meu amigo que devo lutar. É contra você!!\n");
			sleep(5);
			printf("\nDex - Diretor, você deu uma de maluco. Mas nós somos donos do hospício!!\n");
			sleep(5);
			printf("\nOphion - Hahaahhaha\n");
			sleep(3);
			printf("\nOphion - É tudo ou nada então\n");
			sleep(3);
			printf("\nVocê recebeu alguns itens de seu amigo\n");
			sleep(5);
			printf("\nOphion - Derrotem-me, se conseguirem\n");
			sleep(5);
			curaT += 3;
			espada += 3;
			escudo += 4;
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Ophion\n\n");
        	hpEne = 100;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
            	if(hp[3] <= 0)
            	{
                	printf("\nVocês perderam\n");
                	sleep(5);
                	printf("\nOphion - Bastava continuarem aqui. Uma pena que tentaram resistir\n");
                	sleep(5);
                	printf("\nDex - Desculpa por tudo, Jax\n");
                	sleep(3);
                	printf("\nJax - Tá tudo bem. O que importa é que tentamos de tudo e não nos rendemos ao desespero\n");
                	sleep(5);
                	printf("\nDex - Verdade. Não queria dizer adeus assim :(\n");
                	sleep(5);
                	printf("\nJax - Obrigado por estar do meu lado\n");
                	sleep(3);
                	printf("\nJax - Adeus\n");
                	sleep(5);
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
                	printf("\nJax - Dex!! Ataque por trás dele!\n");
                	sleep(5);
                	printf("\nDex - Eu não recebo ordens suas!\n");
                	sleep(3);
                	printf("\nSeu amigo tirou bastante dano do inimigo\n");
                	hpEne = danoG(hpEne);
                	sleep(5);
                	printf("\nOphion - Vocês me pagam, malditos\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 30;
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
                    
                	if(sorte == 4)
                	{
                    	hp[3] = danoM(hp[3]);
                    	hp[3] -= 5;
                    	printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    	sleep(5);
                	}else
                	{
                    	hp[3] = danoG(hp[3]);
                    	printf("\nVocê foi atacado\n");
                    	sleep(5);
                	}
            	}
        	}
        	
        	printf("\nOphion - Impossível\n");
        	sleep(3);
        	printf("\nO comandante da operação do tempo foi derrotado\n");
        	sleep(5);
        	printf("\nAo cair no chão, ele derruba um grande botão vermelho\n");
        	sleep(5);
        	printf("\nJax - Chegou a hora\n");
        	sleep(3);
        	printf("\nDex - Até nunca mais, prisão da peste\n");
        	sleep(3);
        	printf("\nAntes de ir embora, vocês deixam registrado em um papel que seu diretor havia separado para anotar os resultados da pesquisa\n");
        	sleep(5);
        	printf("\n= Vejo você em meus sonhos =\n");
        	sleep(5);
		}
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
		printf("\nM'Baku - Sai daqui!\n");
		sleep(3);
		printf("\nTom - Relaxe, Baku. Eu tô aqui\n");
		sleep(3);
		printf("\nVocê fica mais calmo ao ver seu amigo\n");
		sleep(5);
		printf("\nM'Baku - Tom?? Ai, que bom te ver, cara\n");
		sleep(3);
		printf("\nTom - Você está se sentindo bem?\n");
		sleep(3);
		printf("\nM'Baku - Só um pouco de dor de cabeça, mas tô me sentindo melhor\n");
		sleep(5);
		printf("\nTom - Ainda bem. Não sei que lugar é esse, mas vamos tentar sair daqui logo\n");
		sleep(5);
		printf("\nM'Baku - Verdade. Aliás, de onde você veio?\n");
		sleep(3);
		printf("\nTom - Daquela sala ali. Assim que ouvi um barulho, vim pra cá verificar\n");
		sleep(5);
		printf("\nM'Baku - Ok. Vamos pra lá então\n");
		sleep(3);
		printf("\nVocês saem por outra porta que estava no local, a qual Tom veio\n");
		sleep(5);
		printf("\nChegando lá, vocês veem várias bolhas flutuando, várias delas espalhadas pela sala\n");
		sleep(5);
		printf("\nTom - Que estranho. Não tava assim quando eu tava aqui\n");
		sleep(5);
		printf("\nM'baku - Alguém espalhou sabão enquanto você tava fora?\n");
		sleep(5);
		printf("\nTom - Mas isso nem faz sentido\n");
		sleep(3);
		printf("\n??? - Na verdade, até que faz sim\n");
		sleep(3);
		printf("\nM'Baku - Quem é você??\n");
		sleep(3);
		printf("\n??? - Apenas um lacaio, caçando as cobais\n");
		sleep(3);
		printf("\nTom - E as cobaias somos nós?\n");
		sleep(3);
		printf("\n??? - Exatamente\n");
		sleep(3);
		printf("\nM'Baku - Alguém chama a polícia!\n");
		sleep(5);
		printf("\n\n|| BATTLE ||\n");
        printf("\nInimigo: Bubble\n\n");
        hpEne = 35;
        sleep(2);
            
        for(int i = 1; i <= 100; i++)
        {
            if(hp[4] <= 0)
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
                        printf("\nVocê repele projéteis fragmentados das suas mãos, que atingem o inimigo contra a parede\n");
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
                        hp[4] = curaTot(hp[4]);
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
                        hp[4] = curaMed(hp[4]);
                        curaM -= 1;
                        printf("\nVocê se sente um pouco melhor\n");
                        sleep(5);
                    }
                }
                break;
                    
                case 3:
                printf("\nBubble - Pare de tentar abrir a porta, isso não é possível\n");
                sleep(5);
                printf("\nM'Baku - Eu já sabia. Tava só testando você\n");
                sleep(5);
                printf("\nTom - ...\n");
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
                printf("\nSeu HP atual: %d\n", hp[4]);
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
                
                if(sorte == 5)
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
                    hp[4] = danoL(hp[4]);
                    hp[4] -= 5;
                    printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    sleep(5);
                }else
                {
                    hp[4] = danoL(hp[4]);
                    printf("\nVocê foi atacado\n");
                    sleep(5);
                }
            }
        }
        
        printf("\nM'Baku - Pocamos essa grande bolha\n");
        sleep(3);
        printf("\nTom - Conseguimos\n");
        sleep(3);
        printf("\nM'Baku - Olha, Tom. A porta abriu pra gente\n");
        sleep(5);
        printf("\nTom - Eles liberaram assim que derrotamos ele. Acredito que ainda vamos encontrar outros\n");
        sleep(5);
        printf("\nM'Baku - Tem razão. Bom, vamos sair dessa sala\n");
        sleep(5);
        printf("\nVocês passam pela porta e entram num corredor\n");
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
        printf("\nO corredor é extenso. Vocês continuam andando, sem nenhum sinal de vida\n");
        sleep(5);
        printf("\nM'Baku - Tamo andando demais, não?\n");
        sleep(5);
        printf("\nTom - E esse silêncio também não tá ajudando\n");
        sleep(5);
        printf("\nM'Baku - Eh. Eai, Tom. Como vai os assuntos da faculdade?\n");
        sleep(5);
        printf("\nTom - Deixa baixo\n");
        sleep(3);
        printf("\nM'Baku - Tá ruim assim? Não deve estar pior que eu\n");
        sleep(5);
        printf("\nTom - E seus experimentos?\n");
        sleep(3);
        printf("\nM'Baku - Bem, eu...\n");
        sleep(3);
        printf("\nO chão de repente começa a se comportar de forma estranha\n");
        sleep(5);
        printf("\nVocês sentem tremular, e fica difícil ficar de pé\n");
        sleep(5);
        printf("\nTom - Que doidera é essa?\n");
        sleep(3);
        printf("\nM'Baku - Eu tô maluco ou chão realmente tá ondulando?\n");
        sleep(5);
        printf("\nTom - Tome cuidado!\n");
        sleep(3);
        printf("\nO que era calmaria virou um caos\n");
        sleep(5);
        printf("\nVocês se dedicam em correr sempre que o chão se torna levemente plano\n");
        sleep(5);
        printf("\nO que é díficil, visto que as tremulências são frequentes\n");
        
        for(int i = 1; i <= 10; i++)
        {
            if(hp[4] <= 0)
            {
                printf("\nGAME OVER\n");
                sleep(7);
                return 0;
            }
            
            printf("\n\nVocês esperam um pouco e avançam. Essa tentativa é ");
            sorte = dado();
            
            if(sorte == 5)
            {
                sleep(2);
                printf("um fracasso\n");
                sleep(2);
                hp[4] = danoM(hp[4]);
                printf("\nVocê levou um baita tombão na subida do chão\n");
                sleep(5);
            }else
            {
                sleep(2);
                printf("um sucesso\n");
                sleep(2);
                printf("\nVocê consegue avançar desesperadamente\n");
                sleep(5);
            }
        }
        
        printf("\nVocês escapam por um fio\n");
        sleep(3);
        printf("\nO corredor termina e vocês se deparam com uma porta\n");
        sleep(5);
        printf("\nM'Baku - Belezaa, vamos abrir\n");
        sleep(3);
        printf("\nTom - Calma, Baku. Não vamos nos precipitar\n");
        sleep(5);
        printf("\nTom - Não sabemos o que tem aí atrás\n");
        sleep(3);
        printf("\nM'Baku - E o que vamos fazer então?\n");
        sleep(5);
        printf("\nTom - Vamos abrir sem aparecer em frente a porta. Nos esconderemos atrás\n");
        sleep(5);
        printf("\nM'Baku - Certo, certo\n");
        sleep(3);
        printf("\nDito isso, vocês abrem e logo se desviam para o lado\n");
        sleep(5);
        printf("\nEntretanto, nada de diferente acontece\n");
        sleep(5);
        printf("\nTom - Bom, uma pessoa precavida vale por duas\n");
        sleep(5);
        printf("\nVocês entram mas não enxergam nada. Está tudo escuro\n");
        sleep(5);
        printf("\nM'Baku - Que breu retado. E agora?\n");
        sleep(3);
        printf("\nTom - Vamos ficar juntos e andar aos poucos\n");
        sleep(5);
        printf("\nVocês caminham hesitando\n");
        sleep(3);
        printf("\nDepois de alguns segundos, as luzes acendem\n");
        sleep(5);
        printf("\nAo redor, uma multidão de seres vivos começam a aplaudir. As luzes piscam coloridas\n");
        sleep(5);
        printf("\nVocês estão em um ambiente de Ringue, e uma apresentadora aparece para vocês\n");
        sleep(5);
        printf("\n??? - Sejam muuitoo bem-vindos, cobaias!!\n");
        sleep(5);
        printf("\nM'Baku - QUE SUSTOOOO\n");
        sleep(3);
        printf("\nTom - De novo esse negócio de cobaias?\n");
        sleep(5);
        printf("\n??? - É o dia de sorte de vocês! Estão mais do que convidados a participar de um X1\n");
        sleep(5);
        printf("\nM'Baku - A gente passa\n");
        sleep(3);
        printf("\n??? - Esse é o ponto, vocês NÃO TEM OPÇÃO. Que comecem os preparativos!!\n");
        sleep(5);
        printf("\nUma mão enorme te puxa para cima do ringue\n");
        sleep(5);
        printf("\n??? - Me chamo Norua, e esse é mais um D1RECTX\n");
        sleep(5);
        printf("\nPúblico - =APLAUSOS=\n");
        sleep(3);
        printf("\nNorua - Muito bem, M'Baku. Escolha dentre essas três caixas a de sua preferência\n\n");
        sleep(5);
        printf("\n1 - Primeira // 2 - Segunda // 3 - Terceira\n");
        scanf("%d", &escolha);
        
        switch(escolha)
        {
            case 1:
            sorte = dado();
            
            if(sorte == 5)
            {
                printf("\nNorua - E você ganhou ");
                sleep(2);
                printf("nada!\n");
                sleep(2);
            }else
            {
                printf("\nNorua - E você ganhou ");
                sleep(2);
                printf("uma ultimate e uma poção grande!\n");
                sleep(2);
                xp += 3;
                ult += 1;
                curaT += 1;
            }
            break;
            
            case 2:
            sorte = dado();
            
            if(sorte == 5)
            {
                printf("\nNorua - E você ganhou ");
                sleep(2);
                printf("nada!\n");
                sleep(2);
            }else
            {
                printf("\nNorua - E você ganhou ");
                sleep(2);
                printf("3 poções leves e um martelo!\n");
                sleep(2);
                xp += 3;
                curaM += 3;
                martelo += 1;
            }
            break;
            
            case 3:
            sorte = dado();
            
            if(sorte == 5)
            {
                printf("\nNorua - E você ganhou ");
                sleep(2);
                printf("nada!\n");
                sleep(2);
            }else
            {
                printf("\nNorua - E você ganhou ");
                sleep(2);
                printf("2 espadas e 2 escudos!\n");
                sleep(2);
                xp += 3;
                espada += 2;
                escudo += 2;
            }
            break;
        }
        
        printf("\nTom - Tome cuidado, Baku\n");
        sleep(3);
        printf("\nM'Baku - Beleza. Eu consigo eu consigo\n");
        sleep(5);
        printf("\nNorua - Okay! É hora de escolher seu oponente\n");
        sleep(5);
        printf("\nTrês oponentes aparecem diante de você\n");
        sleep(5);
        printf("\nQuem você vai enfrentar?\n");
        printf("\n1 - Lugg // 2 - Riska // 3 - Foup\n");
        scanf("%d", &escolha);
        
        if(escolha == 1)
        {
            printf("\nNorua - Ótima escolha. Que o jogo comece!\n");
            sleep(5);
            printf("\n\n|| BATTLE ||\n");
            printf("\nInimigo: Lugg\n\n");
            hpEne = 60;
            sleep(2);
            
            for(int i = 1; i <= 100; i++)
            {
                if(redencao == 1)
                {
                    printf("\nO envenenamento te afeta gradativamente\n");
                    hp[4] = danoL(hp[4]);
                    sleep(5);
                }
                    
                if(hp[4] <= 0)
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
                            printf("\nVocê repele projéteis fragmentados das suas mãos, que atingem o inimigo contra a parede\n");
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
                            hp[4] = curaTot(hp[4]);
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
                            hp[4] = curaMed(hp[4]);
                            curaM -= 1;
                            printf("\nVocê se sente um pouco melhor\n");
                            sleep(5);
                        }
                    }
                    break;
                    
                    case 3:
                    printf("\nLugg - Minha camada espessa irá te cobrir\n");
                    sleep(5);
                    printf("\nM'Baku - Quem descobriu seu talento, que cubra de novo\n");
                    sleep(5);
                    printf("\nPúblico - AHAHAHAHAHAHAHAHAHA\n");
                    sleep(3);
                    printf("\nNorua - Essa vai pro livro\n");
                    sleep(5);
                    break;
                }
                
                if(hpEne <= 0)
                {
                    xp += 10;
                    printf("\nO inimigo foi derrotado!!\n");
                    sleep(5);
                    printf("\nVITÓRIA\n");
                    sleep(5);
                    printf("\nSeu HP atual: %d\n", hp[4]);
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
                
                    if(sorte == 5)
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
                    
                    if(sorte == 2)
                    {
                        hp[4] = danoM(hp[4]);
                        hp[4] -= 5;
                        printf("\nVocê foi atacado. DANO CRÍTICO\n");
                        sleep(5);
                    }else
                    {
                        hp[4] = danoL(hp[4]);
                        printf("\nVocê foi atacado\n");
                        sleep(5);
                        sorte = dado();
                        
                        if(sorte == 5)
                        {
                            printf("\nO ataque do inimigo te envenenou!\n");
                            redencao = 1;
                            sleep(5);
                        }    
                    }
                }
            }    
        }else if(escolha == 2)
        {
            printf("\nNorua - Muito bem escolhido. Hora do espetáculo!\n");
            sleep(5);
            printf("\n\n|| BATTLE ||\n");
            printf("\nInimigo: Riska\n\n");
            hpEne = 55;
            sleep(2);
            
            for(int i = 1; i <= 100; i++)
            {
                if(hp[4] <= 0)
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
                            printf("\nVocê repele projéteis fragmentados das suas mãos, que atingem o inimigo contra a parede\n");
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
                            hp[4] = curaTot(hp[4]);
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
                            hp[4] = curaMed(hp[4]);
                            curaM -= 1;
                            printf("\nVocê se sente um pouco melhor\n");
                            sleep(5);
                        }
                    }
                    break;
                    
                    case 3:
                    printf("\nM'Baku - Seguinte. Se eu vencer, você me paga uma Pepsi\n");
                    sleep(5);
                    printf("\nRiska - O que é Pepsi?\n");
                    sleep(3);
                    printf("\nM'Baku - Ue\n");
                    sleep(3);
                    printf("\nNorua - Esse Baku é uma graça\n");
                    sleep(5);
                    break;
                }
                
                if(hpEne <= 0)
                {
                    xp += 10;
                    printf("\nO inimigo foi derrotado!!\n");
                    sleep(5);
                    printf("\nVITÓRIA\n");
                    sleep(5);
                    printf("\nSeu HP atual: %d\n", hp[4]);
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
                
                    if(sorte == 5)
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
                    
                    if(sorte == 2)
                    {
                        hp[4] = danoL(hp[4]);
                        hp[4] -= 5;
                        printf("\nVocê foi atacado. DANO CRÍTICO\n");
                        sleep(5);
                    }else
                    {
                        hp[4] = danoM(hp[4]);
                        printf("\nVocê foi atacado\n");
                        sleep(5);
                    }
                }
            }
        }else if(escolha == 3)
        {
        	printf("\nNorua - Escolha interessante. Vamos para o mais esperado duelo!\n");
        	sleep(5);
        	printf("\n\n|| BATTLE ||\n");
            printf("\nInimigo: Foup\n\n");
            hpEne = 70;
            sleep(2);
            
            for(int i = 1; i <= 100; i++)
            {
                if(hp[4] <= 0)
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
                            printf("\nVocê repele projéteis fragmentados das suas mãos, que atingem o inimigo contra a parede\n");
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
                            hp[4] = curaTot(hp[4]);
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
                            hp[4] = curaMed(hp[4]);
                            curaM -= 1;
                            printf("\nVocê se sente um pouco melhor\n");
                            sleep(5);
                        }
                    }
                    break;
                    
                    case 3:
                    printf("\nFoup - zzzzzzz\n");
                    sleep(3);
                    printf("\nM'Baku - O cara vai ficar dormindo mesmo\n");
                    sleep(5);
                    printf("\nNorua - Parece que Foup não está muito disposto hoje\n");
                    sleep(5);
                    break;
                }
                
                if(hpEne <= 0)
                {
                    xp += 10;
                    printf("\nO inimigo foi derrotado!!\n");
                    sleep(5);
                    printf("\nVITÓRIA\n");
                    sleep(5);
                    printf("\nSeu HP atual: %d\n", hp[4]);
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
                
                    if(sorte == 5)
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
                    
                    if(sorte == 3 || sorte == 9)
                    {
                    	sorte = dado();
                    
                    	if(sorte == 2)
                    	{
                        	hp[4] = danoG(hp[4]);
                        	hp[4] -= 5;
                        	printf("\nVocê foi atacado. DANO CRÍTICO\n");
                        	sleep(5);
                    	}else
                    	{
                        	hp[4] = danoG(hp[4]);
                        	printf("\nVocê foi atacado\n");
                        	sleep(5);
                    	}
					}else
					{
						printf("\nO inimigo está bem sonolento para atacar\n");
						sleep(5);
					}
                }
            }
		}
		
		printf("\nPúblico - ==APLAUSOS==\n");
		sleep(5);
		printf("\nNorua - Parabéns, senhor M'Baku. Você derrotou seu oponente, podendo seguir seu caminho\n");
		sleep(5);
		printf("\nO público ao seu redor some e as luzes diminuem\n");
		sleep(5);
		printf("\nNorua - M'Baku e Tom, prossigam. Obrigado por fazerem parte desse momento. Tchauzinho\n");
		sleep(5);
		printf("\nUma mão gigante segura vocês dois, subindo para o topo\n");
		sleep(5);
		printf("\nTom - Mandou bem, mano\n");
		sleep(3);
		printf("\nM'Baku - Valeu. Pena que você não participou\n");
		sleep(5);
		printf("\nTom - Ainda bem que não participei. Tô tranquilo\n");
		sleep(5);
		printf("\nFASE 2 - FINALIZADA  //  Seu XP: %d\n", xp);
		sleep(7);
		printf("\nVocê subiu para o nível 3\n");
		sleep(5);
		printf("\nRecompensa: 4 martelos, 3 espadas, 2 escudos, 2 ultimates\n");
		martelo += 4;
		espada += 3;
		escudo += 2;
		ult += 2;
		sleep(7);
		printf("\nSubindo até o andar seguinte, vocês começam a ficar aflitos com o que pode vir\n");
		sleep(5);
		printf("\nM'Baku - Eu fui bem mesmo lá embaixo?\n");
		sleep(5);
		printf("\nTom - Claro que foi. Sua vitória foi espetacular\n");
		sleep(5);
		printf("\nM'Baku - Às vezes eu não confio muito em mim\n");
		sleep(5);
		printf("\nTom - Sua vitória já fala por si só\n");
		sleep(5);
		printf("\nM'Baku - Acho que sim. Não paramos de subir, né?\n");
		sleep(3);
		printf("\nVocês chegam e dão de frente a uma porta larga\n");
		sleep(5);
		
		for(int i = 1; i <= 100; i++)
		{
			printf("\nVocê está pronto para entrar?\n");
			printf("\n1 - Sim // 2 - Não\n");
			scanf("%d", &escolha);
			
			if(escolha == 1)
			{
				break;
			}else if(escolha == 2)
			{
				printf("\nTom - Se você não aguentar, eu tô aqui pra te ajudar. Vamos abrir com confiança\n");
				sleep(5);
			}
		}
		
		printf("\nVocês abrem a porta e entram\n");
		sleep(3);
		printf("\nVocês se encontram em uma arena grande\n");
		sleep(3);
		printf("\nLuxuosa e com paleta amarela por todo lado\n");
		sleep(3);
		printf("\nAs luzes se acendem\n");
		sleep(3);
		printf("\n??? - Parabéns, vocês chegaram longe\n");
		sleep(3);
		printf("\nM'Baku - Quem você pensa que é? O boss final?\n");
		sleep(3);
		printf("\n??? - Bingo! Exatamente\n");
		sleep(3);
		printf("??? - Me chamo Ophion\n");
		sleep(3);
		printf("\nEle estava de máscara, mas ele tira ela e revela seu rosto\n");
		sleep(5);
		printf("\nM'Baku - Diretor Morgan??\n");
		sleep(3);
		printf("\nTom - Mentira!!!\n");
		sleep(3);
		printf("\nOphion - Sim meninos, sou eu. Nossa faculdade teve êxito no projeto do tempo\n");
		sleep(5);
		printf("\nOphion - Pasmem, estamos no passado agora\n");
		sleep(3);
		printf("\nM'Baku - Não pode ser. Como voltamos??\n");
		sleep(3);
		printf("\nOphion - Não voltarão a menos que eu permita. Vocês ainda serão úteis estando aqui\n");
		sleep(5);
		printf("\nOphion - Ah, e agradeço muito a você, Baku, por isso\n");
		sleep(5);
		printf("\nOphion - O seu equívoco lá atrás foi o sucesso do nosso projeto\n");
		sleep(5);
		printf("\nTom - Parem com essa palhaçada agora mesmo! Tire a gente daqui!\n");
		sleep(5);
		printf("\nOphion - O negócio é o seguinte. Se querem voltar, vão ter que lutar entre si\n");
		sleep(5);
		printf("\nOphion - Quem vencer, volta pra casa\n");
		sleep(3);
		printf("\nVocê sente sua espinha gelar\n");
		sleep(3);
		printf("\nOphion - É o único jeito\n");
		sleep(3);
		printf("\nO que você vai fazer?\n");
		printf("\n1 - Lutar contra Tom // 2 - Não lutar\n");
		scanf("%d", &escolha);
		
		if(escolha == 1)
		{
			printf("\nM'Baku - Desculpa por isso, Tom\n");
			sleep(3);
			printf("\nTom - Não pode ser. Sério?\n");
			sleep(5);
			printf("\nM'Baku - Eu tenho que voltar pro meu tempo. Não posso deixar tudo pra trás\n");
			sleep(5);
			printf("\nTom - Depois de tudo que passamos...\n");
			sleep(5);
			printf("\nOphion - Hahahaha\n");
			sleep(3);
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Tom\n\n");
        	hpEne = 30;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
            	if(hp[4] <= 0)
            	{
            		printf("\nVocê perdeu\n");
            		sleep(5);
                	printf("\nTom - Uma pena te ver nesse estado, Baku\n");
                	sleep(3);
                	printf("\nTom - Mas você me deixou sem escolhas\n");
                	sleep(3);
                	printf("\nTom - Até mais\n");
                	sleep(3);
                	printf("\nSua visão fica turva, e você sucumbe\n");
                	sleep(5);
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
                            printf("\nVocê repele projéteis fragmentados das suas mãos, que atingem o inimigo contra a parede\n");
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
                        	hp[4] = curaTot(hp[4]);
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
                        	hp[4] = curaMed(hp[4]);
                        	curaM -= 1;
                        	printf("\nVocê se sente um pouco melhor\n");
                        	sleep(5);
                    	}
                	}
                	break;
                    
                	case 3:
                	printf("\nTom - O que deu em você, cara?\n");
                	sleep(3);
                	printf("\nTom - Pensei que superaríamos isso juntos\n");
                	sleep(3);
                	printf("\nM'Baku - Me desculpa, Tom. Eu tô com muito medo\n");
                	sleep(5);
                	printf("\nTom - Isso não é desculpa. Você me enoja!\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 15;
                	printf("\nO inimigo foi derrotado!!\n");
                	sleep(5);
                	printf("\nVITÓRIA\n");
                	sleep(5);
                	printf("\nSeu HP atual: %d\n", hp[4]);
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
                
                	if(sorte == 5)
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
                    	hp[4] = danoL(hp[4]);
                    	hp[4] -= 5;
                    	printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    	sleep(5);
                	}else
                	{
                    	hp[4] = danoL(hp[4]);
                    	printf("\nVocê foi atacado\n");
                    	sleep(5);
                	}
            	}
        	}
        	
        	printf("\nOphion - Você derrotou mesmo seu amigo para se salvar. Que atitude traiçoeira, jovem Baku\n");
        	sleep(5);
        	printf("\nM'Baku - Nunca vou te perdoar, diretor. NUNCA!\n");
        	sleep(5);
        	printf("\nOphion - Não fique estressado. Como prometido, irei encerrar sua viajem ao passado aqui mesmo\n");
        	sleep(5);
        	printf("\nO sabor dessa vitória deixa um gosto amargo em sua boca\n");
        	sleep(5);
        	printf("\nOphion aperta seu grande botão vermelho e o leva de volta a sua realidade, no presente\n");
        	sleep(5);
        	printf("\nM'Baku - Sei que nunca me perdoarei pelo que fiz. Me salvei do perigo, mas me submeti a culpa eterna\n");
        	sleep(5);
        	printf("\nO aluno M'Baku não conseguiu suportar por muito tempo o fardo que decidiu carregar\n");
        	sleep(5);
		}else if(escolha == 2)
		{
			printf("\nM'Baku - Claro que eu não vou aceitar isso\n");
			sleep(5);
			printf("\nOphion - Como?\n");
			sleep(3);
			printf("\nM'Baku - Não é contra meu amigo que devo lutar. É contra você!!\n");
			sleep(5);
			printf("\nTom - Diretor, agora você vai dançar bonito\n");
			sleep(5);
			printf("\nOphion - Hahaahhaha\n");
			sleep(3);
			printf("\nOphion - É tudo ou nada então\n");
			sleep(3);
			printf("\nVocê recebeu alguns itens de seu amigo\n");
			sleep(5);
			printf("\nOphion - Derrotem-me, se conseguirem\n");
			sleep(5);
			curaT += 3;
			espada += 3;
			escudo += 4;
			printf("\n\n|| BATTLE ||\n");
        	printf("\nInimigo: Ophion\n\n");
        	hpEne = 100;
        	sleep(2);
            
        	for(int i = 1; i <= 100; i++)
        	{
            	if(hp[4] <= 0)
            	{
                	printf("\nVocês perderam\n");
                	sleep(5);
                	printf("\nOphion - Bastava continuarem aqui. Uma pena que tentaram resistir\n");
                	sleep(5);
                	printf("\nTom - Desculpa por tudo, M'Baku\n");
                	sleep(3);
                	printf("\nM'Baku - Tá tudo bem. O que importa é que tentamos de tudo e não nos rendemos ao desespero\n");
                	sleep(5);
                	printf("\nTom - Verdade. Não queria dizer adeus assim :(\n");
                	sleep(5);
                	printf("\nM'Baku - Obrigado por estar do meu lado\n");
                	sleep(3);
                	printf("\nM'Baku - Adeus\n");
                	sleep(5);
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
                            printf("\nVocê repele projéteis fragmentados das suas mãos, que atingem o inimigo contra a parede\n");
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
                        	hp[4] = curaTot(hp[4]);
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
                        	hp[4] = curaMed(hp[4]);
                        	curaM -= 1;
                        	printf("\nVocê se sente um pouco melhor\n");
                        	sleep(5);
                    	}
                	}
                	break;
                    
                	case 3:
                	printf("\nM'Baku - Tom!! Puxa a sua laser e tenta acertar umas flechas nele!\n");
                	sleep(5);
                	printf("\nTom - Tá na mão, Baku!\n");
                	sleep(3);
                	printf("\nSeu amigo tirou bastante dano do inimigo\n");
                	hpEne = danoG(hpEne);
                	sleep(5);
                	printf("\nOphion - Vocês me pagam, malditos\n");
                	sleep(5);
                	break;
            	}
                
            	if(hpEne <= 0)
            	{
                	xp += 30;
                	printf("\nO inimigo foi derrotado!!\n");
                	sleep(5);
                	printf("\nVITÓRIA\n");
                	sleep(5);
                	printf("\nSeu HP atual: %d\n", hp[4]);
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
                
                	if(sorte == 5)
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
                    	hp[4] = danoM(hp[4]);
                    	hp[4] -= 5;
                    	printf("\nVocê foi atacado. DANO CRÍTICO\n");
                    	sleep(5);
                	}else
                	{
                    	hp[4] = danoG(hp[4]);
                    	printf("\nVocê foi atacado\n");
                    	sleep(5);
                	}
            	}
        	}
        	
        	printf("\nOphion - Impossível\n");
        	sleep(3);
        	printf("\nO comandante da operação do tempo foi derrotado\n");
        	sleep(5);
        	printf("\nAo cair no chão, ele derruba um grande botão vermelho\n");
        	sleep(5);
        	printf("\nM'Baku - Chegou a hora\n");
        	sleep(3);
        	printf("\nTom - Até nunca mais, viajem temporal\n");
        	sleep(3);
        	printf("\nAntes de ir embora, vocês deixam registrado em um papel que seu diretor havia separado para anotar os resultados da pesquisa\n");
        	sleep(5);
        	printf("\n= Vejo você em meus sonhos =\n");
        	sleep(5);
		}
	}
	
	printf("\n\n=== << MUITO OBRIGADO POR JOGAR >> ===\n\n");
	sleep(5);
	printf("\nCriador de Tom:  Claiton\n\n");
	sleep(5);
	printf("\nCriador de Kiber:  Leoni\n\n");
	sleep(5);
	printf("\nCriador de Dex:  Andrei\n\n");
	sleep(5);
	printf("\nCriador de Jax:  Kauã\n\n");
	sleep(5);
	printf("\nCriador de M'Baku:  Matheus\n\n");
	sleep(5);
	printf("\nNome do jogo:  Backtrack\n\n");
	sleep(5);
	printf("\nCódigo: Kauã e Leoni\n\n");
	sleep(5);
	printf("\nSlides: Matheus, Andrei e Kauã\n\n");
	sleep(5);
	printf("\nTrello: Claiton\n\n");
	sleep(5);
	printf("\nGitHub: Kauã\n\n");
	sleep(5);
	printf("\nHistória e mecânicas: Leoni\n\n");
	sleep(5);
	printf("\nAgradecimentos especiais --   Prof. Márcio Silva   //   SENAI   //   Alunos da Turma  G93684\n\n");
	sleep(7);
	printf("\n\nTHE END\n\n");
	sleep(7);
	return 0;
}