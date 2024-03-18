INCLUDE_DIRECTORIES (../)
INCLUDE_DIRECTORIES (./)

ADD_LIBRARY (
        EyerPlayer

        EyerPlayer.hpp
        EyerPlayer.cpp

        EventControlThread.hpp
        EventControlThread.cpp

        EyerPlayerContext.hpp
        EyerPlayerContext.cpp

        IOReadThread.hpp
        IOReadThread.cpp

        AVDecodeQueueBox.hpp
        AVDecodeQueueBox.cpp
)

SET(HEAD_FILES
        EyerPlayer.hpp
        AVDecodeQueueBox.hpp
        )

TARGET_LINK_LIBRARIES(EyerPlayer EyerDecodeQueue)

INSTALL(FILES ${HEAD_FILES} DESTINATION include/EyerPlayer)
INSTALL(
        TARGETS EyerPlayer
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
)
