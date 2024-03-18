#include "EyerPlayerEvent_Seek.hpp"

namespace Eyer
{
    EyerPlayerEvent_Seek::EyerPlayerEvent_Seek()
    {
        type = EventType::SEEK_REQUEST;
    }

    EyerPlayerEvent_Seek::~EyerPlayerEvent_Seek()
    {

    }
}