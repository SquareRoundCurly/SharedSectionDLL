project(WriterProgram)

include_directories("./../SharedSectionDLL/Source")

add_executable(WriterProgram "Source/WriterProgram.cpp")

target_link_libraries(WriterProgram "./../build/SharedSectionDLL/SharedSectionDLL")

add_dependencies(WriterProgram SharedSectionDLL)

install(TARGETS WriterProgram)