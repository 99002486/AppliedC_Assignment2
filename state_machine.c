#include <stdio.h>

enum state{STOPPED,PLAYING,PAUSED};
enum transition{STOP,PLAY,PAUSE,REWIND,FAST_FORWARD};

enum state current_state_global = STOPPED;

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
int main()
{
    int current_input;
    enum transition current_transition;
    int (*switch_state_func[])(int)={stop, play, pause, rewind_song, 
                                        fast_forward_song};
    while(1){
        printf("Enter appropriate number for control \n 0 = Stop \n 1 = Play \n 2 = Pause \n 3 = Rewind \n 4 = Fast forward \n");
        scanf("%d",&current_input);
        if(current_input >= 0 && current_input <=4){
            current_transition = current_input ;
            int ret = (*switch_state_func[current_transition])(current_state_global);
        }
        else
            printf("Invalid operation entered\n");
    };
    return 0;

}