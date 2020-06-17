
//{{BLOCK(bg)

//======================================================================
//
//	bg, 256x256@8, 
//	+ palette 190 entries, lz77 compressed
//	+ 7 tiles (t|f reduced) lz77 compressed
//	+ regular map (flat), lz77 compressed, 32x32 
//	Total size: 380 + 76 + 288 = 744
//
//	Time-stamp: 2020-06-17, 12:19:00
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.15
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned char bgTiles[76] __attribute__((aligned(4))) __attribute__((visibility("hidden")))=
{
	0x10,0xC0,0x01,0x00,0x3C,0x00,0x00,0xF0,0x01,0xF0,0x01,0xF0,0x01,0x50,0x09,0x0F,
	0x0F,0xF3,0xF0,0x01,0xF0,0x01,0xF0,0x01,0x50,0x09,0xFF,0xFF,0xF0,0x01,0xF0,0x01,
	0xFB,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xE0,0x01,0x00,0xF0,0x13,0xF0,0x01,
	0xFE,0xF0,0x01,0x00,0x38,0x41,0x0A,0xC0,0x47,0xF0,0x07,0xF0,0x07,0xA0,0x07,0xFE,
	0x78,0xFE,0xF0,0x01,0xF0,0x01,0xF0,0x01,0x50,0x09,0x00,0x00,
};

const unsigned char bgMap[288] __attribute__((aligned(4))) __attribute__((visibility("hidden")))=
{
	0x10,0x00,0x08,0x00,0x3D,0x01,0x00,0xF0,0x01,0xF0,0x01,0xF0,0x01,0x10,0x0D,0x00,
	0x00,0x01,0x1F,0x01,0x00,0x02,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x3F,0x00,0x23,
	0x19,0x03,0x00,0x04,0xF0,0x01,0x60,0x09,0x03,0x04,0xF0,0x3F,0xB7,0xB0,0x7F,0x05,
	0xF0,0xA5,0x80,0x07,0x05,0xF0,0x3F,0xF0,0x3F,0x20,0x15,0xBF,0x10,0x1A,0x06,0x40,
	0x01,0x50,0x10,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xFF,0xF0,0x3F,0xF0,0x3F,
	0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xFF,0xD1,0x3F,0xD0,
	0x37,0x50,0x47,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xFF,0xF0,0x3F,
	0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF1,0x3F,0xFF,0xF1,

	0x3F,0xF1,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xFF,
	0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x3F,0xF3,0x35,0xF3,0x3F,
	0xC6,0xF0,0x3F,0x63,0xBF,0x08,0x04,0x0C,0xF0,0x01,0x50,0x09,0x03,0x7F,0x0C,0xF0,
	0x3F,0xF4,0x3F,0xF0,0x01,0xF0,0x01,0x90,0x3F,0xF0,0x01,0xF0,0x01,0xFF,0xF0,0x01,
	0x54,0xBF,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xFF,0xF0,
	0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xFF,
	0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,
	0xFF,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,

	0x01,0xFF,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,
	0xF0,0x01,0xF8,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0x90,0x01,0xFF,0xFF,0xFF,
};

const unsigned char bgPal[380] __attribute__((aligned(4))) __attribute__((visibility("hidden")))=
{
	0x10,0x00,0x02,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x02,0x10,0x02,0x00,0x00,0x40,
	0x10,0x40,0x00,0x42,0x18,0x63,0x00,0x10,0x42,0x1F,0x00,0xE0,0x03,0xFF,0x03,0x00,
	0x00,0x7C,0x1F,0x7C,0xE0,0x7F,0x10,0x0E,0x00,0x04,0x00,0x07,0x00,0x0B,0x00,0x0F,
	0x00,0x00,0x13,0x00,0x17,0x00,0x1B,0x00,0x1F,0x00,0x00,0x80,0x00,0xE0,0x00,0x60,
	0x01,0xE0,0x01,0x00,0x60,0x02,0xE0,0x02,0x60,0x03,0xE0,0x03,0x00,0x84,0x00,0xE7,
	0x00,0x6B,0x01,0xEF,0x01,0x04,0x73,0x02,0xF7,0x02,0x7B,0x10,0x37,0x10,0x00,0x00,
	0x1C,0x00,0x2C,0x00,0x3C,0x00,0x4C,0x00,0x00,0x5C,0x00,0x6C,0x00,0x7C,0x04,0x10,
	0x07,0x00,0x1C,0x0B,0x2C,0x0F,0x3C,0x13,0x4C,0x17,0x00,0x5C,0x1B,0x6C,0x1F,0x7C,

	0x80,0x10,0xE0,0x00,0x1C,0x60,0x2D,0xE0,0x3D,0x60,0x4E,0xE0,0x00,0x5E,0x60,0x6F,
	0xE0,0x7F,0x42,0x08,0x63,0x00,0x0C,0xA5,0x14,0xE7,0x1C,0x29,0x25,0x6B,0x00,0x2D,
	0xAD,0x35,0xEF,0x3D,0x31,0x46,0x73,0x00,0x4E,0xB5,0x56,0xF7,0x5E,0x39,0x67,0x7B,
	0x00,0x6F,0xBD,0x77,0xFF,0x7F,0x1F,0x00,0x7F,0x00,0x00,0xFF,0x00,0x7F,0x01,0xFF,
	0x01,0x7F,0x08,0x02,0xFF,0x02,0x7F,0x00,0x99,0xFC,0x03,0xF8,0x00,0x03,0xF4,0x03,
	0xF0,0x03,0xEC,0x03,0xE8,0x20,0x03,0xE4,0x00,0x81,0xE0,0x0F,0xE0,0x1F,0xE0,0x00,
	0x2F,0xE0,0x3F,0xE0,0x4F,0xE0,0x5F,0xE0,0x80,0x00,0x51,0x80,0x7F,0x00,0x7F,0x80,
	0x7E,0x00,0x00,0x7E,0x80,0x7D,0x00,0x7D,0x80,0x7C,0x00,0x00,0x7C,0x03,0x7C,0x07,

	0x7C,0x0B,0x7C,0x0F,0x02,0x7C,0x13,0x7C,0x17,0x7C,0x1B,0x00,0xD5,0x1F,0x00,0x70,
	0x1F,0x60,0x1F,0x50,0x1F,0x40,0x1F,0x00,0x30,0x1F,0x20,0x1F,0x10,0x1F,0x00,0x00,
	0xFF,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x01,0xF0,
	0x01,0xE4,0xF0,0x01,0xF0,0x01,0x80,0x07,0x21,0x04,0x11,0x43,0x84,0x10,0x00,0xA5,
	0x14,0xC6,0x18,0xE7,0x1C,0x08,0x21,0x00,0x29,0x25,0x4A,0x29,0x6B,0x2D,0x8C,0x31,
	0x00,0xAD,0x35,0xCE,0x39,0xEF,0x3D,0x10,0x42,0x00,0x31,0x46,0x52,0x4A,0x73,0x4E,
	0x94,0x52,0x00,0xB5,0x56,0xD6,0x5A,0xF7,0x5E,0x18,0x63,0x00,0x39,0x67,0x5A,0x6B,
	0x7B,0x6F,0x9C,0x73,0x00,0xBD,0x77,0xDE,0x7B,0x60,0x7E,0x00,
};

//}}BLOCK(bg)
