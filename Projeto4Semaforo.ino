// PROJETO 4: Semáforo de Carros e Pedestres
// Autor: Augusto Queiroz
// --- Mapeamento dos Pinos ---
int pedVerde = 9;       // Pino para o LED Verde do pedestre
int pedVermelho = 8;    // Pino para o LED Vermelho do pedestre
int carroVerde = 12;    // Pino para o LED Verde dos carros
int carroAmarelo = 11;  // Pino para o LED Amarelo dos carros
int carroVermelho = 10; // Pino para o LED Vermelho dos carros

// --- Função de Configuração (setup) ---
void setup()
{
    // Configura todos os pinos dos LEDs como SAÍDA.
    pinMode(pedVerde, OUTPUT);
    pinMode(pedVermelho, OUTPUT);
    pinMode(carroVerde, OUTPUT);
    pinMode(carroAmarelo, OUTPUT);
    pinMode(carroVermelho, OUTPUT);

    // Define o estado inicial do semáforo:
    // Verde para carros, Vermelho para pedestres.
    digitalWrite(carroVerde, HIGH);
    digitalWrite(pedVermelho, HIGH);
}

// --- Laço Principal (loop) ---
void loop()
{
    // ETAPA 1: Carros passam, pedestres esperam (5 segundos)
    digitalWrite(carroVerde, HIGH);
    digitalWrite(pedVermelho, HIGH);
    delay(5000);

    // ETAPA 2: Sinal amarelo para carros (3 segundos)
    digitalWrite(carroVerde, LOW);
    digitalWrite(carroAmarelo, HIGH);
    delay(3000);

    // ETAPA 3: Carros parados, pedestres passam (5 segundos)
    digitalWrite(carroAmarelo, LOW);
    digitalWrite(carroVermelho, HIGH);
    digitalWrite(pedVermelho, LOW);
    digitalWrite(pedVerde, HIGH);
    delay(5000);

    // ETAPA 4: Alerta para pedestres (pisca 5 vezes)
    digitalWrite(pedVerde, LOW);
    for (int x = 0; x < 5; x++)
    {
        digitalWrite(pedVermelho, HIGH);
        delay(250);
        digitalWrite(pedVermelho, LOW);
        delay(250);
    }

    // Apaga o vermelho do carro para recomeçar o ciclo.
    digitalWrite(carroVermelho, LOW);
}
