#include "player.h"

int stop(int current_state)
{
    switch (current_state){
        case STOPPED:
            printf("Song is already stopped\n");
            break;
        default:
            printf("Song will be stopped\n");
            current_state_global=STOPPED;
            break;
    }
    return 0;
}