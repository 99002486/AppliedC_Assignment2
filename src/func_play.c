#include "player.h"

int play(int current_state)
{
    switch (current_state){
        case PLAYING:
            printf("Song is already playing\n");
            break;
        default:
            printf("Song starts Playing\n");
            current_state_global=PLAYING;
            break;
    }
    return 0;
}