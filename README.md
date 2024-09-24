# Company-Filter

Uma empresa com filiais em diversas cidades possui as informações de seus funcionários organizadas em um vetor de estruturas de N posições, 
onde cada funcionário possui: 

o código do funcionário (inteiro), 
o nome (no máximo 50 caracteres) e 
o código da cidade de residência desse funcionário.
Em outro vetor de estruturas tem-se as informações de M cidades, onde cada cidade possui:  

o código da cidade (inteiro), 
o nome da mesma (no máximo 50 caracteres) e 
o estado. 
Faça um programa que leia as informações dos N funcionários e das M cidades. (o Os valores de N e M são definidos pela diretiva #define): 
Após, o programa deverá gerar um relatório (em tela) que escreva o nome de cada cidade  e os dados (código e nome) dos funcionário que nela residem. 
As cidades devem ser escritas em ordem alfabética, bem como os funcionários de cada cidade também devem ser escritos em ordem alfabética.

    

Considerando um N=6 e dada as seguintes informações a respeito dos funcionários    
    
23 
Marcos Gomes Silva 
1    
45 
Rodrigo Correia Ribeiro 
2     
65 
Alice Oliveira Santos 
3        
34 
Nicolas Silva Cavalcanti 
2        
27 
Daniel Silva Melo 
1     
14 
Diogo Sousa Almeida 
2    
        
e considerando um M=3 com as seguintes informações das cidades
    
1 
Caxias do Sul 
RS    
2 
Farroupilha 
RS    
3 
Bento Gonçalves 
RS      

o programa deve produzir a seguinte saída

- Caxias do Sul - RS    
27 Daniel Silva Melo    
23 Marcos Gomes Silva    
    
- Bento Gonçalves - RS     
65 Alice Oliveira Santos    
- Farroupilha - RS        
14 Diogo Sousa Almeida    
34 Nicolas Silva Cavalcanti    
45 Rodrigo Correia Ribeiro    
