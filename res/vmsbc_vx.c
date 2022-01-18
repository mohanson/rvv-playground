#include <stddef.h>
#include <stdint.h>

void vmsbc_vx(size_t n, const uint64_t x[][4], const uint64_t y, uint8_t z[12]);

int main() {
  uint64_t x[96][4] = {{0x709c5aefc79829ae, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xf0fe55be95a18d13, 0x2c1fb5204d248917, 0x14d93f0c55095499, 0x0ec6680cabb95f09},
                       {0x31523358d080e093, 0x0000000000000080, 0x0000020000000000, 0x6edd225600000000},
                       {0x7a1a34c97902041c, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x000000000dd2966b, 0x58aee9fdc3f41b74, 0x14d93f0c55095499, 0x00004a9e26b7f794},
                       {0x3d0e482377794618, 0x31a7445bdf8bcb5c, 0x02ab7bb54e687499, 0xb040414dd8c98a14},
                       {0x06632b492b30b548, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x8f09996552504a5d, 0x0000000001000000, 0x0000800000000000, 0x0000800000000000},
                       {0x0000000000000001, 0xf48119b103954df1, 0x05ada4e53975b451, 0xf48119b103954df1},
                       {0x3ae780409e179f37, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x3b4de2fabe6d6476, 0xb9e2a99fdb7b2948, 0x0000000000400000, 0xb1db9b0fecbfaabe},
                       {0x9420000000000000, 0x93d7d7a9d87056f0, 0x2c1fb5204d248917, 0x37269c228e8e3db1},
                       {0x27ccee55d28359a0, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x00000bea6a6af755, 0x000000000000015b, 0x3b0d936889b10a5d, 0x4fcf7212bebfdd89},
                       {0x8a4a182923bdf75a, 0x7fc92593c865b4c2, 0x27429c30e8b6cff7, 0x000000a3714b9ad2},
                       {0x587094b5e234e9d4, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x686f332000000000, 0x4a6c986967d5ace8, 0x58aee9fdc3f41b74, 0x00000000000075da},
                       {0xcb9848f06e9659f6, 0xc7dee68fffbaf900, 0xbe55668178139c8e, 0x86ddce906c8cdb4d},
                       {0x7eeea29b0150a374, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x00000000000075da, 0x2e00000000000000, 0xf3fbe985738811dd, 0x000000000000015b},
                       {0xe35a000000000000, 0x68323fe289df33d1, 0x0000000000000000, 0xbd6192029dd91d60},
                       {0x134c86de5c2a6ecb, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xdfd3a0870f60e072, 0xc10a152d71cb3f16, 0x6465f271027abfa8, 0x6465f271027abfa8},
                       {0x1234769364d9eac9, 0x90e1bc8ba22d3294, 0xc7dee68fffbaf900, 0x314320aa7da5b1ef},
                       {0x1d29a95ec0d6aabd, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x9480583abdfb5837, 0xc7dee68fffbaf900, 0xc3bd5e2cd52318a8, 0x2d21e3da342cd6be},
                       {0xca9d54bd4e78980e, 0xf5bad73c74be6d8a, 0x63eb500cce126b70, 0x8a4a182923bdf75a},
                       {0x110325009a3cc450, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x0000000000000004, 0x14d93f0c55095499, 0x0000020000000000, 0x6edd225600000000},
                       {0x4ab9cfc9a41744c4, 0x79780d4e5b2b3b2a, 0x6465f271027abfa8, 0xfad4dc0000000000},
                       {0x204ae0db45d73c67, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x8a4a182923bdf75a, 0x7fc92593c865b4c2, 0x8f09996552504a5d, 0x8f09996552504a5d},
                       {0x25474d793f2c7d32, 0x00004a9e26b7f794, 0x2c1fb5204d248917, 0xea59a91078581c00},
                       {0x281d97ed188562e0, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xffffffffffffffff, 0x8c91e2fe14041a34, 0x90e1bc8ba22d3294, 0xfad4dc0000000000},
                       {0x0000800000000000, 0x90e1bc8ba22d3294, 0xfad4dc0000000000, 0x6edd225600000000},
                       {0x2797dbdf839c12c8, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x62daff171a9fae42, 0xca9d54bd4e78980e, 0x0000000000000000, 0xd251a40a022b9000},
                       {0x0000000000000067, 0x0ec6680cabb95f09, 0xe5baa16ee5b5419e, 0xa6a669d1baba633e},
                       {0x087aeb9bf68630f4, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x0000000000000001, 0xc3bd5e2cd52318a8, 0x58aee9fdc3f41b74, 0xcb9848f06e9659f6},
                       {0x4ab9cfc9a41744c4, 0x0000020000000000, 0x9420000000000000, 0x00000000000075da},
                       {0x2c43e84a958fc93c, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xfad4dc0000000000, 0x90e1bc8ba22d3294, 0x8000000000000000, 0x0000000000002000},
                       {0x31a7445bdf8bcb5c, 0x0f812a265e560f2b, 0xd251a40a022b9000, 0x4a6c986967d5ace8},
                       {0x0194748b98bc23aa, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xa73c905bcbc01878, 0xbd6192029dd91d60, 0x61fd04828c93ce01, 0x3d0e482377794618},
                       {0x4ab9cfc9a41744c4, 0xffffffffffffffff, 0x0f812a265e560f2b, 0x4a6c986967d5ace8},
                       {0x67ebb85d9c2b606c, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xd0abd7d3688aa0d7, 0xbe55668178139c8e, 0x0000000000000004, 0x686f332000000000},
                       {0x2d21e3da342cd6be, 0xbad28e0ca5854070, 0x996d1b60923c18a6, 0x0000000000000080},
                       {0x7651858e5d7f3584, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x90e1bc8ba22d3294, 0x34f2a050c605b6b0, 0x93d7d7a9d87056f0, 0xbe55668178139c8e},
                       {0xf3fbe985738811dd, 0x2e00000000000000, 0xf5bad73c74be6d8a, 0x8c91e2fe14041a34},
                       {0x0e90888c89ebda97, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x38be984c83ce8648, 0x314320aa7da5b1ef, 0x0000000000000000, 0xf3fbe985738811dd},
                       {0x8c91e2fe14041a34, 0xc3bd5e2cd52318a8, 0x16b3a918e4278c9d, 0x37269c228e8e3db1},
                       {0x1f8afc1bdaf26c70, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x0000000000000040, 0x3b4de2fabe6d6476, 0x00004a9e26b7f794, 0x6d159abfb3030000},
                       {0x8b4eb00000000000, 0x3b4de2fabe6d6476, 0x9420000000000000, 0x000000000000000d},
                       {0x3b53c8fe75683616, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xf2a6b292a535dc4e, 0x0100000000000000, 0x0000000000000004, 0x86ddce906c8cdb4d},
                       {0x8f09996552504a5d, 0x000000000003ed82, 0xca9d54bd4e78980e, 0x90e1bc8ba22d3294},
                       {0x2b5277765b5e8819, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xc3bd5e2cd52318a8, 0x0da24e08451a8d1a, 0x0000000000000000, 0x000000000dd2966b},
                       {0xdf09e5c90a990b56, 0x7dc2ae94e4000000, 0xf2a6b292a535dc4e, 0xff98837fda2a5bdf},
                       {0x2c167bc867c1a54b, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xf5bad73c74be6d8a, 0x000000a3714b9ad2, 0x05ada4e53975b451, 0xb9e2a99fdb7b2948},
                       {0xb040414dd8c98a14, 0x4fcf7212bebfdd89, 0xbe55668178139c8e, 0xa6a669d1baba633e},
                       {0x170c39aeeddec2f9, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x996d1b60923c18a6, 0x000000000000015b, 0xea2177d8d5100000, 0x0000000000000001},
                       {0x8c91e2fe14041a34, 0x38be984c83ce8648, 0xaf29109cc0000000, 0xff98837fda2a5bdf},
                       {0x35f703c1de706e36, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x000000000000015b, 0x8b4eb00000000000, 0xb040414dd8c98a14, 0x4cf560811e3465c5},
                       {0xff98837fda2a5bdf, 0x7f2e6910bdea3ffd, 0xc7dee68fffbaf900, 0xdf9a26c8470349dd},
                       {0x69fd9ca370cc4521, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xdfd3a0870f60e072, 0xc7dee68fffbaf900, 0x38be984c83ce8648, 0xd27d2fde3497614c},
                       {0xea59a91078581c00, 0x8c91e2fe14041a34, 0x0100000000000000, 0x0f812a265e560f2b},
                       {0x7aa032950ae9d927, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xffffffffffffffff, 0xb040414dd8c98a14, 0x31523358d080e093, 0xe35a000000000000},
                       {0xbebf0929f41aa230, 0xf3fbe985738811dd, 0x31523358d080e093, 0x1735808ee4398bca},
                       {0x4cf0dcb14ab06fda, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x0000020000000000, 0x996d1b60923c18a6, 0xcb9848f06e9659f6, 0x5052886f7169c8c5},
                       {0x86ddce906c8cdb4d, 0x8c91e2fe14041a34, 0xe5baa16ee5b5419e, 0x27429c30e8b6cff7},
                       {0x3005c6c2465e5d44, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xc9d368e6546c1f00, 0x3d0e482377794618, 0x0000000000000004, 0x0ec6680cabb95f09},
                       {0x58aee9fdc3f41b74, 0x16b3a918e4278c9d, 0x4cf560811e3465c5, 0xbad28e0ca5854070},
                       {0x26253f96dfe039e2, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x0000000000000000, 0x0ec6680cabb95f09, 0x986a686578456056, 0x686f332000000000},
                       {0xc10a152d71cb3f16, 0x58aee9fdc3f41b74, 0x90e1bc8ba22d3294, 0x3b0d936889b10a5d},
                       {0x2305b31104260b75, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0x2e00000000000000, 0xf2a6b292a535dc4e, 0x0000000000400000, 0x7dc2ae94e4000000},
                       {0xb040414dd8c98a14, 0xdf9a26c8470349dd, 0xdfd3a0870f60e072, 0x37269c228e8e3db1},
                       {0x70ca7464b41db822, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                       {0xfad4dc0000000000, 0xd27d2fde3497614c, 0x262a15662b298944, 0x4ab9cfc9a41744c4},
                       {0xc10a152d71cb3f16, 0x8000000000000000, 0xbad28e0ca5854070, 0x0100000000000000}};
  uint64_t y = 0x7fffffffffffffff;
  uint8_t z[12];
  uint8_t e[12] = {0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24, 0x49, 0x92, 0x24};

  vmsbc_vx(96, x, y, z);

  for (int i = 0; i < 12; i++) {
    if (z[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}
