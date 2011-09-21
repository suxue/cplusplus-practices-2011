/* This file is (c) 2008-2011 Konstantin Isakov <ikm@users.berlios.de>
 * Part of GoldenDict. Licensed under GPLv3 or later, see the LICENSE file */

#ifndef __RUSSIANTRANSLIT_HH_INCLUDED__
#define __RUSSIANTRANSLIT_HH_INCLUDED__

#include "dictionary.hh"

// Support for Russian transliteration
namespace RussianTranslit {

sptr< Dictionary::Class > makeDictionary() throw( std::exception );

}

#endif

