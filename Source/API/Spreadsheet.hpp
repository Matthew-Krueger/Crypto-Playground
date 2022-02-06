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


#ifndef CRYPTO_PLAYGROUND_SPREADSHEET_HPP
#define CRYPTO_PLAYGROUND_SPREADSHEET_HPP

#include <cstdint>
#include <iostream>
#include <string>

namespace CryptoPlayground::API{

    class CellData{
    public:
        CellData();
        virtual ~CellData();



        virtual std::ostream& operator<<(std::ostream& out) { out << ""; return out; };

    };

    class Cell{
    public:
        Cell(std::shared_ptr<CellData> data);
        ~Cell();
    private:
        std::shared_ptr<CellData> data;
    };

    /**
     * Is a column major spreadsheet.
     */
    class Spreadsheet{
    public:
        struct Dimensions{
        public:
            union{
                struct{
                    size_t x;
                    size_t y;
                };
                struct{
                    size_t u;
                    size_t v;
                };
                struct{
                    size_t rows;
                    size_t columns;
                };
            };
        };

        Spreadsheet(std::string name = "Untitled Sheet", const Dimensions& dimensions = {1,1});
        Spreadsheet(const Spreadsheet& other);

        Spreadsheet& operator=(Spreadsheet other);
        void swap(Spreadsheet& other);

    private:
        std::string m_Name;
        Dimensions m_Dimensions;

    };

}

#endif //CRYPTO_PLAYGROUND_SPREADSHEET_HPP
