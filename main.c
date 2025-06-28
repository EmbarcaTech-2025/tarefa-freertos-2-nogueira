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

