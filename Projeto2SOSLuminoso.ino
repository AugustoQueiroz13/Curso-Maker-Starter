// PROJETO 02: SOS Luminoso
// Autor: Augusto Queiroz
// --- Declaração de Variáveis Globais ---
// Usar uma variável para o pino do LED torna o código mais fácil de ler e modificar.
int pinoLed = 11;
// --- Função de Configuração (setup) ---
// Roda uma única vez quando a placa é ligada.
void setup()
{
    // Configura a variável pinoLed (que vale 11) como uma SAÍDA.
    pinMode(pinoLed, OUTPUT);
}
// --- Laço Principal (loop) ---
// Fica se repetindo infinitamente.
void loop()
{

    // --- Letra 'S' (...): 3 piscadas curtas ---
    for (int x = 0; x < 3; x++)
    {
        digitalWrite(pinoLed, HIGH);
        delay(150);
        digitalWrite(pinoLed, LOW);
        delay(150);
    }
    delay(200); // Pausa entre as letras
    // --- Letra 'O' (---): 3 piscadas longas ---
    for (int x = 0; x < 3; x++)
    {
        digitalWrite(pinoLed, HIGH);
        delay(450);
        digitalWrite(pinoLed, LOW);
        delay(150);
    }
    delay(200); // Pausa entre as letras
    // --- Letra 'S' (...): 3 piscadas curtas ---
    for (int x = 0; x < 3; x++)
    {
        digitalWrite(pinoLed, HIGH);
        delay(150);
        digitalWrite(pinoLed, LOW);
        delay(150);
    }
    // Pausa longa de 5 segundos antes de repetir a mensagem SOS.
    delay(5000);
}
