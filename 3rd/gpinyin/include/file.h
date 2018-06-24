#ifndef TK_FILE_H
#define TK_FILE_H

#include "base/mem.h"
#include "misc/new.hpp"

#ifdef ___BUILD_MODEL___
#include <stdio.h>
#else
#include "base/utils.h"
#include "base/rom_fs.h"
#define fopen rom_fopen
#define fread rom_fread
#define fwrite rom_fwrite
#define fclose rom_fclose
#define ftell rom_ftell
#define ferror rom_ferror
#define fseek rom_fseek
#define feof rom_feof
#define FILE rom_file_t
#endif /*___BUILD_MODEL___*/

#define printf
#define snprintf tk_snprintf

#endif /*TK_FILE_H*/
