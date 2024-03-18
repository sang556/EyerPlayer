#include "EyerPlayerEvent_Pause.hpp"

namespace Eyer
{
    EyerPlayerEvent_Pause::EyerPlayerEvent_Pause()
    {
        type = EventType::PAUSE_REQUEST;
    }

    EyerPlayerEvent_Pause::~EyerPlayerEvent_Pause()
    {

    }
}