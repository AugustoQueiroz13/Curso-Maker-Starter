// PROJETO 05: Luzes Coloridas com LED RGB
// Autor: Augusto Queiroz

// --- Declaração de Variáveis Globais ---
int led_R = 7; // Pino para o terminal Vermelho (Red)
int led_G = 6; // Pino para o terminal Verde (Green)
int led_B = 5; // Pino para o terminal Azul (Blue)
// --- Função de Configuração (setup) ---
void setup()
{
    // Configura os três pinos de cores como SAÍDA.
    pinMode(led_R, OUTPUT);
    pinMode(led_G, OUTPUT);
    pinMode(led_B, OUTPUT);
}
// --- Laço Principal (loop) ---
void loop()
{
    acendeVermelho(); // Chama a função para acender o vermelho.
    delay(1000);      // Espera 1 segundo.
    acendeVerde();    // Chama a função para acender o verde.
    delay(1000);      // Espera 1 segundo.
    acendeAzul();     // Chama a função para acender o azul.
    delay(1000);      // Espera 1 segundo.
}
// --- Funções Personalizadas ---
// Função para acender APENAS a cor vermelha.
void acendeVermelho()
{
    digitalWrite(led_R, LOW);  // LIGA o Vermelho (lembra da lógica invertida?)
    digitalWrite(led_G, HIGH); // DESLIGA o Verde
    digitalWrite(led_B, HIGH); // DESLIGA o Azul
}
// Função para acender APENAS a cor verde.
void acendeVerde()
{
    digitalWrite(led_R, HIGH);
    digitalWrite(led_G, LOW);
    digitalWrite(led_B, HIGH);
}
// Função para acender APENAS a cor azul.
void acendeAzul()
{
    digitalWrite(led_R, HIGH);
    digitalWrite(led_G, HIGH);
    digitalWrite(led_B, LOW);
}
