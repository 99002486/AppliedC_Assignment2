#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <stdio.h>
/**
 * Enum for the current state of the player
*/
enum state{STOPPED,PLAYING,PAUSED};
/**
 * Enum for each transition the player can take
 */
enum transition{STOP,PLAY,PAUSE};
/**
 * Initialize global variable to hold state of the player
 * The default current state as STOPPED
 */
enum state current_state_global = STOPPED;
/**
 * @function-To transition from current state to PLAYING
 * @param-current state of the player
 * @return-0 for successful execution
 */
int play(int current_state);
/**
 * @function-To transition from current state to PAUSE
 * @param-current state of the player
 * @return-0 for successful execution
 */
int pause(int current_state);
/**
 * @function-To transition from current state to STOPPED
 * @param-current state of the player
 * @return-0 for successful execution
 */
int stop(int current_state);
/**
 * @function-To transition from PLAYING state to rewind the song
 * and return back to playing the song
 * @param-current state of the player
 * @return-0 for successful execution
 */
int rewind_song(int current_state);
/**
 * @function-To transition from PLAYING state to fast forward the song
 * and return back to playing the song
 * @param-current state of the player
 * @return-0 for successful execution
 */
int fast_forward_song(int current_state);

#endif