
#include <grub/i386/pc/vesa_modes_table.h>

/* This is the reverse of the table in [linux]/Documentation/fb/vesafb.txt
   plus a few more modes based on the table in
   http://en.wikipedia.org/wiki/VESA_BIOS_Extensions  */
struct grub_vesa_mode_table_entry
grub_vesa_mode_table[GRUB_VESA_MODE_TABLE_END
		     - GRUB_VESA_MODE_TABLE_START + 1] =
  {
    { 640, 400, 8 },		/* 0x300 */
    { 640, 480, 8 },		/* 0x301 */
    { 800, 600, 4 },		/* 0x302 */
    { 800, 600, 8 },		/* 0x303 */
    { 1024, 768, 4 },	/* 0x304 */
    { 1024, 768, 8 },	/* 0x305 */
    { 1280, 1024, 4 },	/* 0x306 */
    { 1280, 1024, 8 },	/* 0x307 */
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 320, 200, 15 },	/* 0x30d */
    { 320, 200, 16 },	/* 0x30e */
    { 320, 200, 24 },	/* 0x30f */
    { 640, 480, 15 },	/* 0x310 */
    { 640, 480, 16 },	/* 0x311 */
    { 640, 480, 24 },	/* 0x312 */
    { 800, 600, 15 },	/* 0x313 */
    { 800, 600, 16 },	/* 0x314 */
    { 800, 600, 24 },	/* 0x315 */
    { 1024, 768, 15 },	/* 0x316 */
    { 1024, 768, 16 },	/* 0x317 */
    { 1024, 768, 24 },	/* 0x318 */
    { 1280, 1024, 15 },	/* 0x319 */
    { 1280, 1024, 16 },	/* 0x31a */
    { 1280, 1024, 24 },	/* 0x31b */
    { 1600, 1200, 8 },	/* 0x31c */
    { 1600, 1200, 15 },	/* 0x31d */
    { 1600, 1200, 16 },	/* 0x31e */
    { 1600, 1200, 24 },	/* 0x31f */
    { 0, 0, 0 },
    { 640, 400, 15 },	/* 0x321 */
    { 640, 400, 16 },	/* 0x322 */
    { 640, 400, 24 },	/* 0x323 */
    { 640, 400, 32 },	/* 0x324 */
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 640, 480, 32 },	/* 0x329 */
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 896, 672, 8 },		/* 0x32f */
    { 896, 672, 15 },	/* 0x330 */
    { 896, 672, 16 },	/* 0x331 */
    { 896, 672, 24 },	/* 0x332 */
    { 896, 672, 32 },	/* 0x333 */
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 1600, 1200, 32 },	/* 0x342 */
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 0, 0, 0 },
    { 1440, 900, 8 },	/* 0x360 */
    { 1440, 900, 15 },	/* 0x361 */
    { 1440, 900, 16 },	/* 0x362 */
    { 1440, 900, 24 },	/* 0x363 */
    { 1440, 900, 32 },	/* 0x364 */
    { 1152, 720, 8 },	/* 0x365 */
    { 1152, 720, 15 },	/* 0x366 */
    { 1152, 720, 16 },	/* 0x367 */
    { 1152, 720, 24 },	/* 0x368 */
    { 1152, 720, 32 },	/* 0x369 */
    { 1024, 640, 8 },	/* 0x36a */
    { 1024, 640, 15 },	/* 0x36b */
    { 1024, 640, 16 },	/* 0x36c */
    { 1024, 640, 24 },	/* 0x36d */
    { 1024, 640, 32 },	/* 0x36e */
    { 800, 500, 8 },		/* 0x36f */
    { 800, 500, 15 },	/* 0x370 */
    { 800, 500, 16 },	/* 0x371 */
    { 800, 500, 24 },	/* 0x372 */
    { 800, 500, 32 },	/* 0x373 */
  };
