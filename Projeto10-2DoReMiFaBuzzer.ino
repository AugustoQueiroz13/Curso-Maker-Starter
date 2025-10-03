// PROJETO 10.2: Dó-Ré-Mi-Fá com Buzzer
// Autor: Augusto Queiroz

// --- Mapeamento das Frequências das Notas (em Hz) ---
#define DO 262
#define RE 294
#define MI 330
#define FA 349
#define SOL 392
#define LA 440
#define SI 494
#define DO_2 523 // Dó uma oitava acima

// --- Declaração de Variáveis e Arrays ---
int pinoBuzzer = 6;
// Cria um array (uma lista) com a sequência de notas da nossa melodia.
int melodia[] = {DO, RE, MI, FA, SOL, LA, SI, DO_2};

// --- Função de Configuração (setup) ---
void setup()
{
    // Não precisamos do pinMode para a função tone(), mas é uma boa prática.
}

// --- Laço Principal (loop) ---
void loop()
{
    // Usa um laço 'for' para tocar cada uma das 8 notas do nosso array.
    for (int i = 0; i < 8; i++)
    {
        // Toca a nota que está na posição 'i' do array 'melodia'.
        tone(pinoBuzzer, melodia[i]);

        // Mantém a nota tocando por meio segundo.
        delay(500);

        // Desliga o som antes de ir para a próxima nota.
        noTone(pinoBuzzer);

        // Pequena pausa entre as notas.
        delay(50);
    }

    // Pausa longa de 2 segundos antes de repetir a escala musical.
    delay(2000);
}
