#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#define NUM_FILOSOFOS 5

pthread_mutex_t talheres[NUM_FILOSOFOS];
pthread_t filosofos[NUM_FILOSOFOS];

void *filosofo(void *arg) {
    int id = *(int *)arg;
    int talher_esquerdo = id;
    int talher_direito = (id + 1) % NUM_FILOSOFOS;

    while (1) {
        // Filósofo pensa por 5 segundos
        printf("Filósofo %d está pensando.\n", id);
        sleep(5);

        // Tentativa de pegar talheres
        if (id == NUM_FILOSOFOS - 1) {
            pthread_mutex_lock(&talheres[talher_direito]);
            pthread_mutex_lock(&talheres[talher_esquerdo]);
        } else {
            pthread_mutex_lock(&talheres[talher_esquerdo]);
            pthread_mutex_lock(&talheres[talher_direito]);
        }

        // Filósofo começa a comer por 1 segundo
        printf("Filósofo %d começou a comer.\n", id);
        sleep(1);
        printf("Filósofo %d terminou de comer.\n", id);

        // Libera os talheres
        pthread_mutex_unlock(&talheres[talher_esquerdo]);
        pthread_mutex_unlock(&talheres[talher_direito]);
    }

    return NULL;
}

int main() {
    int ids[NUM_FILOSOFOS];

    // Inicializa os mutexes para os talheres
    for (int i = 0; i < NUM_FILOSOFOS; i++) {
        pthread_mutex_init(&talheres[i], NULL);
        ids[i] = i;
    }

    // Cria as threads para cada filósofo
    for (int i = 0; i < NUM_FILOSOFOS; i++) {
        pthread_create(&filosofos[i], NULL, filosofo, &ids[i]);
    }

    // // Mantém o main ativo
    // while (1) {
    //     sleep(1);
    // }

    // Aguarda as threads (boa prática apenas, já que os threads não terminam)
    for (int i = 0; i < NUM_FILOSOFOS; i++) {
        pthread_join(filosofos[i], NULL);
    }

    // Libera os mutexes (boa prática, não tem término de mutexes)
    for (int i = 0; i < NUM_FILOSOFOS; i++) {
        pthread_mutex_destroy(&talheres[i]);
    }

    return 0;
}
