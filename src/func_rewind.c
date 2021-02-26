#include "player.h"


int rewind_song(int current_state)
{
    switch (current_state){
        case PLAYING:
            printf("Song will be rewinded by 3 seconds\n");
            printf("Song is playing\n");
            break;
        default:
            printf("Song cannot be rewinded in this state\n");
            break;
    }
    return 0;
}