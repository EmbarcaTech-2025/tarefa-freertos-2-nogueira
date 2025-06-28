# Tarefa: Roteiro de FreeRTOS #2 - EmbarcaTech 2025

Autor: **João Nogueira**

Curso: Residência Tecnológica em Sistemas Embarcados

Instituição: EmbarcaTech - HBr

Brasília, Junho de 2025

---

## 💡 Sobre o Projeto

Este projeto foi desenvolvido como parte do roteiro de estudos de FreeRTOS para a disciplina de Sistemas Embarcados. O objetivo principal é demonstrar, de forma prática, a criação e o gerenciamento de múltiplas tarefas utilizando o sistema operacional em tempo real FreeRTOS na placa BitDogLab, baseada no microcontrolador RP2040.

A motivação para este projeto surgiu da necessidade de compreender como sistemas embarcados modernos lidam com multitarefa e controle de periféricos de forma eficiente e segura. Ao utilizar dois botões e dois LEDs presentes na BitDogLab, o projeto simula um painel de controle simples, onde cada botão acende ou apaga um LED correspondente, permitindo o estudo de conceitos como concorrência, delays não bloqueantes e manipulação de GPIOs em ambiente multitarefa.

Além de servir como base para aplicações mais complexas, este projeto reforça a importância do uso de RTOS em sistemas embarcados, preparando o desenvolvedor para desafios reais do mercado.

---

## ⚙️ Como funciona

- **Dois botões** da placa BitDogLab são monitorados por tarefas independentes.
- Cada tarefa verifica o estado de um botão e controla um LED correspondente.
- O uso do FreeRTOS permite que ambas as tarefas rodem de forma concorrente, sem bloqueios.
- O código pode ser facilmente expandido para incluir outros periféricos ou funcionalidades.

---

## 🚀 Como compilar e gravar

1. Clone este repositório.
2. Certifique-se de ter o [pico-sdk](https://github.com/raspberrypi/pico-sdk) e o FreeRTOS configurados.
3. Compile o projeto usando CMake.
4. Grave o arquivo `.uf2` gerado na BitDogLab via USB.

---

## 📸 Demonstração

[Baixar ou assistir a demonstração do projeto](media/FreeRTOS_demonstracao.mp4)

---

## 📜 Licença
GNU GPL-3.0.
