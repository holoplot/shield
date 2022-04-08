project(shield-tests)



set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(${PROJECT_NAME} TEST.cpp TEST_Header.h)
target_link_libraries(${PROJECT_NAME} PRIVATE shield)


if (APPLE OR UNIX)
  target_compile_options(${PROJECT_NAME} PRIVATE -Weverything -Werror)
elseif(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE /W4 /WX)
endif()

add_test(NAME shield_test COMMAND shield-tests)
# set_tests_properties(shield_test PROPERTIES WILL_FAIL TRUE)
