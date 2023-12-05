#include <iostream>

void print_help()
{
    const char *help_msg = "usage: \n\
    PPM [OPTION...] \n\
Application Options:\n\
  -play                                   Resume playback if currently paused\n\
  -play-uri=URI to play                   Play a specified URI, importing it if necessary\n\
  -pause                                  Pause playback if currently playing\n\
  -play-pause                             Toggle play/pause mode\n\
  -stop                                   Stop playback\n\
  -next                                   Jump to next song\n\
  -previous                               Jump to previous song\n\
  -seek                                   Seek in current track\n\
  -check-running                          Check if Rhythmbox is already running\n\
  -enqueue                                Add specified tracks to the play queue\n\
  -clear-queue                            Empty the play queue before adding new tracks\n\
  -print-playing                          Print the title and artist of the playing song\n\
  -print-playing-format                   Print formatted details of the song\n\
  -repeat                                 Enable repeat playback order\n\
  -no-repeat                              Disable repeat playback order\n\
  -shuffle                                Enable shuffle playback order\n\
  -no-shuffle                             Disable shuffle playback order\n\
  -set-volume                             Set the playback volume\n\
  -volume-up                              Increase the playback volume\n\
  -volume-down                            Decrease the playback volume\n\
  -print-volume                           Print the current playback volume\n\
  -set-rating                             Set the rating of the current song\n\
  -debug                                  \n\
  -version                                Show the version of the program\n\
  -help			                       print this message again\n\
  -quit                                   Quit Rhythmbox\n\
  For more detailes you can visit\n\
  https://github.com/Atiyah1999/pyramidoPlayer\n\
  ";
    std::cout << help_msg << std::endl;
}

int main(int argc, char *argv[])
{

    return 0;
}
