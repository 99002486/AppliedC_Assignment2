#include <stdio.h>
#include "player.h"

int main()
{
    int current_input;
    enum transition current_transition;
    current_state_global = STOPPED;
    int (*switch_state_func[])(int)={stop, play, pause, rewind_song, fast_forward_song};
    while(1){
        printf("Enter appropriate number for control \n 0 = Stop \n 1 = Play \n 2 = Pause \n 3 = Rewind \n 4 = Fast forward \n");
        scanf("%d",&current_input);
        if(current_input >= STOP && current_input <= FASTFORWARD){
            current_transition = current_input ;
            int ret = (*switch_state_func[current_transition])(current_state_global);
        }
        else
            printf("Invalid operation entered\n");
    };
    return 0;

}
