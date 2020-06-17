
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

#ifndef GRIT_BG_H
#define GRIT_BG_H

#define bgTilesLen 76
extern const unsigned char bgTiles[76];

#define bgMapLen 288
extern const unsigned char bgMap[288];

#define bgPalLen 380
extern const unsigned char bgPal[380];

#endif // GRIT_BG_H

//}}BLOCK(bg)
