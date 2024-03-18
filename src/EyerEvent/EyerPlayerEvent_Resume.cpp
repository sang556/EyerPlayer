#include "EyerPlayerEvent_Resume.hpp"

namespace Eyer
{
    EyerPlayerEvent_Resume::EyerPlayerEvent_Resume()
    {
        type = EventType::RESUME_REQUEST;
    }

    EyerPlayerEvent_Resume::~EyerPlayerEvent_Resume()
    {

    }
}