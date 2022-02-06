add_library(Crypto-Playground-API STATIC Spreadsheet.cpp Spreadsheet.hpp BigDecimal.cpp BigDecimal.hpp)

add_dependencies(Crypto-Playground-API CryptoPlayground::Dependencies)
target_link_libraries(Crypto-Playground-API CryptoPlayground::Dependencies)

add_library(CryptoPlayground::PGAPI ALIAS Crypto-Playground-API)