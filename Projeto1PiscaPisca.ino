// PROJETO 01: Pisca-Pisca
// Autor: Augusto Queiroz

// A função setup() roda uma vez quando a placa é ligada.
void setup()
{
    // Avisa ao Arduino que o pino 11 será usado como SAÍDA de energia.
    pinMode(11, OUTPUT);
}
// A função loop() fica se repetindo infinitamente.
void loop()
{
    digitalWrite(11, HIGH); // Envia 5V para o pino 11 (LIGA o LED).
    delay(1000);            // Espera 1000 milissegundos (1 segundo).
    digitalWrite(11, LOW);  // Corta a energia do pino 11 (DESLIGA o LED).
    delay(1000);            // Espera mais 1 segundo.
}
