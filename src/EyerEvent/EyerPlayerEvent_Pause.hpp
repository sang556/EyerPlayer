#ifndef EYERPLAYER_EVENTREQUEST_PAUSE_HPP
#define EYERPLAYER_EVENTREQUEST_PAUSE_HPP

#include "EventRequest.hpp"

namespace Eyer
{
    class EyerPlayerEvent_Pause : public EventRequest
    {
    public:
        EyerPlayerEvent_Pause();
        ~EyerPlayerEvent_Pause();
    };
}

#endif //EYERPLAYER_EVENTREQUEST_PAUSE_HPP
