// PROJETO 11: Contador Digital
// Autor: Augusto Queiroz

// --- Mapeamento dos Pinos ---
// Associa cada pino do Arduino a um segmento do display
int pinoA = 2;
int pinoB = 3;
int pinoC = 4;
int pinoD = 5;
int pinoE = 6;
int pinoF = 7;
int pinoG = 8;
int pinoDP = 9; // Decimal Point (ponto)

// --- Função de Configuração (setup) ---
void setup()
{
    // Configura todos os pinos dos segmentos como SAÍDA.
    pinMode(pinoA, OUTPUT);
    pinMode(pinoB, OUTPUT);
    pinMode(pinoC, OUTPUT);
    pinMode(pinoD, OUTPUT);
    pinMode(pinoE, OUTPUT);
    pinMode(pinoF, OUTPUT);
    pinMode(pinoG, OUTPUT);
    pinMode(pinoDP, OUTPUT);
}

// --- Laço Principal (loop) ---
void loop()
{
    mostraNumero(0);
    delay(1000);
    mostraNumero(1);
    delay(1000);
    mostraNumero(2);
    delay(1000);
    mostraNumero(3);
    delay(1000);
    mostraNumero(4);
    delay(1000);
    mostraNumero(5);
    delay(1000);
    mostraNumero(6);
    delay(1000);
    mostraNumero(7);
    delay(1000);
    mostraNumero(8);
    delay(1000);
    mostraNumero(9);
    delay(1000);
}

// --- Funções Personalizadas para cada número ---

// Função que recebe um número e chama a função correspondente
void mostraNumero(int numero)
{
    // Primeiro, apaga todos os segmentos (coloca em HIGH)
    digitalWrite(pinoA, HIGH);
    digitalWrite(pinoB, HIGH);
    digitalWrite(pinoC, HIGH);
    digitalWrite(pinoD, HIGH);
    digitalWrite(pinoE, HIGH);
    digitalWrite(pinoF, HIGH);
    digitalWrite(pinoG, HIGH);
    digitalWrite(pinoDP, HIGH);

    // Agora, acende apenas os segmentos para o número desejado
    if (numero == 0)
    {
        digitalWrite(pinoA, LOW);
        digitalWrite(pinoB, LOW);
        digitalWrite(pinoC, LOW);
        digitalWrite(pinoD, LOW);
        digitalWrite(pinoE, LOW);
        digitalWrite(pinoF, LOW);
    }
    else if (numero == 1)
    {
        digitalWrite(pinoB, LOW);
        digitalWrite(pinoC, LOW);
    }
    else if (numero == 2)
    {
        digitalWrite(pinoA, LOW);
        digitalWrite(pinoB, LOW);
        digitalWrite(pinoG, LOW);
        digitalWrite(pinoE, LOW);
        digitalWrite(pinoD, LOW);
    }
    else if (numero == 3)
    {
        digitalWrite(pinoA, LOW);
        digitalWrite(pinoB, LOW);
        digitalWrite(pinoG, LOW);
        digitalWrite(pinoC, LOW);
        digitalWrite(pinoD, LOW);
    }
    else if (numero == 4)
    {
        digitalWrite(pinoF, LOW);
        digitalWrite(pinoG, LOW);
        digitalWrite(pinoB, LOW);
        digitalWrite(pinoC, LOW);
    }
    else if (numero == 5)
    {
        digitalWrite(pinoA, LOW);
        digitalWrite(pinoF, LOW);
        digitalWrite(pinoG, LOW);
        digitalWrite(pinoC, LOW);
        digitalWrite(pinoD, LOW);
    }
    else if (numero == 6)
    {
        digitalWrite(pinoA, LOW);
        digitalWrite(pinoF, LOW);
        digitalWrite(pinoE, LOW);
        digitalWrite(pinoD, LOW);
        digitalWrite(pinoC, LOW);
        digitalWrite(pinoG, LOW);
    }
    else if (numero == 7)
    {
        digitalWrite(pinoA, LOW);
        digitalWrite(pinoB, LOW);
        digitalWrite(pinoC, LOW);
    }
    else if (numero == 8)
    {
        digitalWrite(pinoA, LOW);
        digitalWrite(pinoB, LOW);
        digitalWrite(pinoC, LOW);
        digitalWrite(pinoD, LOW);
        digitalWrite(pinoE, LOW);
        digitalWrite(pinoF, LOW);
        digitalWrite(pinoG, LOW);
    }
    else if (numero == 9)
    {
        digitalWrite(pinoA, LOW);
        digitalWrite(pinoB, LOW);
        digitalWrite(pinoC, LOW);
        digitalWrite(pinoD, LOW);
        digitalWrite(pinoF, LOW);
        digitalWrite(pinoG, LOW);
    }
}
