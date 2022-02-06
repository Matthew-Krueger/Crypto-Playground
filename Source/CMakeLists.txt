add_executable(Crypto-Playground CryptoPlayground.cpp CryptoPlayground.hpp)


add_dependencies(Crypto-Playground Application-Framework)
target_link_libraries(Crypto-Playground Application-Framework)