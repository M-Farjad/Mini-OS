#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

// Audio file paths
const char *audioFilePath1 = "audio/audio1.wav";
const char *audioFilePath2 = "audio/audio2.wav";

// Audio buffer size
const int bufferSize = 4096;

int main()
{
    // Initialize SDL
    if (SDL_Init(SDL_INIT_AUDIO) < 0)
    {
        cout << "Failed to initialize SDL: " << SDL_GetError() << endl;
        return -1;
    }

    // Load audio files
    SDL_AudioSpec wavSpec1, wavSpec2;
    Uint32 wavLength1, wavLength2;
    Uint8 *wavBuffer1, *wavBuffer2;

    if (SDL_LoadWAV(audioFilePath1, &wavSpec1, &wavBuffer1, &wavLength1) == NULL)
    {
        cout << "Failed to load audio file 1: " << SDL_GetError() << endl;
        return -1;
    }

    if (SDL_LoadWAV(audioFilePath2, &wavSpec2, &wavBuffer2, &wavLength2) == NULL)
    {
        cout << "Failed to load audio file 2: " << SDL_GetError() << endl;
        SDL_FreeWAV(wavBuffer1);
        return -1;
    }

    // Set up audio device
    SDL_AudioDeviceID deviceId = SDL_OpenAudioDevice(NULL, 0, &wavSpec1, NULL, 0);
    if (deviceId == 0)
    {
        cout << "Failed to open audio device: " << SDL_GetError() << endl;
        SDL_FreeWAV(wavBuffer1);
        SDL_FreeWAV(wavBuffer2);
        return -1;
    }

    // Queue audio buffer and start playback
    int bufferIndex = 0;
    bool isPlaying = true;

    while (isPlaying)
    {
        // Check for audio status
        if (SDL_GetAudioStatus() == SDL_AUDIO_STOPPED)
        {
            // Load the next audio buffer
            if (bufferIndex == 0)
            {
                SDL_QueueAudio(deviceId, wavBuffer1, wavLength1);
                bufferIndex = 1;
            }
            else
            {
                SDL_QueueAudio(deviceId, wavBuffer2, wavLength2);
                bufferIndex = 0;
            }

            // Start playing audio
            SDL_PauseAudioDevice(deviceId, 0);
        }

        // Delay for a short time to prevent hogging the CPU
        SDL_Delay(10);
    }

    // Clean up
    SDL_CloseAudioDevice(deviceId);
    SDL_FreeWAV(wavBuffer1);
    SDL_FreeWAV(wavBuffer2);
    SDL_Quit();

    return 0;
}
