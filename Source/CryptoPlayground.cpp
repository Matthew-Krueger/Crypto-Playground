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

#include "CryptoPlayground.hpp"

#define APP_FW_INCLUDE_MAIN
#include "AppFramework/MainCreator.hpp"

AppFramework::Application* AppFramework::createApplication(){

    return new CryptoPlayground::CryptoPlaygroundApp();

}

namespace CryptoPlayground{

    CryptoPlaygroundApp::CryptoPlaygroundApp() {

    }

    CryptoPlaygroundApp::~CryptoPlaygroundApp() {

    }

    int CryptoPlaygroundApp::run() {

        std::cout << "I run!" << std::endl;
        return 0;
    }

}