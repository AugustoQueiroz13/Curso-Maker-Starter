// PROJETO 9: Sensor de Luz Ambiente
// Autor: Augusto Queiroz

// --- Declaração de Variáveis ---
int pinoLed = 10;
int pinoSensorLuz = A0;

// --- Função de Configuração (setup) ---
void setup()
{
    pinMode(pinoLed, OUTPUT);
}

// --- Laço Principal (loop) ---
void loop()
{
    // Lê o valor do sensor de luz (de 0 a 1023).
    int valorLuz = analogRead(pinoSensorLuz);

    // SE o valor lido for MENOR que o nosso limite (ou seja, está escuro)...
    if (valorLuz < 750)
    {                                // <-- SUBSTITUA 750 PELO SEU VALOR DE CALIBRAÇÃO!
        digitalWrite(pinoLed, HIGH); //...então LIGA o LED.
    }
    else
    {                               // SENÃO (se estiver claro)...
        digitalWrite(pinoLed, LOW); //...então DESLIGA o LED.
    }

    delay(100); // Pequena pausa antes de ler novamente.
}
