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

#include "Spreadsheet.hpp"

#include <iostream>
#include "../CryptoPlayground.hpp"

namespace CryptoPlayground::API{


    Spreadsheet::Spreadsheet(std::string name, const Spreadsheet::Dimensions& dimensions) : m_Name(std::move(name)), m_Dimensions(dimensions){

    }

    Spreadsheet::Spreadsheet(const Spreadsheet &other) {



    }


    Spreadsheet& Spreadsheet::operator=(Spreadsheet other){

        swap(other);

        return *this;
    }

    void Spreadsheet::swap(Spreadsheet &other) {

    }

}