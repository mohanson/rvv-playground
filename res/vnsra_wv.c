#include <stddef.h>
#include <stdint.h>

void vnsra_wv(size_t n, const uint64_t x[][4], const uint64_t y[][2], uint64_t z[][2]);

int main() {
  uint64_t x[100][4] = {{0x0100000000000000, 0x62daff171a9fae42, 0x00000000000075da, 0x4cf560811e3465c5},
                        {0xe5baa16ee5b5419e, 0x4a6c986967d5ace8, 0x6465f271027abfa8, 0x4cf560811e3465c5},
                        {0x00004a9e26b7f794, 0xdfd3a0870f60e072, 0x000000000000000d, 0x27429c30e8b6cff7},
                        {0xa73c905bcbc01878, 0x0000020000000000, 0x314320aa7da5b1ef, 0x68323fe289df33d1},
                        {0x7c6bcb08155fac38, 0x8a4a182923bdf75a, 0xbebf0929f41aa230, 0x1234769364d9eac9},
                        {0xe79541e25d0dba6b, 0x0000800000000000, 0x58aee9fdc3f41b74, 0x0000000000000000},
                        {0xa73c905bcbc01878, 0x0000000000010000, 0xca9d54bd4e78980e, 0x0000000000000040},
                        {0x58aee9fdc3f41b74, 0x0000000000400000, 0x7dc2ae94e4000000, 0x0f812a265e560f2b},
                        {0x86ddce906c8cdb4d, 0xbd6192029dd91d60, 0x8b4eb00000000000, 0xdf9a26c8470349dd},
                        {0x0da24e08451a8d1a, 0xd27d2fde3497614c, 0x0000000000000004, 0x93d7d7a9d87056f0},
                        {0x686f332000000000, 0x000000000000000d, 0x4cf560811e3465c5, 0x25474d793f2c7d32},
                        {0xaf29109cc0000000, 0xbad28e0ca5854070, 0x34f2a050c605b6b0, 0xb040414dd8c98a14},
                        {0x000000000dd2966b, 0x0000000000400000, 0x05ada4e53975b451, 0x000000000000714c},
                        {0x0f812a265e560f2b, 0xbebf0929f41aa230, 0xdf09e5c90a990b56, 0x86ddce906c8cdb4d},
                        {0x4cf560811e3465c5, 0x867e3492977cb1bb, 0xaf29109cc0000000, 0xc7dee68fffbaf900},
                        {0xbad28e0ca5854070, 0x000000000000015b, 0xdf9a26c8470349dd, 0x0000000000000067},
                        {0xa8519a5b46242cc0, 0x3b4de2fabe6d6476, 0x00000000000075da, 0x3d0e482377794618},
                        {0x000000000dd2966b, 0x986a686578456056, 0x4cf560811e3465c5, 0x0000000001000000},
                        {0xfecee737556609f5, 0x79780d4e5b2b3b2a, 0x6d159abfb3030000, 0xd0abd7d3688aa0d7},
                        {0xd251a40a022b9000, 0x7fc92593c865b4c2, 0xa8519a5b46242cc0, 0x93d7d7a9d87056f0},
                        {0xea2177d8d5100000, 0xb36eb1caa58ee7dc, 0xff98837fda2a5bdf, 0x8a4a182923bdf75a},
                        {0x000000000000000d, 0x0f812a265e560f2b, 0x0000000000400000, 0x8f09996552504a5d},
                        {0x00000000a865d7d4, 0x7fc92593c865b4c2, 0xe5baa16ee5b5419e, 0x0000000001000000},
                        {0x686f332000000000, 0xe79541e25d0dba6b, 0x000000000000000d, 0x1000000000000000},
                        {0x14d93f0c55095499, 0x1000000000000000, 0xbebf0929f41aa230, 0x25474d793f2c7d32},
                        {0x37269c228e8e3db1, 0xb1db9b0fecbfaabe, 0xf5bad73c74be6d8a, 0xffffffffffffffff},
                        {0xea2177d8d5100000, 0x00000000000075da, 0x000000000000000d, 0x1234769364d9eac9},
                        {0xca9d54bd4e78980e, 0x0000000000010000, 0x0000000000000001, 0xd251a40a022b9000},
                        {0x262a15662b298944, 0x1735808ee4398bca, 0x6edd225600000000, 0x8f09996552504a5d},
                        {0xb040414dd8c98a14, 0x2c1fb5204d248917, 0x58aee9fdc3f41b74, 0xffffffffffffffff},
                        {0x8f09996552504a5d, 0xb9e2a99fdb7b2948, 0x00000000a865d7d4, 0xf5bad73c74be6d8a},
                        {0x4a6c986967d5ace8, 0xbebf0929f41aa230, 0xc9d368e6546c1f00, 0x0000000000000001},
                        {0x6edd225600000000, 0xea2177d8d5100000, 0x8f09996552504a5d, 0x00129af7f2440efe},
                        {0xca9d54bd4e78980e, 0xdf9a26c8470349dd, 0x25474d793f2c7d32, 0x0000000380f3cf69},
                        {0x31523358d080e093, 0x9420000000000000, 0x6d159abfb3030000, 0x37269c228e8e3db1},
                        {0xd251a40a022b9000, 0xd27d2fde3497614c, 0xc10a152d71cb3f16, 0x0da24e08451a8d1a},
                        {0x4fcf7212bebfdd89, 0x3b4de2fabe6d6476, 0xbd6192029dd91d60, 0x000000000003ed82},
                        {0x0000000000000000, 0x00000bea6a6af755, 0xbebf0929f41aa230, 0x6edd225600000000},
                        {0x8a4a182923bdf75a, 0x0000000000400000, 0x4ab9cfc9a41744c4, 0xb1db9b0fecbfaabe},
                        {0x0100000000000000, 0x7f2e6910bdea3ffd, 0xf0fe55be95a18d13, 0x0010000000000000},
                        {0xff98837fda2a5bdf, 0x00000bea6a6af755, 0x90e1bc8ba22d3294, 0x4fcf7212bebfdd89},
                        {0xe5baa16ee5b5419e, 0x9d8dbb3a5bde4347, 0x0000000000000004, 0x000000000000015b},
                        {0x686f332000000000, 0x0000000000000000, 0x6edd225600000000, 0x8b4eb00000000000},
                        {0x0000000000000067, 0x6465f271027abfa8, 0x8000000000000000, 0xaf29109cc0000000},
                        {0x6edd225600000000, 0x0000020000000000, 0xc7dee68fffbaf900, 0xbd6192029dd91d60},
                        {0xc10a152d71cb3f16, 0x9420000000000000, 0x93d7d7a9d87056f0, 0xf3fbe985738811dd},
                        {0x00129af7f2440efe, 0x0000000100000000, 0x93d7d7a9d87056f0, 0x4cf560811e3465c5},
                        {0xff98837fda2a5bdf, 0x0000000000000040, 0x0000000000000080, 0xfad4dc0000000000},
                        {0xfad4dc0000000000, 0x90e1bc8ba22d3294, 0xca9d54bd4e78980e, 0x0000800000000000},
                        {0x61fd04828c93ce01, 0x1735808ee4398bca, 0x79780d4e5b2b3b2a, 0x867e3492977cb1bb},
                        {0x7fc92593c865b4c2, 0xdfd3a0870f60e072, 0x63eb500cce126b70, 0xa8519a5b46242cc0},
                        {0x37269c228e8e3db1, 0xb040414dd8c98a14, 0x2d21e3da342cd6be, 0x0000000100000000},
                        {0x02ab7bb54e687499, 0x02ab7bb54e687499, 0xdfd3a0870f60e072, 0x31a7445bdf8bcb5c},
                        {0x314320aa7da5b1ef, 0xe35a000000000000, 0x000000000000015b, 0x05ada4e53975b451},
                        {0x000000a3714b9ad2, 0xb9e2a99fdb7b2948, 0x9420000000000000, 0x62daff171a9fae42},
                        {0x3d0e482377794618, 0xf3fbe985738811dd, 0xca9d54bd4e78980e, 0xe5baa16ee5b5419e},
                        {0x000000000000714c, 0xff98837fda2a5bdf, 0xdfd3a0870f60e072, 0x262a15662b298944},
                        {0x05ada4e53975b451, 0xc9d368e6546c1f00, 0xc10a152d71cb3f16, 0x000000a3714b9ad2},
                        {0x3b0d936889b10a5d, 0x5052886f7169c8c5, 0xa6a669d1baba633e, 0x6d159abfb3030000},
                        {0xa73c905bcbc01878, 0x9d8dbb3a5bde4347, 0xea59a91078581c00, 0x38be984c83ce8648},
                        {0x6d159abfb3030000, 0xf5bad73c74be6d8a, 0x31a7445bdf8bcb5c, 0x996d1b60923c18a6},
                        {0xc7dee68fffbaf900, 0x44a705073f90be80, 0x0010000000000000, 0x31523358d080e093},
                        {0x8a4a182923bdf75a, 0x0ec6680cabb95f09, 0x314320aa7da5b1ef, 0x0000008000000000},
                        {0x9420000000000000, 0x58aee9fdc3f41b74, 0x93d7d7a9d87056f0, 0x0000000000000001},
                        {0x68323fe289df33d1, 0xc7dee68fffbaf900, 0xd251a40a022b9000, 0xffffffffffffffff},
                        {0xd0abd7d3688aa0d7, 0xbe55668178139c8e, 0x9420000000000000, 0x000000000003ed82},
                        {0x00129af7f2440efe, 0x16b3a918e4278c9d, 0x3b0d936889b10a5d, 0xb1db9b0fecbfaabe},
                        {0x8f09996552504a5d, 0x000000000000714c, 0x68323fe289df33d1, 0x05ada4e53975b451},
                        {0x1735808ee4398bca, 0x8b4eb00000000000, 0x6edd225600000000, 0xf48119b103954df1},
                        {0xbe55668178139c8e, 0x2d21e3da342cd6be, 0x4ab9cfc9a41744c4, 0x6465f271027abfa8},
                        {0xf5bad73c74be6d8a, 0x000000000000714c, 0xca9d54bd4e78980e, 0xc7dee68fffbaf900},
                        {0x0000000000000000, 0x14d93f0c55095499, 0x1000000000000000, 0x44a705073f90be80},
                        {0xffffffffffffffff, 0x02ab7bb54e687499, 0x61fd04828c93ce01, 0x7dc2ae94e4000000},
                        {0x8f09996552504a5d, 0x9420000000000000, 0x37269c228e8e3db1, 0xbe55668178139c8e},
                        {0xcb9848f06e9659f6, 0x9480583abdfb5837, 0x79780d4e5b2b3b2a, 0x0000000001000000},
                        {0x2d21e3da342cd6be, 0xb9e2a99fdb7b2948, 0x0000000000010000, 0x62daff171a9fae42},
                        {0x14d93f0c55095499, 0x3d0e482377794618, 0x00000bea6a6af755, 0x4ab9cfc9a41744c4},
                        {0x00000bea6a6af755, 0xea59a91078581c00, 0x38be984c83ce8648, 0x68323fe289df33d1},
                        {0x37269c228e8e3db1, 0x7f2e6910bdea3ffd, 0x6edd225600000000, 0x0000000000000000},
                        {0x58aee9fdc3f41b74, 0x867e3492977cb1bb, 0x0000000000000067, 0xf3fbe985738811dd},
                        {0x0000000000000080, 0x5052886f7169c8c5, 0x0000000000400000, 0xfad4dc0000000000},
                        {0x686f332000000000, 0xfecee737556609f5, 0xe5baa16ee5b5419e, 0x4fcf7212bebfdd89},
                        {0x7f2e6910bdea3ffd, 0x00004a9e26b7f794, 0xc3bd5e2cd52318a8, 0x0da24e08451a8d1a},
                        {0x34f2a050c605b6b0, 0x000000000000000d, 0x2e00000000000000, 0x3b4de2fabe6d6476},
                        {0xca9d54bd4e78980e, 0x00020e6dfbb7c441, 0x9480583abdfb5837, 0x02ab7bb54e687499},
                        {0xc9d368e6546c1f00, 0x000000000000714c, 0x8a4a182923bdf75a, 0xfecee737556609f5},
                        {0xc10a152d71cb3f16, 0x4ab9cfc9a41744c4, 0x31a7445bdf8bcb5c, 0x9480583abdfb5837},
                        {0x0000000000000004, 0xff98837fda2a5bdf, 0x000000000000714c, 0x31523358d080e093},
                        {0xbebf0929f41aa230, 0xbd6192029dd91d60, 0xb1db9b0fecbfaabe, 0x90e1bc8ba22d3294},
                        {0x0000008000000000, 0x0000800000000000, 0x314320aa7da5b1ef, 0x4ab9cfc9a41744c4},
                        {0x000000a3714b9ad2, 0x0000000000000004, 0x7c6bcb08155fac38, 0x686f332000000000},
                        {0x000000000003ed82, 0x93d7d7a9d87056f0, 0x7dc2ae94e4000000, 0x0000000000000040},
                        {0x16b3a918e4278c9d, 0x16b3a918e4278c9d, 0x16b3a918e4278c9d, 0x0000000000000080},
                        {0x7c6bcb08155fac38, 0x2c1fb5204d248917, 0x7dc2ae94e4000000, 0x0000000000000000},
                        {0x0000000000400000, 0x7fc92593c865b4c2, 0xdf9a26c8470349dd, 0xf2a6b292a535dc4e},
                        {0x14d93f0c55095499, 0x16b3a918e4278c9d, 0x2c1fb5204d248917, 0xe79541e25d0dba6b},
                        {0x00020e6dfbb7c441, 0xf48119b103954df1, 0xa73c905bcbc01878, 0x3d0e482377794618},
                        {0x000000000000714c, 0x9480583abdfb5837, 0x0000000100000000, 0xf2a6b292a535dc4e},
                        {0x0000000000000000, 0x63eb500cce126b70, 0x262a15662b298944, 0x8000000000000000},
                        {0xa8519a5b46242cc0, 0x0000000000000067, 0x0000000000000080, 0x1234769364d9eac9}};
  uint64_t y[100][2] = {{0x4a6c986967d5ace8, 0x31523358d080e093}, {0x2c1fb5204d248917, 0xa6a669d1baba633e},
                        {0xc9d368e6546c1f00, 0xb36eb1caa58ee7dc}, {0xdf9a26c8470349dd, 0xbad28e0ca5854070},
                        {0x61fd04828c93ce01, 0x000000000000000d}, {0xf48119b103954df1, 0x8000000000000000},
                        {0x58aee9fdc3f41b74, 0xb1db9b0fecbfaabe}, {0x3b4de2fabe6d6476, 0xe35a000000000000},
                        {0x0da24e08451a8d1a, 0x0000000000002000}, {0x1234769364d9eac9, 0x686f332000000000},
                        {0x0000000000000040, 0x6465f271027abfa8}, {0x0000000000400000, 0x4ab9cfc9a41744c4},
                        {0x38be984c83ce8648, 0xe79541e25d0dba6b}, {0xb36eb1caa58ee7dc, 0xcb9848f06e9659f6},
                        {0x0000000000002000, 0x0000020000000000}, {0x4cf560811e3465c5, 0x93d7d7a9d87056f0},
                        {0x14d93f0c55095499, 0x262a15662b298944}, {0x6edd225600000000, 0x7c6bcb08155fac38},
                        {0xc3bd5e2cd52318a8, 0x3b0d936889b10a5d}, {0x0000000000000040, 0xc10a152d71cb3f16},
                        {0xdfd83d690e5f073e, 0xb9e2a99fdb7b2948}, {0x27429c30e8b6cff7, 0xf48119b103954df1},
                        {0xb1db9b0fecbfaabe, 0x8a4a182923bdf75a}, {0x34f2a050c605b6b0, 0x8f09996552504a5d},
                        {0x0ec6680cabb95f09, 0x0da24e08451a8d1a}, {0xb9e2a99fdb7b2948, 0xdf9a26c8470349dd},
                        {0x0000008000000000, 0x5052886f7169c8c5}, {0x0000000000000040, 0x14d93f0c55095499},
                        {0x000000000000000d, 0x00000000000075da}, {0x31a7445bdf8bcb5c, 0xf3fbe985738811dd},
                        {0x314320aa7da5b1ef, 0xdfd3a0870f60e072}, {0x000000000000714c, 0xc7dee68fffbaf900},
                        {0x000000000003ed82, 0x79780d4e5b2b3b2a}, {0x0000000000002000, 0x8a4a182923bdf75a},
                        {0x000000000003ed82, 0x986a686578456056}, {0x9420000000000000, 0x000000000dd2966b},
                        {0xdf9a26c8470349dd, 0x314320aa7da5b1ef}, {0xb9e2a99fdb7b2948, 0x5052886f7169c8c5},
                        {0x8c91e2fe14041a34, 0x0000020000000000}, {0xb040414dd8c98a14, 0x00004a9e26b7f794},
                        {0x0000000001000000, 0x0000000000000000}, {0x2d21e3da342cd6be, 0xd251a40a022b9000},
                        {0x4a6c986967d5ace8, 0x686f332000000000}, {0x1000000000000000, 0xb36eb1caa58ee7dc},
                        {0x25474d793f2c7d32, 0x02ab7bb54e687499}, {0x1000000000000000, 0x6465f271027abfa8},
                        {0x0000000001000000, 0x31a7445bdf8bcb5c}, {0x61fd04828c93ce01, 0xbe55668178139c8e},
                        {0x63eb500cce126b70, 0xb9e2a99fdb7b2948}, {0x37269c228e8e3db1, 0xc7dee68fffbaf900},
                        {0xbd6192029dd91d60, 0x000000000000015b}, {0xa73c905bcbc01878, 0xc7dee68fffbaf900},
                        {0x3d0e482377794618, 0x1234769364d9eac9}, {0x38be984c83ce8648, 0x00000bea6a6af755},
                        {0x0000800000000000, 0x0000000000000040}, {0x0000000000000001, 0xf0fe55be95a18d13},
                        {0xf5bad73c74be6d8a, 0x68323fe289df33d1}, {0x0da24e08451a8d1a, 0x8f09996552504a5d},
                        {0xb040414dd8c98a14, 0xc10a152d71cb3f16}, {0x686f332000000000, 0xb1db9b0fecbfaabe},
                        {0x0000000000000000, 0x8a4a182923bdf75a}, {0x9d8dbb3a5bde4347, 0x7fc92593c865b4c2},
                        {0x000000000000000d, 0x7c6bcb08155fac38}, {0x8f09996552504a5d, 0x93d7d7a9d87056f0},
                        {0xb1db9b0fecbfaabe, 0x00020e6dfbb7c441}, {0xff98837fda2a5bdf, 0x1234769364d9eac9},
                        {0xc7dee68fffbaf900, 0x0010000000000000}, {0x00020e6dfbb7c441, 0x000000a3714b9ad2},
                        {0x0000000001000000, 0xdf9a26c8470349dd}, {0x0000000100000000, 0x00020e6dfbb7c441},
                        {0xd0abd7d3688aa0d7, 0x63eb500cce126b70}, {0x4a6c986967d5ace8, 0x0100000000000000},
                        {0x2e00000000000000, 0x686f332000000000}, {0xf0fe55be95a18d13, 0x8000000000000000},
                        {0xf0fe55be95a18d13, 0x68323fe289df33d1}, {0x0000000000000080, 0xbd6192029dd91d60},
                        {0x3b0d936889b10a5d, 0x1234769364d9eac9}, {0xa6a669d1baba633e, 0x00020e6dfbb7c441},
                        {0x996d1b60923c18a6, 0x7c6bcb08155fac38}, {0x4fcf7212bebfdd89, 0x2e00000000000000},
                        {0xc3bd5e2cd52318a8, 0xbd6192029dd91d60}, {0x00129af7f2440efe, 0x2c1fb5204d248917},
                        {0xd27d2fde3497614c, 0x2d21e3da342cd6be}, {0x25474d793f2c7d32, 0x00020e6dfbb7c441},
                        {0x2e00000000000000, 0x4a6c986967d5ace8}, {0xb36eb1caa58ee7dc, 0xf0fe55be95a18d13},
                        {0x0000000000000040, 0xca9d54bd4e78980e}, {0x31523358d080e093, 0x0000000000400000},
                        {0x0000000000000000, 0x9480583abdfb5837}, {0x6465f271027abfa8, 0xc3bd5e2cd52318a8},
                        {0xbd6192029dd91d60, 0x000000000000000d}, {0xf3fbe985738811dd, 0xc10a152d71cb3f16},
                        {0xc9d368e6546c1f00, 0x7dc2ae94e4000000}, {0xf0fe55be95a18d13, 0xf0fe55be95a18d13},
                        {0x000000000000000d, 0x0000000380f3cf69}, {0xa8519a5b46242cc0, 0x8000000000000000},
                        {0x6465f271027abfa8, 0x867e3492977cb1bb}, {0x0000000000000000, 0x000000000003ed82},
                        {0xdfd83d690e5f073e, 0x0da24e08451a8d1a}, {0x3b0d936889b10a5d, 0x05ada4e53975b451}};
  uint64_t e[100][2] = {{0x00000000004cf560, 0x0000000000000000}, {0xab59d1cb7542ddcb, 0xf57f5094d930d2cf},
                        {0x00004a9e26b7f794, 0xdfd3a0870f60e072}, {0x000000034191ff14, 0x0000000000000000},
                        {0x3e35e5840aafd61c, 0x45250c1491defbad}, {0x0000000000000000, 0x0000000000000000},
                        {0xd54bd4e78980e000, 0x0000000000040ca9}, {0x0aba539000000000, 0x04a89979583cadf7},
                        {0x76475821b773a41b, 0x0000002f586480a7}, {0xffc9ebebd4ec382b, 0xffffffffffffffff},
                        {0x000000000000000d, 0x4cf560811e3465c5}, {0xaf29109cc0000000, 0xbad28e0ca5854070},
                        {0x5100000000004000, 0x4c05ada4e53975b4}, {0xfffffff86ddce906, 0xffffffffffffffff},
                        {0x4cf560811e3465c5, 0x867e3492977cb1bb}, {0x0000000000000003, 0x0000000000000000},
                        {0xbca30c0000000000, 0x0000001e872411bb}, {0x000000000dd2966b, 0x986a686578456056},
                        {0xd3688aa0d76d159a, 0xffffffffffd0abd7}, {0x7fc92593c865b4c2, 0xa8519a5b46242cc0},
                        {0xcdbac72a963b9f73, 0xfe620dff68a96f7e}, {0xffffffffffffff1e, 0xffffffffffffffff},
                        {0x0000000004000003, 0x0000000000000000}, {0x0000000000000000, 0x0000000000001000},
                        {0x000a6c9f862a84aa, 0x1808000000000000}, {0x8ab1db9b0fecbfaa, 0xfff5bad73c74be6d},
                        {0xea2177d8d5100000, 0x00000000000075da}, {0x0000000000010000, 0x0000000000000001},
                        {0x5e513150ab31594c, 0x0000b9ac047721cc}, {0x3f41b742c1fb5204, 0xfffffff58aee9fdc},
                        {0xffffffffffffeb75, 0xffffffffffffffff}, {0xf00bebf0929f41aa, 0x001c9d368e6546c1},
                        {0xa3c2665954941297, 0x0004a6bdfc9103bf}, {0xca9d54bd4e78980e, 0xdf9a26c8470349dd},
                        {0x5b4566afecc0c000, 0x0dc9a708a3a38f6c}, {0xd251a40a022b9000, 0xd27d2fde3497614c},
                        {0x0000000000000000, 0x0000000000000000}, {0x3000000bea6a6af7, 0x00bebf0929f41aa2},
                        {0x00000004000008a4, 0x9cfc9a41744c4000}, {0xa3ffd01000000000, 0x18d137f2e6910bde},
                        {0xff98837fda2a5bdf, 0x00000bea6a6af755}, {0x000000000000056c, 0x0000000000000000},
                        {0xffffffffff8b4eb0, 0xffffffffffffffff}, {0x0000000000000067, 0x6465f271027abfa8},
                        {0x0080000000001bb7, 0xb9a3ffeebe400000}, {0xc10a152d71cb3f16, 0x9420000000000000},
                        {0x00129af7f2440efe, 0x0000000100000000}, {0x7fcc41bfed152def, 0x0000000000000020},
                        {0x54bd4e78980e90e1, 0x800000000000ca9d}, {0x1a494bbe58ddbcbc, 0xffffffffffffc33f},
                        {0xce126b70dfd3a087, 0x46242cc063eb500c}, {0x21e3da342cd6beb0, 0x000001000000002d},
                        {0x68749902ab7bb54e, 0x60e07202ab7bb54e}, {0x5be35a0000000000, 0x5100000000000001},
                        {0x000000a3714b9ad2, 0xb9e2a99fdb7b2948}, {0x9e872411bbbca30c, 0x79fdf4c2b9c408ee},
                        {0x5137f4e821c3d838, 0x00098a85598aca62}, {0x1b07c0016b69394e, 0x72cfc5b274da3995},
                        {0x9c8c53b0d936889b, 0xa633e5052886f716}, {0xa73c905bcbc01878, 0x9d8dbb3a5bde4347},
                        {0x6d159abfb3030000, 0xf5bad73c74be6d8a}, {0x00894e0a0e7f217d, 0x2600200000000000},
                        {0xf84c5250c1491def, 0x8f78763340655dca}, {0xc382b782c5774fee, 0x0000000c9ebebd4e},
                        {0xffffffffffffffff, 0xffffffffffffffff}, {0x0000000000000000, 0x0000000000000000},
                        {0x00129af7f2440efe, 0x16b3a918e4278c9d}, {0x80000000000038a6, 0xb4191ff144ef99e8},
                        {0x1735808ee4398bca, 0x8b4eb00000000000}, {0xbe55668178139c8e, 0x2d21e3da342cd6be},
                        {0xffffff8fbdcd1fff, 0xffffffffffffffff}, {0x000000000044a705, 0x0000000000000000},
                        {0xffffffffffffffff, 0x02ab7bb54e687499}, {0x000011e1332caa4a, 0xc7b6328400000000},
                        {0x6b06f973091e0dd2, 0x676552900b0757bf}, {0x0000000000010000, 0x62daff171a9fae42},
                        {0x5357baa9e872411b, 0x20ba262000005f53}, {0xa966a441e1607000, 0xe2fa61320f3a1923},
                        {0x0000000001bb7489, 0x0000000000000000}, {0xee80000000000000, 0xfff9fdf4c2b9c408},
                        {0x0000000000000000, 0xfffffffffffad4dc}, {0x0000000000000001, 0x0000000000000000},
                        {0x8a800004a9e26b7f, 0xd1ac3bd5e2cd5231}, {0x0000000000034d3c, 0x0000000000000000},
                        {0xca9d54bd4e78980e, 0x00020e6dfbb7c441}, {0xffffffffecee7375, 0xffffffffffffffff},
                        {0x4ab9cfc9a41744c4, 0x31a7445bdf8bcb5c}, {0x1c12600000000000, 0x0000062a466b1a10},
                        {0xbebf0929f41aa230, 0xbd6192029dd91d60}, {0xc9a41744c4314320, 0x00000000004ab9cf},
                        {0x155fac3800000000, 0x000000007c6bcb08}, {0x0000000000000000, 0x0000000000000000},
                        {0x16b3a918e4278c9d, 0x16b3a918e4278c9d}, {0x9122ef8d796102ab, 0x00000583f6a409a4},
                        {0xa610000000000200, 0x4eebfe492c9e432d}, {0xe79541e25d0dba6b, 0xffffffffffffffff},
                        {0x2377794618a73c90, 0x00000000003d0e48}, {0x000000000000714c, 0x9480583abdfb5837},
                        {0x8fad40333849adc0, 0x98a85598aca62511}, {0x0000040000000000, 0x26cf564800000000}};

  uint64_t z[100][2];
  vnsra_wv(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 2; j++) {
      if (z[i][j] != e[i][j]) {
        return 1 + i;
      }
    }
  }

  return 0;
}
