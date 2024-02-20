#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        UTF8
 * Language Count: 2
 * String Count:   21
 *****************************************************************************/

/*****************************************************************************
 * string table data
 * 
 * this table contains the raw character data for each string
 * 
 * unsigned short - number of indices in the table
 * unsigned short - number of languages in the table
 * 
 * index array (size = number of indices * number of languages
 * 
 * for each index in the array:
 *   unsigned byte - the font ID for the index
 *   unsigned byte[3] - the offset of the string codepoint data in
 *                      the table
 * 
 * string data is found by jumping to the index offset from the start
 * of the table
 * 
 * string data entry:
 *     unsigned short - length of the string in bytes (encoding dependent)
 *     codepoint data - the string data
 ****************************************************************************/

const uint8_t stringTable_data[1358] =
{
    0x15,0x00,0x02,0x00,0x00,0xAC,0x00,0x00,0x01,0xE8,0x00,0x00,0x00,0x20,0x01,0x00,
    0x01,0x3A,0x01,0x00,0x00,0x56,0x01,0x00,0x01,0x90,0x01,0x00,0x00,0xC6,0x01,0x00,
    0x01,0xD2,0x01,0x00,0x00,0xE4,0x01,0x00,0x01,0xFA,0x01,0x00,0x00,0x08,0x02,0x00,
    0x01,0x0C,0x02,0x00,0x00,0x12,0x02,0x00,0x01,0x1C,0x02,0x00,0x00,0x24,0x02,0x00,
    0x01,0x30,0x02,0x00,0x00,0x42,0x02,0x00,0x01,0x48,0x02,0x00,0x00,0x50,0x02,0x00,
    0x01,0x58,0x02,0x00,0x00,0x62,0x02,0x00,0x01,0xB2,0x02,0x00,0x00,0xE8,0x02,0x00,
    0x01,0xFE,0x02,0x00,0x00,0x14,0x03,0x00,0x01,0x3E,0x03,0x00,0x00,0x64,0x03,0x00,
    0x01,0x92,0x03,0x00,0x00,0xC8,0x03,0x00,0x01,0xE0,0x03,0x00,0x00,0xF4,0x03,0x00,
    0x01,0x26,0x04,0x00,0x00,0x60,0x04,0x00,0x01,0x74,0x04,0x00,0x00,0x82,0x04,0x00,
    0x01,0x90,0x04,0x00,0x00,0x9E,0x04,0x00,0x01,0xA6,0x04,0x00,0x00,0xAE,0x04,0x00,
    0x01,0xC8,0x04,0x00,0x00,0xDE,0x04,0x00,0x01,0x18,0x05,0x00,0x39,0x00,0x50,0x72,
    0x65,0x73,0x73,0x20,0x74,0x68,0x69,0x73,0x20,0x62,0x75,0x74,0x74,0x6F,0x6E,0x20,
    0x74,0x6F,0x20,0x64,0x72,0x61,0x77,0x20,0x75,0x6E,0x63,0x6F,0x6D,0x70,0x72,0x65,
    0x73,0x73,0x65,0x64,0x20,0x52,0x41,0x57,0x20,0x69,0x6D,0x61,0x67,0x65,0x20,0x66,
    0x72,0x6F,0x6D,0x20,0x53,0x51,0x49,0x00,0x36,0x00,0xE6,0x8C,0x89,0xE6,0xAD,0xA4,
    0xE6,0x8C,0x89,0xE9,0x88,0x95,0xE5,0x8F,0xAF,0xE9,0x87,0x8D,0xE7,0xB9,0xAA,0xE5,
    0xA4,0x96,0xE9,0x83,0xA8,0xE5,0xAD,0x98,0xE5,0x84,0xB2,0xE7,0x9A,0x84,0xE6,0x9C,
    0xAA,0xE5,0xA3,0x93,0xE7,0xB8,0xAE,0x52,0x41,0x57,0xE5,0x9C,0x96,0xE5,0x83,0x8F,
    0x18,0x00,0x45,0x72,0x61,0x73,0x65,0x20,0x26,0x20,0x55,0x70,0x64,0x61,0x74,0x65,
    0x0A,0x53,0x51,0x49,0x20,0x46,0x6C,0x61,0x73,0x68,0x1A,0x00,0xE6,0x93,0xA6,0xE9,
    0x99,0xA4,0xE5,0x92,0x8C,0xE6,0x9B,0xB4,0xE6,0x96,0xB0,0x0A,0x53,0x51,0x49,0x20,
    0xE9,0x96,0x83,0xE5,0xAD,0x98,0x37,0x00,0x50,0x72,0x65,0x73,0x73,0x20,0x74,0x68,
    0x69,0x73,0x20,0x62,0x75,0x74,0x74,0x6F,0x6E,0x20,0x74,0x6F,0x20,0x64,0x72,0x61,
    0x77,0x20,0x52,0x4C,0x45,0x20,0x63,0x6F,0x6D,0x70,0x72,0x65,0x73,0x73,0x65,0x64,
    0x20,0x69,0x6D,0x61,0x67,0x65,0x20,0x66,0x72,0x6F,0x6D,0x20,0x53,0x51,0x49,0x00,
    0x33,0x00,0xE6,0x8C,0x89,0xE6,0xAD,0xA4,0xE6,0x8C,0x89,0xE9,0x88,0x95,0xE5,0x8F,
    0xAF,0xE9,0x87,0x8D,0xE7,0xB9,0xAA,0xE5,0xA4,0x96,0xE9,0x83,0xA8,0xE5,0xAD,0x98,
    0xE5,0x84,0xB2,0xE7,0x9A,0x84,0x52,0x4C,0x45,0xE5,0xA3,0x93,0xE7,0xB8,0xAE,0xE5,
    0x9C,0x96,0xE5,0x83,0x8F,0x00,0x0A,0x00,0x4A,0x50,0x45,0x47,0x20,0x49,0x6D,0x61,
    0x67,0x65,0x10,0x00,0x4A,0x50,0x45,0x47,0xE5,0xA3,0x93,0xE7,0xB8,0xAE,0xE5,0x9C,
    0x96,0xE5,0x83,0x8F,0x13,0x00,0x52,0x65,0x73,0x74,0x61,0x72,0x74,0x20,0x41,0x70,
    0x70,0x6C,0x69,0x63,0x61,0x74,0x69,0x6F,0x6E,0x00,0x0C,0x00,0xE9,0x87,0x8D,0xE5,
    0x95,0x9F,0xE6,0x87,0x89,0xE7,0x94,0xA8,0x02,0x00,0x4E,0x6F,0x03,0x00,0xE4,0xB8,
    0x8D,0x00,0x08,0x00,0x44,0x69,0x73,0x61,0x62,0x6C,0x65,0x64,0x06,0x00,0xE9,0x97,
    0x9C,0xE6,0x8E,0x89,0x09,0x00,0x50,0x4E,0x47,0x20,0x49,0x6D,0x61,0x67,0x65,0x00,
    0x0F,0x00,0x50,0x4E,0x47,0xE5,0xA3,0x93,0xE7,0xB8,0xAE,0xE5,0x9C,0x96,0xE5,0x83,
    0x8F,0x00,0x03,0x00,0x59,0x65,0x73,0x00,0x06,0x00,0xE6,0x98,0xAF,0xE7,0x9A,0x84,
    0x05,0x00,0x44,0x6F,0x6E,0x65,0x21,0x00,0x07,0x00,0xE7,0xB5,0x90,0xE6,0x9D,0x9F,
    0x21,0x00,0x4D,0x00,0x50,0x72,0x65,0x73,0x73,0x20,0x74,0x68,0x65,0x20,0x69,0x6D,
    0x61,0x67,0x65,0x20,0x74,0x6F,0x20,0x63,0x68,0x61,0x6E,0x67,0x65,0x20,0x74,0x68,
    0x65,0x20,0x6C,0x61,0x6E,0x67,0x75,0x61,0x67,0x65,0x0A,0x20,0x61,0x6E,0x64,0x20,
    0x72,0x65,0x74,0x72,0x69,0x65,0x76,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6E,0x61,
    0x6C,0x6C,0x79,0x20,0x73,0x74,0x6F,0x72,0x65,0x64,0x20,0x67,0x6C,0x79,0x70,0x68,
    0x73,0x00,0x33,0x00,0xE6,0x8C,0x89,0xE5,0x9C,0x96,0xE7,0x89,0x87,0xE6,0x9B,0xB4,
    0xE6,0x94,0xB9,0xE8,0xAA,0x9E,0xE8,0xA8,0x80,0xE4,0xB8,0xA6,0xE6,0xAA,0xA2,0xE7,
    0xB4,0xA2,0xE5,0xA4,0x96,0xE9,0x83,0xA8,0xE5,0xAD,0x98,0xE5,0x84,0xB2,0xE7,0x9A,
    0x84,0xE5,0xAD,0x97,0xE5,0xBD,0xA2,0x00,0x14,0x00,0x52,0x4C,0x45,0x20,0x43,0x6F,
    0x6D,0x70,0x72,0x65,0x73,0x73,0x65,0x64,0x20,0x49,0x6D,0x61,0x67,0x65,0x13,0x00,
    0x52,0x41,0x57,0x2B,0x52,0x4C,0x45,0xE5,0xA3,0x93,0xE7,0xB8,0xAE,0xE5,0x9C,0x96,
    0xE5,0x83,0x8F,0x00,0x28,0x00,0x54,0x68,0x69,0x73,0x20,0x77,0x69,0x6C,0x6C,0x20,
    0x45,0x52,0x41,0x53,0x45,0x20,0x74,0x68,0x65,0x20,0x53,0x51,0x49,0x20,0x66,0x6C,
    0x61,0x73,0x68,0x2E,0x20,0x43,0x6F,0x6E,0x74,0x69,0x6E,0x75,0x65,0x3F,0x24,0x00,
    0xE9,0x80,0x99,0xE5,0xB0,0x87,0xE6,0x93,0xA6,0xE9,0x99,0xA4,0x20,0x53,0x51,0x49,
    0x20,0xE9,0x96,0x83,0xE5,0xAD,0x98,0xE3,0x80,0x82,0x20,0xE7,0xB9,0xBC,0xE7,0xBA,
    0x8C,0xEF,0xBC,0x9F,0x2C,0x00,0x50,0x72,0x65,0x73,0x73,0x20,0x74,0x6F,0x20,0x64,
    0x72,0x61,0x77,0x20,0x4A,0x50,0x45,0x47,0x20,0x63,0x6F,0x6D,0x70,0x72,0x65,0x73,
    0x73,0x65,0x64,0x20,0x69,0x6D,0x61,0x67,0x65,0x20,0x66,0x72,0x6F,0x6D,0x20,0x53,
    0x51,0x49,0x34,0x00,0xE6,0x8C,0x89,0xE6,0xAD,0xA4,0xE6,0x8C,0x89,0xE9,0x88,0x95,
    0xE5,0x8F,0xAF,0xE9,0x87,0x8D,0xE7,0xB9,0xAA,0xE5,0xA4,0x96,0xE9,0x83,0xA8,0xE5,
    0xAD,0x98,0xE5,0x84,0xB2,0xE7,0x9A,0x84,0x4A,0x50,0x45,0x47,0xE5,0xA3,0x93,0xE7,
    0xB8,0xAE,0xE5,0x9C,0x96,0xE5,0x83,0x8F,0x16,0x00,0x55,0x6E,0x63,0x6F,0x6D,0x70,
    0x72,0x65,0x73,0x73,0x65,0x64,0x20,0x52,0x41,0x57,0x20,0x49,0x6D,0x61,0x67,0x65,
    0x12,0x00,0xE6,0x9C,0xAA,0xE5,0xA3,0x93,0xE7,0xB8,0xAE,0x52,0x41,0x57,0xE5,0x9C,
    0x96,0xE5,0x83,0x8F,0x2F,0x00,0x50,0x72,0x65,0x73,0x73,0x20,0x74,0x6F,0x20,0x64,
    0x72,0x61,0x77,0x20,0x70,0x61,0x6C,0x65,0x74,0x74,0x65,0x20,0x63,0x6F,0x6D,0x70,
    0x72,0x65,0x73,0x73,0x65,0x64,0x20,0x69,0x6D,0x61,0x67,0x65,0x20,0x66,0x72,0x6F,
    0x6D,0x20,0x53,0x51,0x49,0x00,0x37,0x00,0xE6,0x8C,0x89,0xE6,0xAD,0xA4,0xE6,0x8C,
    0x89,0xE9,0x88,0x95,0xE5,0x8F,0xAF,0xE9,0x87,0x8D,0xE7,0xB9,0xAA,0xE5,0xA4,0x96,
    0xE9,0x83,0xA8,0xE5,0xAD,0x98,0xE5,0x84,0xB2,0xE7,0x9A,0x84,0x50,0x61,0x6C,0x65,
    0x74,0x74,0x65,0xE5,0xA3,0x93,0xE7,0xB8,0xAE,0xE5,0x9C,0x96,0xE5,0x83,0x8F,0x00,
    0x11,0x00,0x41,0x70,0x70,0x6C,0x69,0x63,0x61,0x74,0x69,0x6F,0x6E,0x20,0x53,0x65,
    0x74,0x75,0x70,0x00,0x0C,0x00,0xE6,0x87,0x89,0xE7,0x94,0xA8,0xE8,0xA8,0xAD,0xE7,
    0xBD,0xAE,0x0B,0x00,0x41,0x70,0x70,0x6C,0x69,0x63,0x61,0x74,0x69,0x6F,0x6E,0x00,
    0x0C,0x00,0xE6,0x87,0x89,0xE7,0x94,0xA8,0xE7,0xA8,0x8B,0xE5,0xBA,0x8F,0x05,0x00,
    0x53,0x65,0x74,0x75,0x70,0x00,0x06,0x00,0xE8,0xA8,0xAD,0xE7,0xBD,0xAE,0x18,0x00,
    0x50,0x61,0x6C,0x65,0x74,0x74,0x65,0x20,0x43,0x6F,0x6D,0x70,0x72,0x65,0x73,0x73,
    0x65,0x64,0x20,0x49,0x6D,0x61,0x67,0x65,0x13,0x00,0x50,0x61,0x6C,0x65,0x74,0x74,
    0x65,0xE5,0xA3,0x93,0xE7,0xB8,0xAE,0xE5,0x9C,0x96,0xE5,0x83,0x8F,0x00,0x37,0x00,
    0x50,0x72,0x65,0x73,0x73,0x20,0x74,0x68,0x69,0x73,0x20,0x62,0x75,0x74,0x74,0x6F,
    0x6E,0x20,0x74,0x6F,0x20,0x64,0x72,0x61,0x77,0x20,0x50,0x4E,0x47,0x20,0x63,0x6F,
    0x6D,0x70,0x72,0x65,0x73,0x73,0x65,0x64,0x20,0x69,0x6D,0x61,0x67,0x65,0x20,0x66,
    0x72,0x6F,0x6D,0x20,0x53,0x51,0x49,0x00,0x33,0x00,0xE6,0x8C,0x89,0xE6,0xAD,0xA4,
    0xE6,0x8C,0x89,0xE9,0x88,0x95,0xE5,0x8F,0xAF,0xE9,0x87,0x8D,0xE7,0xB9,0xAA,0xE5,
    0xA4,0x96,0xE9,0x83,0xA8,0xE5,0xAD,0x98,0xE5,0x84,0xB2,0xE7,0x9A,0x84,0x50,0x4E,
    0x47,0xE5,0xA3,0x93,0xE7,0xB8,0xAE,0xE5,0x9C,0x96,0xE5,0x83,0x8F,0x00,
};

