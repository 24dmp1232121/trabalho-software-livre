# Trabalho - Sistemas de Software Livre

## Aluno
- **Daniel de Paula**

## Descrição
Este projeto é um trabalho prático da disciplina **Sistemas de Software Livre**, com o objetivo de exercitar o uso de:
- Programação em C++
- Compilação com Makefile
- Controle de versão com Git
- Scripts de teste em Bash

## Programas C++

- `primo.cpp`: Lê um número inteiro e imprime se ele é **primo** ou **não é primo**.
- `vetor.cpp`: Lê um vetor de inteiros e imprime o **maior valor**.
- `matriz.cpp`: Calcula **soma**, **subtração** ou **multiplicação** de duas matrizes quadradas.

## Compilação com Make

Para compilar todos os programas:

```bash
make


---

make primo
make vetor
Ou compile apenas um dos programas:

make primo
make vetor
make matriz

Para remover os executáveis compilados:

make clean

Scripts de teste

Use os scripts abaixo para gerar entradas de teste aleatórias:

./generate-test-primo.sh
./generate-test-vetor.sh
./generate-test-matriz.sh

Depois, execute os programas com os testes gerados:

./primo < test1-primo.in
./vetor < test1-vetor.in
./matriz < test1-matriz.in

Observações

    Projeto desenvolvido em Linux Ubuntu (VirtualBox)

    Todos os testes foram realizados com sucesso

    Versionamento feito com Git e GitHubmake matriz


make clean


https://github.com/24dmp1232121/trabalho-software-livre

