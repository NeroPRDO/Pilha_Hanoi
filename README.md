# Projeto Torre de Hanoi e Pilha de Caracteres em C

Este repositório contém um projeto em C que implementa:

✅ **Simulação da Torre de Hanoi** usando pilhas estáticas para armazenar discos.  
✅ **Manipulação de pilhas de caracteres** com funções básicas de empilhamento, desempilhamento e exibição.

O projeto foi criado para fins educacionais, demonstrando conceitos de recursividade, estrutura de dados (pilhas estáticas) e interação por console.

---

## 📁 Estrutura do projeto

.
├── Main.c # Menu principal e chamada de funções
├── Hanoi.c # Implementação da Torre de Hanoi
├── Hanoi.h # Cabeçalho da Torre de Hanoi
├── Pilha.c # Implementação da pilha de caracteres
├── Pilha.h # Cabeçalho da pilha de caracteres

yaml
Copiar
Editar

---

## 🧩 Como compilar e executar

### 🔧 Compilação

Use um compilador C (ex.: `gcc`) para compilar o projeto.  
No terminal, execute:

```bash```

gcc Main.c Hanoi.c Pilha.c -o hanoi_pilha
Isso irá gerar um executável chamado hanoi_pilha.

▶️ Execução
Após compilar, execute o programa:

```bash```

./hanoi_pilha

🚀 Funcionalidades
Ao rodar o programa, você verá um menu com as seguintes opções:

==== MENU ====
1. Testar Pilha de Caracteres
2. Simular Torre de Hanoi
0. Sair
Escolha:
Opção 1: Testar Pilha de Caracteres
Permite empilhar e desempilhar letras ('A', 'B', 'C', 'D'). Você verá o estado da pilha após empilhar e ao desempilhar.

Opção 2: Simular Torre de Hanoi
Pergunta quantos discos você quer usar (1 a 10) e mostra o passo a passo da resolução da Torre de Hanoi.

Opção 0: Sair
Encerra o programa.

📚 Explicação dos principais arquivos
Hanoi.c / Hanoi.h
Implementa a lógica da Torre de Hanoi usando pilhas estáticas (PilhaEstatica):

configurarJogo: inicializa as torres e coloca os discos na torre A.

mover: move discos entre as torres, validando regras.

resolverHanoi: resolve o problema recursivamente, mostrando cada movimento.

Pilha.c / Pilha.h
Implementa a pilha de caracteres (PilhaChar):

Funções: criarPilha, empilhar, desempilhar, mostrarPilha, etc.

Main.c
Menu de interação com o usuário e chamada das funções de teste.

💡 Dicas
✅ O limite de discos para a Torre de Hanoi está configurado para 10 no menu, mas a pilha suporta até 20 discos.
✅ Para entender melhor, explore as funções de Hanoi.c e Pilha.c — elas ilustram bem o uso de pilhas em C!

⚠️ Requisitos
Compilador C (gcc, clang, etc.)

Terminal ou console para executar o programa

🤝 Contribuições
Sugestões, melhorias ou correções? Fique à vontade para abrir um issue ou enviar um pull request!

📜 Licença
Este projeto é de uso livre para fins educacionais.

Pedro Eduardo Dall' Agnol.
GRR-20240844 - UFPR
