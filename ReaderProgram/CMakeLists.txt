project(ReaderProgram)

include_directories("./../SharedSectionDLL/Source")

add_executable(ReaderProgram "Source/ReaderProgram.cpp")

target_link_libraries(ReaderProgram "./../build/SharedSectionDLL/SharedSectionDLL")

add_dependencies(ReaderProgram SharedSectionDLL)

install(TARGETS ReaderProgram)