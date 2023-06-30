/*
 *  Copyright (c) 2023 Baro-coder
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU GENERAL PUBLIC LICENSE v3. See `logs.c` for details.
 */

#pragma once

/*
    INTERFACE USAGE:

    csvp::csvRead(const char* filepath)     ->  csvp::DataFrame
    csvp::csvWrite(const char* filepath)    ->  void

*/

#include "public/cell.hpp"
#include "public/dataFrame.hpp"


namespace csvp {
    int getTwo();
};