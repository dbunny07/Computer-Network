#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int frame = 0;
    int ack;

    srand(time(0));

    printf("Stop-and-Wait ARQ Protocol\n\n");

    while (frame < 5) {
        printf("Sending Frame %d...\n", frame);

        // Randomly simulate ACK success/failure
        ack = rand() % 2;

        if (ack == 1) {
            printf("ACK received for Frame %d\n\n", frame);
            frame++;
        } else {
            printf("ACK lost! Retransmitting Frame %d...\n\n", frame);
        }
    }

    printf("All frames transmitted successfully.\n");

    return 0;
}

