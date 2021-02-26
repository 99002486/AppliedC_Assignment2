#include "player.h"

int fast_forward_song(int current_state)
{
    switch (current_state){
        case PLAYING:
            printf("Song will be fast forwarded by 3 seconds\n");
            printf("Song is playing\n");
            break;
        default:
            printf("Song cannot be fast forwarded in this state\n");
            break;
    }
    return 0;
}