#include "player.h"

int pause(int current_state)
{
    switch (current_state){
        case PLAYING:
            printf("Song will be paused\n");
            current_state_global=PAUSED;
            break;
        default:
            printf("Song cannot be paused in this state\n");
            break;
    }
    return 0;
}