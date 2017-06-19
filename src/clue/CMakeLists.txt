add_library(clue
    assert.cpp
    assert.hpp
    clue.h
    config.h
    log.h
    string.h
    helpers/string.hpp
)
recmkConfigureTarget(clue)
recmkInstallTarget(clue)
install(DIRECTORY . DESTINATION include/${PROJECT_NAME} FILES_MATCHING
    PATTERN *.h PATTERN *.hpp)
