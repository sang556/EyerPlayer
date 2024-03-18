INCLUDE_DIRECTORIES (../)
INCLUDE_DIRECTORIES (./)

ADD_LIBRARY (
        EyerDecodeQueue

        EyerDecodeQueueHeader.hpp

        EyerDecodeQueueBase.hpp
        EyerDecodeQueueBase.cpp

        EyerDecodeQueueFFmpeg.hpp
        EyerDecodeQueueFFmpeg.cpp
)

SET(HEAD_FILES
        EyerDecodeQueueHeader.hpp
        EyerDecodeQueueFFmpeg.hpp
        )

TARGET_LINK_LIBRARIES(EyerDecodeQueue EyerAV)

INSTALL(FILES ${HEAD_FILES} DESTINATION include/EyerDecodeQueue)
INSTALL(
        TARGETS EyerDecodeQueue
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
)
