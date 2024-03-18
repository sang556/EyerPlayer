#ifndef EYERPLAYER_EYERPLAYEREVENT_SEEK_HPP
#define EYERPLAYER_EYERPLAYEREVENT_SEEK_HPP

#include "EventRequest.hpp"

namespace Eyer
{
    class EventRequest_Seek : public EventRequest
    {
    public:
        EventRequest_Seek();
        ~EventRequest_Seek();
    };
}

#endif //EYERPLAYER_EYERPLAYEREVENT_SEEK_HPP
