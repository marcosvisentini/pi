## Estimando o valor de π através do método de Monte Carlo

A função `drand48()` (inclusa na biblioteca `<stdlib.h>`) retorna um `double` aleatório pertencente ao intervalo `[0.0, 1.0)`. Faça uma função que gera 2 números - o primeiro será considerado a coordenada `x` e o segundo a coordenada `y` de um ponto, que estará em uma posição aleatória dentro de um quadrado que inicia na coordenada `<0, 0>` e vai até a coordenada `<x, y>`.

Essa função deve retornar um `bool` que diz se esse ponto está também dentro de um círculo com centro na coordenada `<0, 0>` e raio 1. Se os números aleatórios forem linearmente distribuídos, a probabilidade de o ponto cair dentro do círculo é proporcional à área do quarto de círculo onde ele pode cair. A área do quarto de círculo de raio 1 é `π/4`. Com um número suficientemente grande de pontos aleatórios, a razão entre o número de pontos que "acertaram" o círculo (`npac`) e o número total de pontos (`ntp`) deve se aproximar de `π/4`, ou `4 * npac / ntp` deve se aproximar de π.

Faça um programa, usando a estrutura de repetição `do...while`, que diz quantos pontos são necessários para chegar a menos de 0.0000000001 de distância do valor de π obtido através da constante `M_PI` (inclusa na biblioteca `<math.h>`). Essa técnica de cálculo é conhecida como [método de Monte Carlo](https://en.wikipedia.org/wiki/Monte_Carlo_method).

![método de Monte Carlo](img/monte-carlo-method.gif)

## Compilando e executando

Vá para o diretório onde você clonou/baixou este repositório e execute os seguintes comandos:

```bash
$ make
$ make clean
$ make run
```