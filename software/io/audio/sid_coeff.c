/*
 * sid_coeff.c
 *
 *  Created on: Aug 20, 2016
 *      Author: gideon
 */

#include <stdint.h>
#include "iomap.h"

uint16_t sid6581_filter_coefficients[] = {
        0x0329, 0x0328, 0x0328, 0x0327, 0x0327, 0x0326, 0x0326, 0x0325, 0x0324, 0x0324, 0x0323, 0x0323, 0x0322, 0x0322, 0x0321, 0x0320,
        0x0332, 0x0332, 0x0331, 0x0330, 0x0330, 0x032f, 0x032f, 0x032e, 0x032e, 0x032d, 0x032c, 0x032c, 0x032b, 0x032b, 0x032a, 0x032a,
        0x033b, 0x033b, 0x033a, 0x033a, 0x0339, 0x0338, 0x0338, 0x0337, 0x0337, 0x0336, 0x0336, 0x0335, 0x0334, 0x0334, 0x0333, 0x0333,
        0x0344, 0x0344, 0x0343, 0x0343, 0x0342, 0x0341, 0x0341, 0x0340, 0x0340, 0x033f, 0x033f, 0x033e, 0x033e, 0x033d, 0x033c, 0x033c,
        0x0356, 0x0355, 0x0354, 0x0353, 0x0351, 0x0350, 0x034f, 0x034e, 0x034d, 0x034c, 0x034b, 0x0349, 0x0348, 0x0347, 0x0346, 0x0345,
        0x0368, 0x0367, 0x0366, 0x0365, 0x0364, 0x0362, 0x0361, 0x0360, 0x035f, 0x035e, 0x035d, 0x035c, 0x035b, 0x0359, 0x0358, 0x0357,
        0x037a, 0x0379, 0x0378, 0x0377, 0x0376, 0x0375, 0x0374, 0x0372, 0x0371, 0x0370, 0x036f, 0x036e, 0x036d, 0x036c, 0x036a, 0x0369,
        0x038d, 0x038b, 0x038a, 0x0389, 0x0388, 0x0387, 0x0386, 0x0385, 0x0383, 0x0382, 0x0381, 0x0380, 0x037f, 0x037e, 0x037d, 0x037c,
        0x03b8, 0x03b6, 0x03b3, 0x03b0, 0x03ad, 0x03aa, 0x03a7, 0x03a4, 0x03a2, 0x039f, 0x039c, 0x0399, 0x0396, 0x0393, 0x0391, 0x038e,
        0x03e6, 0x03e3, 0x03e0, 0x03dd, 0x03db, 0x03d8, 0x03d5, 0x03d2, 0x03cf, 0x03cc, 0x03c9, 0x03c7, 0x03c4, 0x03c1, 0x03be, 0x03bb,
        0x0413, 0x0411, 0x040e, 0x040b, 0x0408, 0x0405, 0x0402, 0x03ff, 0x03fd, 0x03fa, 0x03f7, 0x03f4, 0x03f1, 0x03ee, 0x03ec, 0x03e9,
        0x0441, 0x043e, 0x043b, 0x0438, 0x0436, 0x0433, 0x0430, 0x042d, 0x042a, 0x0427, 0x0424, 0x0422, 0x041f, 0x041c, 0x0419, 0x0416,
        0x04aa, 0x04a3, 0x049d, 0x0496, 0x048f, 0x0488, 0x0481, 0x047a, 0x0474, 0x046d, 0x0466, 0x045f, 0x0458, 0x0451, 0x044b, 0x0444,
        0x0517, 0x0511, 0x050a, 0x0503, 0x04fc, 0x04f5, 0x04ee, 0x04e8, 0x04e1, 0x04da, 0x04d3, 0x04cc, 0x04c5, 0x04bf, 0x04b8, 0x04b1,
        0x0585, 0x057e, 0x0577, 0x0570, 0x0569, 0x0562, 0x055c, 0x0555, 0x054e, 0x0547, 0x0540, 0x053a, 0x0533, 0x052c, 0x0525, 0x051e,
        0x05f2, 0x05eb, 0x05e4, 0x05dd, 0x05d7, 0x05d0, 0x05c9, 0x05c2, 0x05bb, 0x05b4, 0x05ae, 0x05a7, 0x05a0, 0x0599, 0x0592, 0x058b,
        0x072c, 0x0717, 0x0703, 0x06ee, 0x06da, 0x06c5, 0x06b1, 0x069d, 0x0688, 0x0674, 0x065f, 0x064b, 0x0636, 0x0622, 0x060d, 0x05f9,
        0x0874, 0x085f, 0x084b, 0x0836, 0x0822, 0x080d, 0x07f9, 0x07e4, 0x07d0, 0x07bb, 0x07a7, 0x0792, 0x077e, 0x0769, 0x0755, 0x0740,
        0x09bb, 0x09a7, 0x0992, 0x097e, 0x0969, 0x0955, 0x0940, 0x092c, 0x0917, 0x0903, 0x08ee, 0x08da, 0x08c5, 0x08b1, 0x089c, 0x0888,
        0x0b03, 0x0aee, 0x0ada, 0x0ac5, 0x0ab1, 0x0a9c, 0x0a88, 0x0a74, 0x0a5f, 0x0a4b, 0x0a36, 0x0a22, 0x0a0d, 0x09f9, 0x09e4, 0x09d0,
        0x0dd3, 0x0da4, 0x0d76, 0x0d47, 0x0d19, 0x0cea, 0x0cbb, 0x0c8d, 0x0c5e, 0x0c2f, 0x0c01, 0x0bd2, 0x0ba3, 0x0b75, 0x0b46, 0x0b17,
        0x10bd, 0x108f, 0x1060, 0x1032, 0x1003, 0x0fd4, 0x0fa6, 0x0f77, 0x0f48, 0x0f1a, 0x0eeb, 0x0ebc, 0x0e8e, 0x0e5f, 0x0e30, 0x0e02,
        0x13a8, 0x1379, 0x134b, 0x131c, 0x12ed, 0x12bf, 0x1290, 0x1261, 0x1233, 0x1204, 0x11d5, 0x11a7, 0x1178, 0x1149, 0x111b, 0x10ec,
        0x1692, 0x1664, 0x1635, 0x1606, 0x15d8, 0x15a9, 0x157a, 0x154c, 0x151d, 0x14ee, 0x14c0, 0x1491, 0x1462, 0x1434, 0x1405, 0x13d7,
        0x1b6c, 0x1b1c, 0x1acc, 0x1a7d, 0x1a2d, 0x19dd, 0x198e, 0x193e, 0x18ee, 0x189f, 0x184f, 0x17ff, 0x17b0, 0x1760, 0x1711, 0x16c1,
        0x2066, 0x2016, 0x1fc7, 0x1f77, 0x1f27, 0x1ed8, 0x1e88, 0x1e38, 0x1de9, 0x1d99, 0x1d49, 0x1cfa, 0x1caa, 0x1c5a, 0x1c0b, 0x1bbb,
        0x26b5, 0x264f, 0x25e9, 0x2582, 0x251c, 0x24b5, 0x244f, 0x23e9, 0x2382, 0x231c, 0x22b5, 0x224f, 0x21e9, 0x2182, 0x211c, 0x20b5,
        0x2d1c, 0x2cb5, 0x2c4f, 0x2be9, 0x2b82, 0x2b1c, 0x2ab5, 0x2a4f, 0x29e9, 0x2982, 0x291c, 0x28b5, 0x284f, 0x27e9, 0x2782, 0x271c,
        0x34d8, 0x345a, 0x33dd, 0x3360, 0x32e3, 0x3266, 0x31e9, 0x316b, 0x30ee, 0x3071, 0x2ff4, 0x2f77, 0x2efa, 0x2e7d, 0x2dff, 0x2d82,
        0x3caa, 0x3c2d, 0x3bb0, 0x3b33, 0x3ab5, 0x3a38, 0x39bb, 0x393e, 0x38c1, 0x3844, 0x37c7, 0x3749, 0x36cc, 0x364f, 0x35d2, 0x3555,
        0x467d, 0x45dd, 0x453e, 0x449f, 0x43ff, 0x4360, 0x42c1, 0x4222, 0x4182, 0x40e3, 0x4044, 0x3fa4, 0x3f05, 0x3e66, 0x3dc6, 0x3d27,
        0x54b9, 0x5381, 0x5248, 0x5110, 0x4fff, 0x4eee, 0x4ddd, 0x4ccc, 0x4c16, 0x4b60, 0x4aaa, 0x49f4, 0x493e, 0x4888, 0x47d2, 0x471c,
        0x4ac8, 0x4a31, 0x4999, 0x4901, 0x486a, 0x47d2, 0x473a, 0x46a2, 0x460b, 0x4573, 0x44db, 0x4444, 0x438e, 0x42d8, 0x4222, 0x416b,
        0x54b5, 0x5416, 0x5377, 0x52d8, 0x5238, 0x5199, 0x50fa, 0x505a, 0x4fbb, 0x4f1c, 0x4e7d, 0x4ddd, 0x4d3e, 0x4c9f, 0x4bff, 0x4b60,
        0x5d55, 0x5ccc, 0x5c44, 0x5bbb, 0x5b33, 0x5aaa, 0x5a21, 0x5999, 0x5910, 0x5888, 0x57ff, 0x5777, 0x56ee, 0x5666, 0x55dd, 0x5555,
        0x65dd, 0x6555, 0x64cc, 0x6444, 0x63bb, 0x6333, 0x62aa, 0x6221, 0x6199, 0x6110, 0x6088, 0x5fff, 0x5f77, 0x5eee, 0x5e66, 0x5ddd,
        0x6e10, 0x6d8e, 0x6d0b, 0x6c88, 0x6c05, 0x6b82, 0x6aff, 0x6a7c, 0x69fa, 0x6977, 0x68f4, 0x6871, 0x67ee, 0x676b, 0x66e9, 0x6666,
        0x763e, 0x75bb, 0x7538, 0x74b5, 0x7432, 0x73b0, 0x732d, 0x72aa, 0x7227, 0x71a4, 0x7121, 0x709f, 0x701c, 0x6f99, 0x6f16, 0x6e93,
        0x7e6b, 0x7de8, 0x7d66, 0x7ce3, 0x7c60, 0x7bdd, 0x7b5a, 0x7ad7, 0x7a55, 0x79d2, 0x794f, 0x78cc, 0x7849, 0x77c6, 0x7744, 0x76c1,
        0x8699, 0x8616, 0x8593, 0x8510, 0x848d, 0x840b, 0x8388, 0x8305, 0x8282, 0x81ff, 0x817c, 0x80fa, 0x8077, 0x7ff4, 0x7f71, 0x7eee,
        0x8f71, 0x8ee3, 0x8e55, 0x8dc6, 0x8d38, 0x8caa, 0x8c1c, 0x8b8d, 0x8aff, 0x8a71, 0x89e3, 0x8955, 0x88c6, 0x8838, 0x87aa, 0x871c,
        0x9855, 0x97c6, 0x9738, 0x96aa, 0x961c, 0x958d, 0x94ff, 0x9471, 0x93e3, 0x9355, 0x92c6, 0x9238, 0x91aa, 0x911c, 0x908d, 0x8fff,
        0xa138, 0xa0aa, 0xa01c, 0x9f8d, 0x9eff, 0x9e71, 0x9de3, 0x9d55, 0x9cc6, 0x9c38, 0x9baa, 0x9b1c, 0x9a8d, 0x99ff, 0x9971, 0x98e3,
        0xaa1c, 0xa98d, 0xa8ff, 0xa871, 0xa7e3, 0xa755, 0xa6c6, 0xa638, 0xa5aa, 0xa51c, 0xa48d, 0xa3ff, 0xa371, 0xa2e3, 0xa255, 0xa1c6,
        0xb2ff, 0xb271, 0xb1e3, 0xb154, 0xb0c6, 0xb038, 0xafaa, 0xaf1c, 0xae8d, 0xadff, 0xad71, 0xace3, 0xac54, 0xabc6, 0xab38, 0xaaaa,
        0xbbe3, 0xbb54, 0xbac6, 0xba38, 0xb9aa, 0xb91c, 0xb88d, 0xb7ff, 0xb771, 0xb6e3, 0xb654, 0xb5c6, 0xb538, 0xb4aa, 0xb41c, 0xb38d,
        0xc4c6, 0xc438, 0xc3aa, 0xc31c, 0xc28d, 0xc1ff, 0xc171, 0xc0e3, 0xc054, 0xbfc6, 0xbf38, 0xbeaa, 0xbe1c, 0xbd8d, 0xbcff, 0xbc71,
        0xcdaa, 0xcd1c, 0xcc8d, 0xcbff, 0xcb71, 0xcae3, 0xca54, 0xc9c6, 0xc938, 0xc8aa, 0xc81c, 0xc78d, 0xc6ff, 0xc671, 0xc5e3, 0xc554,
        0xd338, 0xd2e3, 0xd28d, 0xd238, 0xd1e3, 0xd18d, 0xd138, 0xd0e3, 0xd08d, 0xd038, 0xcfe3, 0xcf8d, 0xcf38, 0xcee3, 0xce8d, 0xce38,
        0xd88d, 0xd838, 0xd7e3, 0xd78d, 0xd738, 0xd6e3, 0xd68d, 0xd638, 0xd5e3, 0xd58d, 0xd538, 0xd4e3, 0xd48d, 0xd438, 0xd3e3, 0xd38d,
        0xdde3, 0xdd8d, 0xdd38, 0xdce3, 0xdc8d, 0xdc38, 0xdbe3, 0xdb8d, 0xdb38, 0xdae3, 0xda8d, 0xda38, 0xd9e3, 0xd98d, 0xd938, 0xd8e3,
        0xe338, 0xe2e3, 0xe28d, 0xe238, 0xe1e3, 0xe18d, 0xe138, 0xe0e3, 0xe08d, 0xe038, 0xdfe3, 0xdf8d, 0xdf38, 0xdee3, 0xde8d, 0xde38,
        0xe738, 0xe6f9, 0xe6bb, 0xe67c, 0xe63e, 0xe5ff, 0xe5c0, 0xe582, 0xe543, 0xe505, 0xe4c6, 0xe488, 0xe449, 0xe40a, 0xe3cc, 0xe38d,
        0xeb21, 0xeae3, 0xeaa4, 0xea65, 0xea27, 0xe9e8, 0xe9aa, 0xe96b, 0xe92d, 0xe8ee, 0xe8af, 0xe871, 0xe832, 0xe7f4, 0xe7b5, 0xe777,
        0xef0a, 0xeecc, 0xee8d, 0xee4f, 0xee10, 0xedd2, 0xed93, 0xed54, 0xed16, 0xecd7, 0xec99, 0xec5a, 0xec1b, 0xebdd, 0xeb9e, 0xeb60,
        0xf2f4, 0xf2b5, 0xf276, 0xf238, 0xf1f9, 0xf1bb, 0xf17c, 0xf13e, 0xf0ff, 0xf0c0, 0xf082, 0xf043, 0xf005, 0xefc6, 0xef88, 0xef49,
        0xf532, 0xf510, 0xf4ee, 0xf4cc, 0xf4aa, 0xf488, 0xf465, 0xf443, 0xf421, 0xf3ff, 0xf3dd, 0xf3bb, 0xf399, 0xf376, 0xf354, 0xf332,
        0xf754, 0xf732, 0xf710, 0xf6ee, 0xf6cc, 0xf6aa, 0xf688, 0xf665, 0xf643, 0xf621, 0xf5ff, 0xf5dd, 0xf5bb, 0xf599, 0xf576, 0xf554,
        0xf976, 0xf954, 0xf932, 0xf910, 0xf8ee, 0xf8cc, 0xf8aa, 0xf888, 0xf865, 0xf843, 0xf821, 0xf7ff, 0xf7dd, 0xf7bb, 0xf799, 0xf776,
        0xfb99, 0xfb76, 0xfb54, 0xfb32, 0xfb10, 0xfaee, 0xfacc, 0xfaaa, 0xfa88, 0xfa65, 0xfa43, 0xfa21, 0xf9ff, 0xf9dd, 0xf9bb, 0xf999,
        0xfcbd, 0xfcac, 0xfc9a, 0xfc89, 0xfc78, 0xfc67, 0xfc56, 0xfc44, 0xfc33, 0xfc22, 0xfc11, 0xfc00, 0xfbee, 0xfbdd, 0xfbcc, 0xfbbb,
        0xfdd0, 0xfdbf, 0xfdae, 0xfd9c, 0xfd8b, 0xfd7a, 0xfd69, 0xfd58, 0xfd46, 0xfd35, 0xfd24, 0xfd13, 0xfd02, 0xfcf0, 0xfcdf, 0xfcce,
        0xfee3, 0xfed2, 0xfec1, 0xfeb0, 0xfe9e, 0xfe8d, 0xfe7c, 0xfe6b, 0xfe5a, 0xfe48, 0xfe37, 0xfe26, 0xfe15, 0xfe04, 0xfdf2, 0xfde1,
        0xfff6, 0xffe5, 0xffd4, 0xffc3, 0xffb2, 0xffa0, 0xff8f, 0xff7e, 0xff6d, 0xff5c, 0xff4a, 0xff39, 0xff28, 0xff17, 0xff06, 0xfef4 };

void set_sid_coefficients(volatile uint8_t *filter_ram)
{
//    volatile uint8_t *filter_ram = (volatile uint8_t *)(SID_BASE + 0x800);
    for (int i=0; i<1024; i++) {
        uint16_t value = sid6581_filter_coefficients[i ^ 15]; // columns should be from right to left.. legacy from Xilinx
        *(filter_ram++) = (value & 0xFF);
        *(filter_ram++) = (value >> 8);
    }
}
