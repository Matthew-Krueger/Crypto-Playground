/*
 *  Crypto Playground to do Crypto fun :)
 *  Copyright (C) 2022 Matthew Krueger <contact@matthewkrueger.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "BigDecimal.hpp"
#include <sstream>

namespace CryptoPlayground::API{

    BigDecimal::BigDecimal() {

        m_Ones.push_back(0);
        m_Decimal.push_back(0);

    }

    BigDecimal::BigDecimal(double value) {

        std::ostringstream oss;
        oss << value;
        std::string str = oss.str();

        size_t decimal  = str.find('.');
        m_Ones.reserve(decimal);
        m_Decimal.reserve(str.length()-decimal);

        for(char currentChar:str){
            if(currentChar == '.') break;
            char currentCharNullTerm[2] = {currentChar,'\0'};
            m_Ones.insert(m_Ones.begin(), std::stoi(currentCharNullTerm));
        }

        for(size_t i=decimal+1;i<str.length(); ++i){
            char currentCharNullTerm[2] = {str[i],'\0'};
            m_Ones.push_back(std::stoi(currentCharNullTerm));
        }

    }

    BigDecimal::BigDecimal(long long int value) {

    }

    BigDecimal::BigDecimal(const BigDecimal &other) {

    }

    std::ostream &BigDecimal::operator<<(std::ostream &out) {
        return out;
    }

    void BigDecimal::operator+(const BigDecimal &other) {

    }

    void BigDecimal::operator-(const BigDecimal &other) {

    }

    void BigDecimal::operator*(const BigDecimal &other) {

    }

    void BigDecimal::operator/(const BigDecimal &other) {

    }

    BigDecimal &BigDecimal::operator=(BigDecimal other) {
        swap(other);
        return *this;
    }

    void BigDecimal::swap(BigDecimal &other) {

    }
}