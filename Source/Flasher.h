/*
 MotorolaFlash - https://github.com/tim241/MotorolaFlash
 Copyright (C) 2020 Tim Wanders <tim241@mailbox.org>
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef FLASHER_H
#define FLASHER_H

#include "FlashingStep.h" // FlashingStep

#include <QString>    // QString
#include <list>       // std::list
#include <tinyxml2.h> // tinyxml2

class Flasher
{
  private:
    std::list<FlashingStep> flashingSteps;

  public:
    bool LoadFile(QString);
};

#endif // FLASHER_H