/* font asset pointer list */
leFont* fontList[3] =
{
    (leFont*)&NotoSans_Regular,
    (leFont*)&NotoSansCJKtc_Regular,
    (leFont*)&NotoSans_Bold,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        1358, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_UTF8 // encoding standard
};


// string list
leTableString string_DrawRaw;
leTableString string_SettingsDownload;
leTableString string_DrawRLE;
leTableString string_ImageIsJPEG;
leTableString string_Reboot;
leTableString string_No;
leTableString string_DisabledString;
leTableString string_ImageIsPNG;
leTableString string_Yes;
leTableString string_Done;
leTableString string_TitleString;
leTableString string_ImageIsRLE;
leTableString string_SQIUpdateWarning;
leTableString string_DrawJpeg;
leTableString string_ImageIsRaw;
leTableString string_DrawPaletteCompressed;
leTableString string_DemoConfig;
leTableString string_ApplicationString;
leTableString string_SetupString;
leTableString string_ImageIsPaletteCompressed;
leTableString string_DrawPNG;

void initializeStrings(void)
{
    leTableString_Constructor(&string_DrawRaw, stringID_DrawRaw);
    leTableString_Constructor(&string_SettingsDownload, stringID_SettingsDownload);
    leTableString_Constructor(&string_DrawRLE, stringID_DrawRLE);
    leTableString_Constructor(&string_ImageIsJPEG, stringID_ImageIsJPEG);
    leTableString_Constructor(&string_Reboot, stringID_Reboot);
    leTableString_Constructor(&string_No, stringID_No);
    leTableString_Constructor(&string_DisabledString, stringID_DisabledString);
    leTableString_Constructor(&string_ImageIsPNG, stringID_ImageIsPNG);
    leTableString_Constructor(&string_Yes, stringID_Yes);
    leTableString_Constructor(&string_Done, stringID_Done);
    leTableString_Constructor(&string_TitleString, stringID_TitleString);
    leTableString_Constructor(&string_ImageIsRLE, stringID_ImageIsRLE);
    leTableString_Constructor(&string_SQIUpdateWarning, stringID_SQIUpdateWarning);
    leTableString_Constructor(&string_DrawJpeg, stringID_DrawJpeg);
    leTableString_Constructor(&string_ImageIsRaw, stringID_ImageIsRaw);
    leTableString_Constructor(&string_DrawPaletteCompressed, stringID_DrawPaletteCompressed);
    leTableString_Constructor(&string_DemoConfig, stringID_DemoConfig);
    leTableString_Constructor(&string_ApplicationString, stringID_ApplicationString);
    leTableString_Constructor(&string_SetupString, stringID_SetupString);
    leTableString_Constructor(&string_ImageIsPaletteCompressed, stringID_ImageIsPaletteCompressed);
    leTableString_Constructor(&string_DrawPNG, stringID_DrawPNG);
}