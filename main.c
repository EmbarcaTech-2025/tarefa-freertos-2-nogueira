#include "FreeRTOS.h"
#include "task.h"
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"

// Definição dos pinos conforme a placa BitDogLab
#define PINO_BOTAO_A 5         // Pino do botão A
#define PINO_BOTAO_B 6         // Pino do botão B
#define PINO_LED_VERMELHO 12    // Pino do LED vermelho
#define PINO_LED_AZUL 13        // Pino do LED azul

// Tarefa responsável por ler o botão A e controlar o LED vermelho
void tarefaBotaoA(void *parametros) {
    gpio_init(PINO_BOTAO_A);                        // Inicializa o pino do botão A
    gpio_set_dir(PINO_BOTAO_A, GPIO_IN);            // Define o pino como entrada
    gpio_pull_up(PINO_BOTAO_A);                     // Ativa o pull-up interno

    gpio_init(PINO_LED_VERMELHO);                   // Inicializa o pino do LED vermelho
    gpio_set_dir(PINO_LED_VERMELHO, GPIO_OUT);      // Define o pino como saída

    while (1) {                                     // Loop infinito da tarefa
        if (gpio_get(PINO_BOTAO_A) == 0) {          // Se o botão A estiver pressionado (ativo baixo)
            gpio_put(PINO_LED_VERMELHO, 1);         // Liga o LED vermelho
        } else {
            gpio_put(PINO_LED_VERMELHO, 0);         // Desliga o LED vermelho
        }
        vTaskDelay(pdMS_TO_TICKS(50));              // Aguarda 50ms (delay do FreeRTOS)
    }
}

// Tarefa responsável por ler o botão B e controlar o LED azul
void tarefaBotaoB(void *parametros) {
    gpio_init(PINO_BOTAO_B);                        // Inicializa o pino do botão B
    gpio_set_dir(PINO_BOTAO_B, GPIO_IN);            // Define o pino como entrada
    gpio_pull_up(PINO_BOTAO_B);                     // Ativa o pull-up interno

    gpio_init(PINO_LED_AZUL);                       // Inicializa o pino do LED azul
    gpio_set_dir(PINO_LED_AZUL, GPIO_OUT);          // Define o pino como saída

    while (1) {                                     // Loop infinito da tarefa
        if (gpio_get(PINO_BOTAO_B) == 0) {          // Se o botão B estiver pressionado (ativo baixo)
            gpio_put(PINO_LED_AZUL, 1);             // Liga o LED azul
        } else {
            gpio_put(PINO_LED_AZUL, 0);             // Desliga o LED azul
        }
        vTaskDelay(pdMS_TO_TICKS(50));              // Aguarda 50ms (delay do FreeRTOS)
    }
}