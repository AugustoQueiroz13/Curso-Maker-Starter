// PROJETO 10.1: Acionando um Buzzer
// Autor: Augusto Queiroz

// --- Declaração de Variáveis ---
int pinoBuzzer = 6;

// --- Função de Configuração (setup) ---
void setup()
{
  // Configura o pino do buzzer como SAÍDA.
  pinMode(pinoBuzzer, OUTPUT);
}

// --- Laço Principal (loop) ---
void loop()
{
  // Toca a nota Lá (440 Hz) no pino do buzzer.
  tone(pinoBuzzer, 440);

  // Mantém o som por um curto período.
  delay(100);

  // Desliga o som.
  noTone(pinoBuzzer);

  // Pausa antes de repetir.
  delay(200);
}
