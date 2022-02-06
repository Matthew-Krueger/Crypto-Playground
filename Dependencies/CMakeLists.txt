add_subdirectory(Application-Framework)

add_library(Crypto-Playground-Dependencies STATIC null.cpp)
target_include_directories(Crypto-Playground-Dependencies PUBLIC Application-Framework/Source/include)

add_dependencies(Crypto-Playground-Dependencies Application-Framework)
target_link_libraries(Crypto-Playground-Dependencies Application-Framework)

add_library(CryptoPlayground::Dependencies ALIAS Crypto-Playground-Dependencies)