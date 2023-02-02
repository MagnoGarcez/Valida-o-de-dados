# Validação simples
O objetivo do documento é demonstrar algumas estruturas simples que facilitam a usabilidade, reduzindo os erros do programa por inserir validações das entradas de dados do usuário. (O programa foi compilado em Windows, provavelmente a biblioteca "locale.h" não funcionará em sistemas Linux).

## Soluções
Obter as entradas como strings ao invés de números facilitou o tratamentos da informação antes de realizar os cálculos.
```cpp
gets(invalido);
```
Entradas do tipo "1.3" ou "2.5", utilizando ponto ao invés de vírgula causaram erro para efetuar operações matemáticas. Um laço "for" foi utilizado para percorrer a string substituindo eventuais entradas desse tipo.
```cpp
for(i=0;i<5;i++){
        if (invalido[i] == '.'){
                invalido[i] = ',';
        }}
```
Após o tratamento, a string foi convertida para um número de ponto flutuante através da função "atof", para realização dos cálculos necessários.
```cpp
altura = atof(invalido);
```
Em cada entrada do usuário existe a possibilidade de um novo erro, limitar as entradas sabidamente absurdas pode evitar problemas. Não existem alturas válidas menores que 0 ou maiores que 3 metros para seres humanos.
```cpp
while (altura>=3 || altura<=0){
        printf("\n Por favor digite sua altura com números e vírgula :C\n\n R: ");
``` 
