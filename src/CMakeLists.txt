add_executable(PowerFlow)

target_sources(PowerFlow
                PRIVATE
                main.cpp)

target_compile_options(PowerFlow PRIVATE
                $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
                $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -pedantic -Werror>
              )
