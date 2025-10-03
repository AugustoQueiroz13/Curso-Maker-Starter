// PROJETO 8: Interruptor Liga-Desliga
// Autor: Augusto Queiroz

// --- Declaração de Variáveis ---
int pinoBotao = 7;
int pinoLed = 10;
bool estadoLed = LOW; // Variável para "lembrar" se o LED está aceso (HIGH) ou apagado (LOW).

void setup()
{
    pinMode(pinoBotao, INPUT_PULLUP);
    pinMode(pinoLed, OUTPUT);
}

void loop()
{
    // SE o botão for pressionado (leitura == LOW)...
    if (digitalRead(pinoBotao) == LOW)
    {
        // 1. Inverte o estado do LED. O "!" significa NÃO.
        // Se estadoLed era LOW, vira HIGH. Se era HIGH, vira LOW.
        estadoLed = !estadoLed;

        // 2. Aplica o novo estado ao LED.
        digitalWrite(pinoLed, estadoLed);

        // 3. Pequeno delay para estabilizar a leitura.
        delay(200);
    }
}
