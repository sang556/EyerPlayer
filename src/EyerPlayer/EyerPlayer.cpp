#include "EyerPlayer.hpp"

#include "EyerEvent/EyerEventHeader.hpp"

namespace Eyer
{
    EyerPlayer::EyerPlayer()
    {
        eventControlThread = new EventControlThread();
        eventControlThread->Start();
    }

    EyerPlayer::~EyerPlayer()
    {
        if(eventControlThread != nullptr){
            eventControlThread->Stop();
            delete eventControlThread;
            eventControlThread = nullptr;
        }
    }

    int EyerPlayer::SetURL(const EyerString & _url)
    {
        url = _url;
        return 0;
    }

    int EyerPlayer::Play()
    {
        EyerPlayerEvent_Play * event = new EyerPlayerEvent_Play();
        event->url = url;
        eventControlThread->PushEvent(event);
        return 0;
    }

    int EyerPlayer::Pause()
    {
        EyerPlayerEvent_Pause * event = new EyerPlayerEvent_Pause();
        eventControlThread->PushEvent(event);
        return 0;
    }

    int EyerPlayer::Resume()
    {
        EyerPlayerEvent_Resume * event = new EyerPlayerEvent_Resume();
        eventControlThread->PushEvent(event);
        return 0;
    }

    int EyerPlayer::Stop()
    {
        EyerPlayerEvent_Stop * event = new EyerPlayerEvent_Stop();
        eventControlThread->PushEvent(event);
        return 0;
    }

    int EyerPlayer::Seek(double time)
    {
        EyerPlayerEvent_Seek * event = new EyerPlayerEvent_Seek();
        eventControlThread->PushEvent(event);
        return 0;
    }
}