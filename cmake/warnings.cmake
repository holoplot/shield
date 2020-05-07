function(enable_warnings TARGET SCOPE)
    if (APPLE OR UNIX)
        target_compile_options(${TARGET} ${SCOPE} -Wall -Wextra -Wpedantic -Wconversion)
    elseif(MSVC)
        target_compile_options(${TARGET} ${SCOPE} /W4)
    endif()
endfunction()

function(warnings_as_errors TARGET SCOPE)
    enable_warnings(${TARGET} ${SCOPE})

    if (APPLE OR UNIX)
        target_compile_options(${TARGET} ${SCOPE} -Werror)
    elseif(MSVC)
        target_compile_options(${TARGET} ${SCOPE} /WX)
    endif()
endfunction()
