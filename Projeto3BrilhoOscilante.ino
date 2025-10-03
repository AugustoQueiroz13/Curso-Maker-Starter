// PROJETO 03: Brilho Oscilante (Fade)
// Autor: Augusto Queiroz
// --- Declaração de Variáveis Globais ---
int pinoLed = 11;  // Define o pino do LED. Lembre-se que o pino 11 tem o símbolo ~ (PWM).
int brilho = 0;    // Variável para guardar o valor atual do brilho do LED.
int passoFade = 5; // O valor que vamos somar/subtrair do brilho a cada passo.
// --- Função de Configuração (setup) ---
void setup()
{
    // Configura o pino do LED como SAÍDA. Não é estritamente necessário para
    // analogWrite, mas é uma boa prática de programação.
    pinMode(pinoLed, OUTPUT);
}
// --- Laço Principal (loop) ---
void loop()
{
    // --- Aumenta o brilho gradualmente (de 0 para 255) ---
    for (int brilho = 0; brilho <= 255; brilho = brilho + passoFade)
    {
        // Escreve o valor atual do brilho no pino do LED
        analogWrite(pinoLed, brilho);
        // Pequena pausa para o efeito ser visível
        delay(30);
    }
    // --- Diminui o brilho gradualmente (de 255 para 0) ---
    for (int brilho = 255; brilho >= 0; brilho = brilho - passoFade)
    {
        // Escreve o valor atual do brilho no pino do LED
        analogWrite(pinoLed, brilho);
        // Pequena pausa para o efeito ser visível
        delay(30);
    }
}
