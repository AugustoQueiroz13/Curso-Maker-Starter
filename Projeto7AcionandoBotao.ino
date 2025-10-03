// PROJETO 07: Acionando Botão
// Autor: Augusto Queiroz

// --- Declaração de Variáveis ---
int pinoBotao = 7;
int pinoLed = 10;

void setup()
{
    // Configura o pino do botão como entrada com resistor de pull-up interno ativado.
    pinMode(pinoBotao, INPUT_PULLUP);
    // Configura o pino do LED como saída.
    pinMode(pinoLed, OUTPUT);
}

void loop()
{
    bool estadoBotao = digitalRead(pinoBotao); // Lê o estado do botão (HIGH ou LOW)

    // Com INPUT_PULLUP, o botão pressionado lê LOW.
    // Então, SE o estado for LOW...
    if (estadoBotao == LOW)
    {
        digitalWrite(pinoLed, HIGH); //...LIGA o LED.
    }
    else
    {
        digitalWrite(pinoLed, LOW); //...SENÃO (se estiver solto/HIGH), DESLIGA o LED.
    }
}
