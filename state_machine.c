#include <stdio.h>

enum state{STOPPED,PLAYING,PAUSED};
enum transition{STOP,PLAY,PAUSE};

enum state current_state_global = 0;

int play(int current_state)
{
    switch (current_state){
        case PLAYING:
            printf("Song is already playing\n");
            break;
        default:
            printf("Song will start Playing\n");
            current_state_global=1;
            break;
    }
    return 0;
}


int pause(int current_state)
{
    switch (current_state){
        case PLAYING:
            printf("Song will be paused\n");
            current_state_global=2;
            break;
        default:
            printf("Song cannot be paused in this state\n");
            break;
    }
    return 0;
}

int stop(int current_state)
{
    switch (current_state){
        case STOPPED:
            printf("Song is already stopped\n");
            break;
        default:
            printf("Song will be stopped\n");
            current_state_global=0;
            break;
    }
    return 0;
}
int main()
{
    int current_input;
    enum transition current_transition;
    int (*switch_state_func[])(int)={stop, play, pause};
    while(1){
        printf("Enter appropriate number for control \n 0 = Stop \n 1 = Play \n 2 = Pause \n");
        scanf("%d",&current_input);
        if(current_input >= 0 && current_input <=2){
            current_transition = current_input ;
            int ret = (*switch_state_func[current_transition])(current_state_global);
        }
        else
            printf("Invalid operation entered\n");
    };
    return 0;

}