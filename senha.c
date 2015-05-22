#include <stdio.h>
#include <stdlib.h>

main(){
       int op,tentativas = 0; 
       int tentativasSubstitui = 0, senha = 0; 
       int senhaSubstitui = 0, digitos = 0, quantidadedigitos = 0;
       int senhagerada[7], contador = 0, senhadigitada[7], i = 0; 
       int verificar[7], posicaocerta[7], contador2 = 0;
       int sair = 0, controle = 0;
       
       srand(time (NULL));
       
       do{       
       printf("MENU:\n(1) - Configuracoes\n(2) - Jogador tenta adivinhar a senha que o computador gerou\n(3) - Computador tenta acertar a senha do Jogador"
              "\n(4) - Sair\n");   
       scanf("%d",&op);
       
     
       
       if(op == 1){                                                         
                    while(tentativas < 5 || tentativas > 20){
                                   printf("Quantidade de tentativas,de  5 a 20 tentativas: ");
                                   scanf("%d",&tentativas);                           
                    }
                    
                    tentativasSubstitui = tentativas;
                    tentativas = 0;
                                     
                    while(senha <4 || senha > 8){
                                   printf("Tamanho da senha,de 4 e 8 : ");
                                   scanf("%d",&senha);
                    }
                    senhaSubstitui = senha;
                    senha = 0;
                                 
                    while(digitos <5 || digitos > 10){
                                   printf("Quantidade de digitos,entre 5 e 10: ");
                                   scanf("%d",&digitos);
                    }
                    quantidadedigitos = digitos;
                    digitos = 0;
                    
                   
                    
                    controle = 1;
                }
                
                
       if(op == 2){
                    if(controle == 0){
                                   tentativasSubstitui = 5;
                                   senhaSubstitui = 4;
                                   quantidadedigitos = 5;
                    }                
                                   
                    for(contador = 0; contador < senhaSubstitui; contador++){
                    senhagerada[contador] = rand() %quantidadedigitos;
                    }
                    
                    do{
                                    contador = 0;
                                    printf("Digite os %d digitos da senha: \n", senhaSubstitui);
                                    
                    while(contador < senhaSubstitui){
                               scanf("%d", &senhadigitada[contador]);
                               verificar[contador] = 0;
                               posicaocerta[contador] = 0;
                               contador++;
                               }
                    
                    for(contador=0; contador<senhaSubstitui ;contador++){
                                if(senhadigitada[contador] == senhagerada[contador]){
                                                                 printf("\n[2]");
                                                                 verificar[contador] = 1;
                                                                 posicaocerta[contador] = 2;
                                                                 }
           							  for(i=0; i<senhaSubstitui; i++){
                                               if((senhadigitada[contador]==senhagerada[i]) && (i!=contador)){
                                               if(verificar[contador] == 0){
                                                                 printf("\n[1]");
                                                                 verificar[contador] = 1; 
                                                                 posicaocerta[contador] = 1;
                                                                 }
                                               }
						}
                    if(posicaocerta[contador]!=2 && posicaocerta[contador]!=1){
                    printf("\n[0]");
                    }
                    }
                    printf("\n\n");
                    
                    sair = 0;
                    
                    for(contador=0; contador< senhaSubstitui; contador++){
                                if(posicaocerta[contador] == 2){
                                sair++;
                                }                          
                    }

                    for(contador=0; contador< senhaSubstitui; contador++){
                                senhadigitada[contador] = 0;
                                verificar[contador] = 0;
                                posicaocerta[contador] = 0;
                                i = 0;                             
                    }              
                    contador2++;
                    
                    getch();
                    
                    if((sair==senhaSubstitui) && (contador2<=tentativasSubstitui)){
                                                   printf("Senha certa");
                                                   getch();
                                                   }
                    if((sair!=senhaSubstitui) && (contador2>=tentativasSubstitui)){
                                                   printf("Fim do Jogo");
                                                   getch();                                               
                                                   }
                    
                    }while((sair!=senhaSubstitui) && (contador2<tentativasSubstitui));
                                 
                    }
                    
      contador2 = 0;      
       
       if(op == 3){
                    
                    if(controle == 0){
                                   tentativasSubstitui = 5;
                                   senhaSubstitui = 4;
                                   quantidadedigitos = 5;
                    }
                    
                    printf("Digite a senha: \n");
                    for(contador = 0; contador < senhaSubstitui; contador++){
                             scanf("%d", &senhadigitada[contador]);
                    }
                    
                    printf("\n");
                    
                    for(contador = 0; contador < senhaSubstitui; contador++){
                             senhagerada[contador] = rand() %quantidadedigitos;
                    } 
                    
                    
                    do{
                    for(contador = 0; contador < senhaSubstitui; contador++){
                             if(senhadigitada[contador] == senhagerada[contador]){
                                               printf("\n[2]");
                                               verificar[contador] = 1;
                                               posicaocerta[contador] = 2;
                                               }
                                               for(i=0; i<senhaSubstitui; i++){
                                                        if((senhadigitada[i]==senhagerada[contador]) && (i!=contador)){
                                                        if(verificar[contador] == 0){
                                                                          printf("\n[1]");
                                                                          verificar[contador] = 1; 
                                                                          posicaocerta[contador] = 1;
                                                                          }
                                                        }
                                               }
                             if(posicaocerta[contador]!=2 && posicaocerta[contador]!=1){
                                                  printf("\n[0]");
                                                  posicaocerta[contador] = 3;
                                                  }     
                           printf("     %d\n", senhagerada[contador]);                                        
                    }
                    
                    sair = 0;
                    
                    for(contador = 0; contador < senhaSubstitui; contador++){
                             senhagerada[contador] = 0;
                    }
                    
                    getch();
                    
                    printf("\n\n");
                    
                    for(contador=0; contador< senhaSubstitui; contador++){
                                if(posicaocerta[contador] == 2){
                                sair++;
                                }                          
                    }
                    
                    contador2++;
                                        
                    if((sair!=senhaSubstitui) && (contador2<tentativasSubstitui)){
                                                   for(contador = 0; contador < senhaSubstitui; contador++){
                                                            senhagerada[contador] = rand() %quantidadedigitos;
                                                                            if(posicaocerta[contador] == 2){
                                                                            senhagerada[contador] = senhadigitada[contador];
                                                                            }
                                                   }
                    }
      
                    for(contador=0; contador< senhaSubstitui; contador++){
                                verificar[contador] = 0;
                                posicaocerta[contador] = 0;
                                i = 0;                             
                    } 
                    
                    if((sair==senhaSubstitui) && (contador2<=tentativasSubstitui)){
                                                   printf("\nComputador acertou.");
                                                   getch();
                                                   }
                    if((sair!=senhaSubstitui) && (contador2>=tentativasSubstitui)){
                                                   printf("\nComputador errou.");
                                                   getch();                                                
                                                   }
                             
                    }while((sair!=senhaSubstitui) && (contador2<tentativasSubstitui));
                   
                    }
           
       }while(op != 4);
       }