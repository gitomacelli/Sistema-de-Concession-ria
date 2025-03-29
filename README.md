# Sistema de Concessionária

Este é um sistema simples desenvolvido em C, que simula o funcionamento de uma concessionária de veículos. Ele permite que o usuário cadastre seus dados como cliente, faça compras de carros e acessórios. O sistema inclui validação de senha para acessar as opções do menu.

## Funcionalidades

- **Cadastro de Cliente**: O usuário pode cadastrar seu nome, telefone e endereço.
- **Compra de Carro**: O usuário pode escolher entre três modelos de carros (Ford Ka, Civic, Fusca), e definir a cor e forma de pagamento.
- **Compra de Acessórios**: O usuário pode escolher um acessório e a quantidade que deseja comprar.

## Tecnologias Utilizadas

- Linguagem: **C**

## Como Executar

1. Faça o **clone** do repositório para sua máquina local:
    ```bash
    git clone https://github.com/seu-usuario/sistema-concessionaria.git
    ```

2. Compile o código:
    ```bash
    gcc -o concessionaria concessionaria.c
    ```

3. Execute o programa:
    ```bash
    ./concessionaria
    ```

## Como Funciona

1. Ao iniciar o programa, o usuário precisa inserir uma senha.
2. Depois de validar a senha, o menu com as opções será exibido.
3. O usuário pode escolher entre:
   - Cadastro de cliente
   - Compra de carro
   - Compra de acessórios
   - Sair do programa

## Observações

- Este sistema foi feito como um exercício simples em C para fins educativos.
- Melhorias futuras podem incluir a persistência de dados (salvar informações em arquivos) e uma interface gráfica.


