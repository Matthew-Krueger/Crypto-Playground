add_executable(Crypto-Playground CryptoPlayground.cpp CryptoPlayground.hpp)

add_subdirectory(API)

add_dependencies(Crypto-Playground CryptoPlayground::Dependencies CryptoPlayground::PGAPI)
target_link_libraries(Crypto-Playground CryptoPlayground::Dependencies CryptoPlayground::PGAPI)

add_executable(CryptoPlayground::App ALIAS Crypto-Playground)