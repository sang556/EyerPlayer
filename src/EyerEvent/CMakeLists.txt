INCLUDE_DIRECTORIES (../)
INCLUDE_DIRECTORIES (./)

ADD_LIBRARY (
        EyerEvent

        EyerEventHeader.hpp

        EventType.hpp
        EventType.cpp

        EyerPlayerEvent.hpp
        EyerPlayerEvent.cpp

        EyerPlayerEvent_Play.hpp
        EyerPlayerEvent_Play.cpp

        EyerPlayerEvent_Stop.hpp
        EyerPlayerEvent_Stop.cpp

        EyerPlayerEvent_Pause.hpp
        EyerPlayerEvent_Pause.cpp

        EyerPlayerEvent_Resume.hpp
        EyerPlayerEvent_Resume.cpp

        EyerPlayerEvent_Seek.hpp
        EyerPlayerEvent_Seek.cpp
)

SET(HEAD_FILES
        EyerEventHeader.hpp
        )

INSTALL(FILES ${HEAD_FILES} DESTINATION include/EyerEvent)
INSTALL(
        TARGETS EyerEvent
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
)
