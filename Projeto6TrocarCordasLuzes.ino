// PROJETO 06: Troque a Cor das Luzes
// Autor: Augusto Queiroz

// --- Declaração de Variáveis Globais ---
int led_R = 7; // Pino do LED Vermelho
int led_G = 6; // Pino do LED Verde
int led_B = 5; // Pino do LED Azul
int pot = A0;  // Pino onde o potenciômetro está conectado

int valorPot; // Variável para guardar o valor lido do potenciômetro

// --- Funções Personalizadas (do projeto anterior) ---
void acendeVermelho()
{
    digitalWrite(led_R, LOW);
    digitalWrite(led_G, HIGH);
    digitalWrite(led_B, HIGH);
}
void acendeVerde()
{
    digitalWrite(led_R, HIGH);
    digitalWrite(led_G, LOW);
    digitalWrite(led_B, HIGH);
}
void acendeAzul()
{
    digitalWrite(led_R, HIGH);
    digitalWrite(led_G, HIGH);
    digitalWrite(led_B, LOW);
}
void apagaLed()
{
    digitalWrite(led_R, HIGH);
    digitalWrite(led_G, HIGH);
    digitalWrite(led_B, HIGH);
}

// --- Função de Configuração (setup) ---
void setup()
{
    pinMode(led_R, OUTPUT);
    pinMode(led_G, OUTPUT);
    pinMode(led_B, OUTPUT);
    // O pino A0 (pot) já é uma entrada por padrão, não precisa de pinMode.
}

// --- Laço Principal (loop) ---
void loop()
{
    // 1. Lê o valor atual do potenciômetro (0 a 1023)
    valorPot = analogRead(pot);

    // 2. Decide qual cor acender com base no valor lido
    // Zona 1: Apagado (de 0 a 256)
    if (valorPot >= 0 && valorPot <= 256)
    {
        apagaLed();
    }
    // Zona 2: Vermelho (de 257 a 512)
    if (valorPot > 256 && valorPot <= 512)
    {
        acendeVermelho();
    }
    // Zona 3: Verde (de 513 a 768)
    if (valorPot > 512 && valorPot <= 768)
    {
        acendeVerde();
    }
    // Zona 4: Azul (de 769 a 1023)
    if (valorPot > 768 && valorPot <= 1023)
    {
        acendeAzul();
    }
}
