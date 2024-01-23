/****************************************************************************
 *
 * Copyright (c) 2014 - 2021 Samsung Electronics Co., Ltd. All rights reserved
 *
 ****************************************************************************/

unsigned int ka_patch[] = {
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x600018f0, 0x6000024d, 0x6000027d, 0x60000281,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x60000285,
  0x00000000, 0x00000000, 0x60000289, 0x6000028d,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x8637bd05, 0x00000000, 0x60000100, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00000000, 0x00000000, 0x47804802,
  0xfebef000, 0x4770e010, 0x6000025d, 0x46012000,
  0x46034602, 0x46054604, 0x46074606, 0x46814680,
  0x46834682, 0x47704684, 0xe7fdbf30, 0x46c0e7fc,
  0x46c0e7fa, 0x46c0e7f8, 0x46c0e7f6, 0x46c0e7f4,
  0x20092381, 0x009b4902, 0x54c84a02, 0x46c04770,
  0x50000000, 0x50000204, 0x4b074906, 0xd0052800,
  0x7c404806, 0xd0012800, 0xe0002001, 0x54c82000,
  0x46c04770, 0x50000000, 0x00000205, 0x6000020c,
  0xb5104b07, 0x31fc0019, 0x3401690c, 0x690c1820,
  0xd4fc1a24, 0x691933fc, 0xd4fc1a09, 0x46c0bd10,
  0x50000000, 0x28003801, 0x4770d1fc, 0x4b0a2100,
  0x681cb510, 0x681c7221, 0x681c7261, 0x681c72a1,
  0x681c72e1, 0x681c6021, 0x42887321, 0x681bd002,
  0x73193101, 0x46c0bd10, 0x6000020c, 0x4b0a2100,
  0x681cb510, 0x681c73a1, 0x681c73e1, 0x681c7421,
  0x681c7461, 0x681c6061, 0x428874a1, 0x681bd002,
  0x74993101, 0x46c0bd10, 0x6000020c, 0x4b22b570,
  0x7c1b4c22, 0xb2d9203f, 0xd1062901, 0x35980025,
  0x4383682b, 0x602b430b, 0x0021e006, 0x680b3198,
  0x20024383, 0x600b4303, 0x20390021, 0x680b319c,
  0x43832540, 0x43033828, 0x0021600b, 0x680b31a8,
  0x432b300d, 0x21c0600b, 0x438b6fe3, 0x430b3940,
  0xf7ff67e3, 0x6fe3ff8d, 0x431d200a, 0x250167e5,
  0xff86f7ff, 0x6ee32104, 0x43ab0028, 0x6f2366e3,
  0x6723430b, 0xff7cf7ff, 0x6f232198, 0x6723430b,
  0x43286f60, 0xbd706760, 0x6000020c, 0x50000000,
  0x7013230b, 0x47184b00, 0x60000a95, 0x7013230b,
  0x47184b00, 0x600005b5, 0x7013230b, 0x47184b00,
  0x60000ee9, 0x2300b510, 0x22404904, 0xf0002005,
  0x2120febd, 0x33fc4b02, 0xbd106059, 0x60000e99,
  0xe000e000, 0x2601b570, 0x69eb4d23, 0x002c6a29,
  0x08db404b, 0x42332101, 0x2308d1f7, 0xd01b2800,
  0x421969e9, 0x69e9d137, 0x61e94319, 0x42196a21,
  0x0021d0fc, 0x31f82001, 0x4383680b, 0x600b3022,
  0xff2ef7ff, 0x6ee32102, 0x66e3438b, 0x686134fc,
  0x400b4b12, 0xe01e6063, 0x421869e8, 0x0028d01b,
  0x680330f8, 0x6003430b, 0x30fc0028, 0x420b6803,
  0x2308d0fc, 0x439969e1, 0x6a2161e1, 0xd1fc4219,
  0x20800021, 0x684b31fc, 0x43030140, 0x2102604b,
  0x430b6ee3, 0xbd7066e3, 0x50000000, 0xffffefff,
  0x230bb5f8, 0x70134c33, 0x4e336825, 0x2b027cab,
  0x7babd14d, 0x2b07b2db, 0x2b08d035, 0x2b01d03b,
  0x7ba3d141, 0x2b01b2db, 0x7c29d13d, 0x02097be8,
  0x63214301, 0x42196b21, 0x0031d01b, 0x690831fc,
  0x63616869, 0x42196a61, 0x6aa1d005, 0x1a096b63,
  0x42991a1b, 0x6b67d90d, 0x68184b20, 0x000b6859,
  0x21000002, 0xf0000038, 0x0909feb9, 0x6ba363a1,
  0x6a616573, 0x430b6b23, 0x23016473, 0x42197c69,
  0x7523d011, 0x7be8e00f, 0x42433801, 0xb2c04158,
  0xff68f7ff, 0x2101e007, 0x404b7c63, 0x7c607463,
  0xf7ffb2c0, 0x2300fe99, 0x330173ab, 0x201074ab,
  0x6bb36bb1, 0x009b4381, 0x430b4003, 0x7b2363b3,
  0x2b004a07, 0x7ba3d104, 0xd1012b00, 0xfe78f7ff,
  0x46c0bdf8, 0x6000020c, 0x50000000, 0x60000200,
  0x50000204, 0x2001230b, 0x4908b510, 0x6acb7013,
  0x43034a07, 0x4b0762cb, 0x29007b19, 0x7b9bd104,
  0xd1012b00, 0xfe5cf7ff, 0x46c0bd10, 0x50000000,
  0x50000204, 0x6000020c, 0x4b0321b0, 0x400169d8,
  0x6a1b61d9, 0x46c04770, 0x50000000, 0xb5104907,
  0x2307000c, 0x401834f8, 0x31fc6823, 0xb2db4303,
  0x680b6023, 0x42984003, 0xbd10d1fb, 0x50000000,
  0x4c17b510, 0x07db6a63, 0x2308d528, 0x002069e1,
  0x4259400b, 0x23074159, 0x1a5b30dc, 0x43196801,
  0x00206001, 0x680130e0, 0x428b4019, 0x0020d1fb,
  0x680130dc, 0x6003404b, 0xf7ff2007, 0x2110ffcf,
  0x430b69e3, 0x230161e3, 0x43196aa1, 0x6a6162a1,
  0xd1fc4219, 0x6aa32101, 0x62a3438b, 0x46c0bd10,
  0x50000000, 0xb5104907, 0x2307000c, 0x401834f8,
  0x31fc6823, 0xb2db4383, 0x680b6023, 0xd1fc4203,
  0x46c0bd10, 0x50000000, 0x4c08b570, 0xb2dd7ae3,
  0xd1092d02, 0xfe52f7ff, 0x49052003, 0x43836b0b,
  0x630b432b, 0x72e32300, 0x46c0bd70, 0x6000020c,
  0x50000000, 0xf7ffb5f8, 0xf7fffe41, 0x4d68ffe5,
  0x2b007ceb, 0x7d2bd102, 0xd0052b00, 0xf7ff2001,
  0x2300fea1, 0x752b74eb, 0x4c622101, 0x00206be3,
  0x63e3438b, 0x30d42340, 0x43196801, 0x20026001,
  0x43016f61, 0x69e16761, 0x43013044, 0x6a2161e1,
  0xd0fc4219, 0x20230026, 0xfdd2f7ff, 0xf7ff2001,
  0x2101fdbb, 0x36c00027, 0x37c46833, 0x6033438b,
  0x2004683b, 0x603b438b, 0xfdd4f7ff, 0x68332102,
  0x438b2004, 0x683b6033, 0x603b438b, 0xfdcaf7ff,
  0x68332110, 0x438b2004, 0x68296033, 0x7b4b0026,
  0x330136cc, 0x734bb2db, 0x7ccb6829, 0xb2db3301,
  0x215574cb, 0x438b6833, 0x68336033, 0x438b394b,
  0xf7ff6033, 0x682bfdaf, 0x2b017cdb, 0x21a0d903,
  0x438b6833, 0x20046033, 0xfda4f7ff, 0x26080021,
  0x680b31c0, 0x43b32024, 0x0021600b, 0x680b31c4,
  0x43832704, 0x2101600b, 0x38226fa3, 0x67a3430b,
  0xfd90f7ff, 0x6fa32002, 0x67a34303, 0x43396fa1,
  0x6f6367a1, 0x6763433b, 0x42036f63, 0x6f63d102,
  0xe00143b3, 0x43336f63, 0x67632702, 0xf7ff2002,
  0x2001fd79, 0xfd7af7ff, 0xf7ff2001, 0x4c1dfd8f,
  0x6fa30038, 0x43bb0026, 0xf7ff67a3, 0x2120fd6b,
  0x683336c0, 0x438b0038, 0xf7ff6033, 0x2140fd63,
  0x431f6fa3, 0x683367a7, 0x438b0027, 0x26016033,
  0x393c4b11, 0x605933fc, 0x6059310c, 0x683b37d4,
  0x433334c4, 0x6823603b, 0x00303908, 0x6023438b,
  0xfd36f7ff, 0x68232110, 0x6023438b, 0x3130683b,
  0x603b438b, 0xfdcef7ff, 0x0030732e, 0xbdf873ae,
  0x6000020c, 0x50000000, 0xe000e000, 0xf7ffb5f7,
  0x4c3dff0b, 0x2b007ce3, 0x2001d004, 0xfdcaf7ff,
  0x74e32300, 0x4c392102, 0x430b6f63, 0x69e36763,
  0x430b3140, 0x234061e3, 0x40196a21, 0x29409101,
  0x0025d1fa, 0xf7ff2023, 0x2001fd03, 0xfcecf7ff,
  0x26022101, 0x682b35c0, 0x438b2004, 0xf7ff602b,
  0x682bfd09, 0x43b32004, 0xf7ff602b, 0x2110fd03,
  0x682b0027, 0x438b37cc, 0x683b602b, 0x438b390b,
  0x603b2004, 0xfcf6f7ff, 0x683b210a, 0x438b2004,
  0xf7ff603b, 0x2108fcef, 0x682b2704, 0x438b0030,
  0x6fa3602b, 0x430b3907, 0xf7ff67a3, 0x6fa3fce3,
  0x43332001, 0x6fa367a3, 0x67a3433b, 0xfcdef7ff,
  0x00306fa3, 0x67a343b3, 0xfcd4f7ff, 0x682b2120,
  0x438b0030, 0xf7ff602b, 0x6fa3fccd, 0x43339901,
  0x682b67a3, 0x438b34d4, 0x602b4907, 0x7b436808,
  0xb2db3301, 0x20017343, 0x33fc4b05, 0x6823605f,
  0x60234303, 0xbdfe7308, 0x6000020c, 0x50000000,
  0xe000e000, 0xf7ffb570, 0xf7fffce1, 0x4d3afe85,
  0x2b007d2b, 0x2001d004, 0xfd44f7ff, 0x752b2300,
  0x4c362101, 0x00206be3, 0x63e3438b, 0x30d42340,
  0x43196801, 0x20446001, 0x430169e1, 0x6a2161e1,
  0xd0fc4219, 0x20230026, 0xfc7af7ff, 0xf7ff2001,
  0x2101fc63, 0x683336c4, 0x438b2004, 0xf7ff6033,
  0x2102fc81, 0x20046833, 0x6033438b, 0xfc7af7ff,
  0x20506829, 0x33017ccb, 0x74cbb2db, 0x33cc0023,
  0x43816819, 0x68296019, 0x29017cc9, 0x6819d903,
  0x43811800, 0x00216019, 0x31c42024, 0x4383680b,
  0x2104600b, 0x430b6f63, 0x6f636763, 0x079b1849,
  0x6f63d402, 0xe001438b, 0x430b6f63, 0x67630026,
  0xf7ff2001, 0x2108fc6b, 0x683336c4, 0x438b2001,
  0xf7ff6033, 0x2110fc35, 0x34d46833, 0x6033438b,
  0x33fc4b07, 0x68236059, 0x438b3130, 0xf7ff6023,
  0x2001fcc9, 0xbd7073a8, 0x6000020c, 0x50000000,
  0xe000e000, 0xb5f7230b, 0x4d422101, 0x6cee7013,
  0x4c416c2b, 0x642b430b, 0x2b007d63, 0x2300d016,
  0x7563002f, 0x69a06d2b, 0x37fc69e1, 0x68f99100,
  0x91011a18, 0x4a392300, 0xf0002100, 0x2300fbef,
  0xf0009a00, 0x9b01fbcb, 0x60f81818, 0xb2f16823,
  0x68217599, 0xb2db0a33, 0x6a6375cb, 0x1e594033,
  0x6b21418b, 0x4031b2db, 0x41811e48, 0xb2c92001,
  0xd0274206, 0x6a606d2f, 0xd00f2800, 0x1a386ae0,
  0x2001d404, 0x40336a63, 0xe0074003, 0x28006b20,
  0x6ba0d004, 0xd4011a38, 0x65686ae0, 0x6b04481e,
  0xd00f2c00, 0x1b3c6b84, 0x6b01d404, 0x2101400e,
  0xe0074031, 0x2c006a44, 0x6ac4d004, 0xd4011b3f,
  0x65686ac0, 0x2b004c14, 0x7b23d010, 0xd0152900,
  0xd1052b00, 0x2b007ba3, 0xf7ffd102, 0xe00ffdb3,
  0x2b007b23, 0xf7ffd104, 0xe009fe89, 0xd0072900,
  0x2b007ba3, 0xf7ffd104, 0xe001ff05, 0xd0f22b00,
  0x4a077b23, 0xd1042b00, 0x2b007ba3, 0xf7ffd101,
  0xbdf7fb77, 0x50000000, 0x6000020c, 0x000f4240,
  0x50000204, 0x4d19b5f8, 0x2b027aeb, 0x2601d02c,
  0x20084c17, 0x6b230021, 0x433331c0, 0x6d236323,
  0x61ab2704, 0x680b756e, 0x600b4303, 0x31c40021,
  0x2000680b, 0x600b433b, 0xfc24f7ff, 0x4b0d2100,
  0xf7ff54e1, 0x2198fcf9, 0x438b6f23, 0x6f236723,
  0x43bb3128, 0x6fe36723, 0x67e3438b, 0x6823349c,
  0x602343b3, 0x72eb2302, 0x46c0bdf8, 0x6000020c,
  0x50000000, 0x00000205, 0x4b10b510, 0x29007b19,
  0x3102d103, 0x39017359, 0x2100e001, 0x7b987359,
  0xd1042800, 0x73d83002, 0xd0092900, 0x2100e002,
  0xe00573d9, 0x2b027adb, 0xf7ffd007, 0xe004ffab,
  0x2b027adb, 0xf7ffd101, 0xbd10fd1f, 0x6000020c,
  0x4c1db5f8, 0x00232020, 0x681933c0, 0x43012512,
  0x60190020, 0x680130d4, 0x43a92600, 0x43293d10,
  0x21f46001, 0x50660049, 0x270a0021, 0x680831cc,
  0x60084338, 0x3f056808, 0x60084338, 0x68192008,
  0x60194301, 0x38056819, 0x60194301, 0x300d6819,
  0x60194301, 0x731e4b09, 0xffaef7ff, 0x003069e3,
  0x61e343ab, 0xfb12f7ff, 0x200423c0, 0x005b4904,
  0x380350c8, 0x46c0bdf8, 0x50000000, 0x6000020c,
  0xe000e000, 0x4c3fb5f0, 0x6825b085, 0x7b2b2600,
  0xd15d2b02, 0xb2db7a2b, 0xd0092b01, 0xd1532b07,
  0x38017a68, 0x41584243, 0xf7ffb2c0, 0xe04bfb8b,
  0xb2c97b21, 0xd1472901, 0x7a687aab, 0x4303021b,
  0x6a636263, 0xd034420b, 0x001e4b2f, 0x68286d1f,
  0x62a036fc, 0x69366b20, 0xd0054208, 0x6aa16b60,
  0x1b891bc0, 0xd9244288, 0x6d1f6aa1, 0x910069e3,
  0x4b269301, 0x68184a26, 0x23006859, 0x91039002,
  0x21000038, 0xfa9af000, 0x9a012300, 0xfa76f000,
  0x21009b00, 0x18301b9e, 0x9b039a02, 0xfa8ef000,
  0x62e10909, 0x42bb6ae3, 0x4b16d903, 0x4b166ad9,
  0x26016559, 0x6a584b13, 0x43016b19, 0x64414812,
  0x42317ae9, 0x74ded000, 0x722b2300, 0x732b3301,
  0x480d2420, 0x6b836b81, 0x009b43a1, 0x430b4023,
  0x2e006383, 0xf7ffd001, 0x4b06ff4b, 0x7b194a09,
  0xd1042900, 0x2b007b9b, 0xf7ffd101, 0xb005fa51,
  0x46c0bdf0, 0x6000020c, 0x50000000, 0x60000200,
  0x000f4240, 0x50000204, 0x4d20b5f8, 0x002e21c0,
  0x36d4002c, 0x34c46833, 0x6033430b, 0x39b06823,
  0x2002430b, 0xf7ff6023, 0x2108fa65, 0x20a06823,
  0x6023430b, 0x33cc002b, 0x27016819, 0x60194301,
  0x38506819, 0x60194301, 0x4b112100, 0xf7ff7399,
  0x2104feeb, 0x68232002, 0x6023430b, 0x433b6823,
  0x68236023, 0x60234303, 0x30066833, 0x60334303,
  0x200069eb, 0x61eb438b, 0xfa58f7ff, 0x201023c0,
  0x005b4904, 0x003850c8, 0x46c0bdf8, 0x50000000,
  0x6000020c, 0xe000e000, 0xb510230b, 0x4b0e7013,
  0x07496bd9, 0x2020d517, 0x31fc490c, 0x6bd96048,
  0x4301381f, 0x210263d9, 0x42086bd8, 0xf7ffd0fc,
  0x4b07ffa3, 0x7b194a07, 0xd1042900, 0x2b007b9b,
  0xf7ffd101, 0xbd10f9dd, 0x50000000, 0xe000e000,
  0x6000020c, 0x50000204, 0x4d2eb570, 0x33fc002b,
  0x23016998, 0x28043801, 0x4c2bd838, 0xf9acf000,
  0x22110a03, 0x7b21002b, 0x29002301, 0xf7ffd12e,
  0xe028fcbd, 0x23017ba1, 0xd1272900, 0xfd3af7ff,
  0x7b23e021, 0xd1052b00, 0x2b007ba3, 0xf7ffd102,
  0xe018fbd1, 0x2b007b23, 0x7ba3d0e9, 0xd0ed2b00,
  0xe0132300, 0x7b262301, 0x429eb2f6, 0xf7ffd10e,
  0x74e6fe8f, 0x2301e007, 0xb2f67ba6, 0xd105429e,
  0xff52f7ff, 0x23017526, 0xb2c34058, 0x31fc0029,
  0x232061cb, 0x431969e9, 0x6a2961e9, 0xd0fc4219,
  0x69eb2120, 0x61eb438b, 0xfe4ef7ff, 0x4a074b06,
  0x29007b19, 0x7b9bd104, 0xd1012b00, 0xf978f7ff,
  0x46c0bd70, 0x50000000, 0x6000020c, 0x50000204,
  0xb51021ff, 0x22404b04, 0x20067159, 0x49032300,
  0xf8ecf000, 0x46c0bd10, 0x6000020c, 0x60000409,
  0xb672b5f7, 0x210b2381, 0x009b4c49, 0x54e14a49,
  0x8f4ff3bf, 0x48494b48, 0x4b496899, 0x50c14d49,
  0x009b23c2, 0x23009300, 0x00184947, 0xf000220e,
  0x9500f8fb, 0x49452300, 0x22072001, 0xf8f4f000,
  0x27012398, 0x9300015b, 0x23004941, 0x221a2002,
  0xf8eaf000, 0x23009500, 0x2003493e, 0xf000221a,
  0x2001f8e3, 0xf89af000, 0x4b3c4d3b, 0x00284933,
  0x223c50cf, 0xf0002100, 0x4e39fa49, 0x00302100,
  0xf0002240, 0x602efa43, 0x682b2600, 0x682b735e,
  0x74ef74de, 0x746f752f, 0xffa2f7ff, 0x49310033,
  0x2240200d, 0xf892f000, 0x00300033, 0x2240492e,
  0xf88cf000, 0x492d0033, 0x22402002, 0xf886f000,
  0x200421c0, 0x00494b1d, 0x22405058, 0x49280033,
  0xf87cf000, 0x201021c0, 0x00494b18, 0x22405058,
  0x49240033, 0xf0003804, 0x2380f871, 0x021b2110,
  0x742f61eb, 0x20556b23, 0x6323438b, 0x310a2383,
  0x50e1009b, 0x390a6b23, 0x0021430b, 0x31cc6323,
  0x680b6027, 0x430334fc, 0x23a1600b, 0xf7ff61e3,
  0x4a04fd61, 0xf8ccf7ff, 0xbf30b662, 0x46c0e7fd,
  0x50000000, 0x50000204, 0x60000200, 0xe000e000,
  0x00000d08, 0x00001305, 0x60000000, 0x60000000,
  0x50000000, 0x58000000, 0x6000020c, 0x00000d94,
  0x60000000, 0x60000621, 0x600003fd, 0x60000cf5,
  0x600004d1, 0x600003f1, 0xb5100003, 0x4c053310,
  0x5119009b, 0x18184b04, 0x00db2380, 0x700218c0,
  0x46c0bd10, 0x60000100, 0xe000e000, 0x0004b513,
  0xf0002004, 0x2c00f85d, 0x4b05d101, 0x4b05e000,
  0x22079300, 0x49042300, 0xf0002004, 0xbd13f835,
  0x00001308, 0x00001008, 0x60000100, 0x0004b5f8,
  0x000e2000, 0x001d0017, 0xffe0f7ff, 0x4a100023,
  0x009b3310, 0x2280509e, 0x00d24e0e, 0x189b1933,
  0x701f2001, 0xffd2f7ff, 0x09630032, 0xd0072d00,
  0x2001211f, 0x40884021, 0x31a00019, 0x51880089,
  0x400c211f, 0x40a1391e, 0x009b3340, 0xbdf850d1,
  0x60000100, 0xe000e000, 0x2410b510, 0x43084321,
  0x490a4c09, 0xf3bf5060, 0x20018f4f, 0x99024082,
  0x0409021b, 0x430b4301, 0x23da431a, 0x50e2011b,
  0x8f6ff3bf, 0x46c0bd10, 0xe000e000, 0x00000d9c,
  0x4a074b06, 0x50984907, 0x505a2200, 0x8f4ff3bf,
  0x505a3104, 0x8f6ff3bf, 0x46c04770, 0xe000e000,
  0x00000d98, 0x00000d9c, 0x4671b402, 0x00490849,
  0x00495c09, 0xbc02448e, 0x46c04770, 0xd1112b00,
  0xd10f2a00, 0xd1002900, 0xd0022800, 0x43c92100,
  0xb4071c08, 0xa1024802, 0x90021840, 0x46c0bd03,
  0x000001f5, 0x4668b403, 0x9802b501, 0xf832f000,
  0x469e9b01, 0xbc0cb002, 0x46c04770, 0x464fb5f0,
  0xb4c04646, 0x0c360416, 0x00334699, 0x0c2c0405,
  0x0c150c07, 0x437e4363, 0x4365436f, 0x19ad0c1c,
  0x469c1964, 0xd90342a6, 0x025b2380, 0x44474698,
  0x0c254663, 0x041d19ef, 0x434a464b, 0x0c2d4343,
  0x19640424, 0x19c91899, 0xbc0c0020, 0x46994690,
  0x46c0bdf0, 0x464db5f0, 0x46444656, 0xb4f0465f,
  0xb0834692, 0x000d0004, 0x428b4699, 0xd02cd82f,
  0x46504649, 0xf8b0f000, 0x00060029, 0xf0000020,
  0x1a33f8ab, 0x3b204698, 0xd500469b, 0x4653e074,
  0x4093465a, 0x4653001f, 0x40934642, 0x42af001e,
  0xd026d829, 0x1ba4465b, 0x2b0041bd, 0xe079da00,
  0x23002200, 0x93019200, 0x465a2301, 0x93014093,
  0x46422301, 0x93004093, 0x4282e019, 0x2200d9d0,
  0x92002300, 0x9b0c9301, 0xd0012b00, 0x605d601c,
  0x99019800, 0xbc3cb003, 0x46994690, 0x46ab46a2,
  0x42a3bdf0, 0x2200d9d6, 0x92002300, 0x46439301,
  0xd0e82b00, 0x087207fb, 0x4646431a, 0xe00e087b,
  0xd10142ab, 0xd80c42a2, 0x419d1aa4, 0x19242001,
  0x2100416d, 0x18243e01, 0x2e00414d, 0x42abd006,
  0x3e01d9ee, 0x416d1924, 0xd1f82e00, 0x9800465b,
  0x19009901, 0x2b004169, 0x002bdb22, 0x40d3465a,
  0x4644002a, 0x001c40e2, 0x0015465b, 0xdb2c2b00,
  0x409e0026, 0x00260033, 0x40be4647, 0x1a800032,
  0x90004199, 0xe7ae9101, 0x23204642, 0x46521a9b,
  0x464140da, 0x464a0013, 0x0017408a, 0xe782431f,
  0x23204642, 0x002a1a9b, 0x409a4646, 0x40f30023,
  0xe7d54313, 0x23204642, 0x1a9b2100, 0x91002200,
  0x22019201, 0x920140da, 0x4642e782, 0x00262320,
  0x40de1a9b, 0x46b4002f, 0x46664097, 0x4333003b,
  0x46c0e7c9, 0x46c04770, 0x2900b510, 0xf000d103,
  0x3020f807, 0x1c08e002, 0xf802f000, 0x46c0bd10,
  0x2301211c, 0x4298041b, 0x0c00d301, 0x0a1b3910,
  0xd3014298, 0x39080a00, 0x4298091b, 0x0900d301,
  0xa2023904, 0x18405c10, 0x46c04770, 0x02020304,
  0x01010101, 0x00000000, 0x00000000, 0x18820003,
  0xd0024293, 0x33017019, 0x4770e7fa
};

unsigned int RAMRP_len = 1339;
