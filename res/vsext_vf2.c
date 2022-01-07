#include <stddef.h>
#include <stdint.h>

void vsext_vf2(size_t n, const uint64_t x[][2], const uint64_t y[][4]);

int main() {
  uint64_t x[100][2] = {{0x62daff171a9fae42, 0x0000000000000000}, {0x262a15662b298944, 0x31523358d080e093},
                        {0x0ec6680cabb95f09, 0x8f09996552504a5d}, {0x0000000000000001, 0x7dc2ae94e4000000},
                        {0x996d1b60923c18a6, 0x68323fe289df33d1}, {0x00000000000075da, 0x9d8dbb3a5bde4347},
                        {0x0f812a265e560f2b, 0x0000008000000000}, {0x4cf560811e3465c5, 0x7dc2ae94e4000000},
                        {0xea2177d8d5100000, 0x4a6c986967d5ace8}, {0x27429c30e8b6cff7, 0x000000000000000d},
                        {0xe79541e25d0dba6b, 0x000000000000015b}, {0x0000000001000000, 0x7fc92593c865b4c2},
                        {0x0000000380f3cf69, 0xa6a669d1baba633e}, {0x44a705073f90be80, 0x34f2a050c605b6b0},
                        {0xaf29109cc0000000, 0x262a15662b298944}, {0x02ab7bb54e687499, 0xe5baa16ee5b5419e},
                        {0x0000008000000000, 0x16b3a918e4278c9d}, {0x686f332000000000, 0x7fc92593c865b4c2},
                        {0x000000000dd2966b, 0x0010000000000000}, {0x0000800000000000, 0x0ec6680cabb95f09},
                        {0x9d8dbb3a5bde4347, 0x0000000000000000}, {0x0000000000010000, 0xbad28e0ca5854070},
                        {0x00129af7f2440efe, 0x0000020000000000}, {0x986a686578456056, 0x0010000000000000},
                        {0x5052886f7169c8c5, 0x0da24e08451a8d1a}, {0x16b3a918e4278c9d, 0x34f2a050c605b6b0},
                        {0x4fcf7212bebfdd89, 0x8b4eb00000000000}, {0x7f2e6910bdea3ffd, 0xc9d368e6546c1f00},
                        {0x7f2e6910bdea3ffd, 0xc7dee68fffbaf900}, {0x8b4eb00000000000, 0x68323fe289df33d1},
                        {0xbd6192029dd91d60, 0x34f2a050c605b6b0}, {0xea59a91078581c00, 0xd27d2fde3497614c},
                        {0x1000000000000000, 0x31523358d080e093}, {0x996d1b60923c18a6, 0x31a7445bdf8bcb5c},
                        {0x62daff171a9fae42, 0x0000800000000000}, {0xe5baa16ee5b5419e, 0x3d0e482377794618},
                        {0x00020e6dfbb7c441, 0x05ada4e53975b451}, {0x9420000000000000, 0xfecee737556609f5},
                        {0x34f2a050c605b6b0, 0x8000000000000000}, {0xd251a40a022b9000, 0x31a7445bdf8bcb5c},
                        {0x0100000000000000, 0x90e1bc8ba22d3294}, {0x7dc2ae94e4000000, 0x0000020000000000},
                        {0x4fcf7212bebfdd89, 0x0000008000000000}, {0xb9e2a99fdb7b2948, 0x2c1fb5204d248917},
                        {0xf48119b103954df1, 0x31523358d080e093}, {0xbad28e0ca5854070, 0xa8519a5b46242cc0},
                        {0x3d0e482377794618, 0xdfd83d690e5f073e}, {0x0000000000000067, 0xd0abd7d3688aa0d7},
                        {0xf48119b103954df1, 0x16b3a918e4278c9d}, {0x0000800000000000, 0x0000000000000000},
                        {0x8c91e2fe14041a34, 0xb9e2a99fdb7b2948}, {0x00000000a865d7d4, 0x34f2a050c605b6b0},
                        {0x7f2e6910bdea3ffd, 0xb9e2a99fdb7b2948}, {0xc10a152d71cb3f16, 0x0000000000000004},
                        {0x61fd04828c93ce01, 0x93d7d7a9d87056f0}, {0x2c1fb5204d248917, 0x00000000a865d7d4},
                        {0x16b3a918e4278c9d, 0x000000000dd2966b}, {0x0000000000000000, 0x0ec6680cabb95f09},
                        {0x867e3492977cb1bb, 0xfecee737556609f5}, {0xc7dee68fffbaf900, 0x3b4de2fabe6d6476},
                        {0x9420000000000000, 0xbd6192029dd91d60}, {0x61fd04828c93ce01, 0x63eb500cce126b70},
                        {0x3b4de2fabe6d6476, 0xdf9a26c8470349dd}, {0xcb9848f06e9659f6, 0x7f2e6910bdea3ffd},
                        {0x9420000000000000, 0xdfd83d690e5f073e}, {0x4ab9cfc9a41744c4, 0x4fcf7212bebfdd89},
                        {0x3b4de2fabe6d6476, 0x9480583abdfb5837}, {0xf0fe55be95a18d13, 0xbad28e0ca5854070},
                        {0x7c6bcb08155fac38, 0xea59a91078581c00}, {0xcb9848f06e9659f6, 0xb9e2a99fdb7b2948},
                        {0xea59a91078581c00, 0x6d159abfb3030000}, {0xbd6192029dd91d60, 0x7dc2ae94e4000000},
                        {0xb1db9b0fecbfaabe, 0xe5baa16ee5b5419e}, {0x25474d793f2c7d32, 0x0000000100000000},
                        {0x000000000003ed82, 0x8b4eb00000000000}, {0x4ab9cfc9a41744c4, 0x16b3a918e4278c9d},
                        {0xdf09e5c90a990b56, 0x4a6c986967d5ace8}, {0x31523358d080e093, 0x3d0e482377794618},
                        {0xfecee737556609f5, 0xbe55668178139c8e}, {0x00000000a865d7d4, 0x000000000dd2966b},
                        {0x02ab7bb54e687499, 0xffffffffffffffff}, {0x0000000000000004, 0x0f812a265e560f2b},
                        {0xdf09e5c90a990b56, 0x000000000000015b}, {0x62daff171a9fae42, 0x0000000000002000},
                        {0x0010000000000000, 0x0000000380f3cf69}, {0x58aee9fdc3f41b74, 0x262a15662b298944},
                        {0xd251a40a022b9000, 0x0000000000000000}, {0xb1db9b0fecbfaabe, 0x686f332000000000},
                        {0x0000000000000000, 0x00000bea6a6af755}, {0x00129af7f2440efe, 0x7c6bcb08155fac38},
                        {0x8000000000000000, 0xbad28e0ca5854070}, {0x2c1fb5204d248917, 0x3d0e482377794618},
                        {0x1234769364d9eac9, 0x986a686578456056}, {0xc9d368e6546c1f00, 0x1234769364d9eac9},
                        {0x8c91e2fe14041a34, 0xdf9a26c8470349dd}, {0xc3bd5e2cd52318a8, 0xffffffffffffffff},
                        {0xe35a000000000000, 0xea59a91078581c00}, {0x8c91e2fe14041a34, 0x62daff171a9fae42},
                        {0x2d21e3da342cd6be, 0xdf9a26c8470349dd}, {0x0000000000000004, 0xdfd3a0870f60e072}};
  uint64_t y[100][4];
  uint64_t e[100][4] = {{0x62daff171a9fae42, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x262a15662b298944, 0x31523358d080e093, 0x0000000000000000, 0x0000000000000000},
                        {0x0ec6680cabb95f09, 0x8f09996552504a5d, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000000001, 0x7dc2ae94e4000000, 0x0000000000000000, 0x0000000000000000},
                        {0x996d1b60923c18a6, 0x68323fe289df33d1, 0x0000000000000000, 0x0000000000000000},
                        {0x00000000000075da, 0x9d8dbb3a5bde4347, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0f812a265e560f2b, 0x0000008000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4cf560811e3465c5, 0x7dc2ae94e4000000, 0x0000000000000000, 0x0000000000000000},
                        {0xea2177d8d5100000, 0x4a6c986967d5ace8, 0x0000000000000000, 0x0000000000000000},
                        {0x27429c30e8b6cff7, 0x000000000000000d, 0x0000000000000000, 0x0000000000000000},
                        {0xe79541e25d0dba6b, 0x000000000000015b, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000001000000, 0x7fc92593c865b4c2, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000380f3cf69, 0xa6a669d1baba633e, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x44a705073f90be80, 0x34f2a050c605b6b0, 0x0000000000000000, 0x0000000000000000},
                        {0xaf29109cc0000000, 0x262a15662b298944, 0x0000000000000000, 0x0000000000000000},
                        {0x02ab7bb54e687499, 0xe5baa16ee5b5419e, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000008000000000, 0x16b3a918e4278c9d, 0x0000000000000000, 0x0000000000000000},
                        {0x686f332000000000, 0x7fc92593c865b4c2, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000dd2966b, 0x0010000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000800000000000, 0x0ec6680cabb95f09, 0x0000000000000000, 0x0000000000000000},
                        {0x9d8dbb3a5bde4347, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000010000, 0xbad28e0ca5854070, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x00129af7f2440efe, 0x0000020000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x986a686578456056, 0x0010000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x5052886f7169c8c5, 0x0da24e08451a8d1a, 0x0000000000000000, 0x0000000000000000},
                        {0x16b3a918e4278c9d, 0x34f2a050c605b6b0, 0x0000000000000000, 0x0000000000000000},
                        {0x4fcf7212bebfdd89, 0x8b4eb00000000000, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x7f2e6910bdea3ffd, 0xc9d368e6546c1f00, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x7f2e6910bdea3ffd, 0xc7dee68fffbaf900, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x8b4eb00000000000, 0x68323fe289df33d1, 0x0000000000000000, 0x0000000000000000},
                        {0xbd6192029dd91d60, 0x34f2a050c605b6b0, 0x0000000000000000, 0x0000000000000000},
                        {0xea59a91078581c00, 0xd27d2fde3497614c, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x1000000000000000, 0x31523358d080e093, 0x0000000000000000, 0x0000000000000000},
                        {0x996d1b60923c18a6, 0x31a7445bdf8bcb5c, 0x0000000000000000, 0x0000000000000000},
                        {0x62daff171a9fae42, 0x0000800000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xe5baa16ee5b5419e, 0x3d0e482377794618, 0x0000000000000000, 0x0000000000000000},
                        {0x00020e6dfbb7c441, 0x05ada4e53975b451, 0x0000000000000000, 0x0000000000000000},
                        {0x9420000000000000, 0xfecee737556609f5, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x34f2a050c605b6b0, 0x8000000000000000, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xd251a40a022b9000, 0x31a7445bdf8bcb5c, 0x0000000000000000, 0x0000000000000000},
                        {0x0100000000000000, 0x90e1bc8ba22d3294, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x7dc2ae94e4000000, 0x0000020000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x4fcf7212bebfdd89, 0x0000008000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb9e2a99fdb7b2948, 0x2c1fb5204d248917, 0x0000000000000000, 0x0000000000000000},
                        {0xf48119b103954df1, 0x31523358d080e093, 0x0000000000000000, 0x0000000000000000},
                        {0xbad28e0ca5854070, 0xa8519a5b46242cc0, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x3d0e482377794618, 0xdfd83d690e5f073e, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000000067, 0xd0abd7d3688aa0d7, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xf48119b103954df1, 0x16b3a918e4278c9d, 0x0000000000000000, 0x0000000000000000},
                        {0x0000800000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x8c91e2fe14041a34, 0xb9e2a99fdb7b2948, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x00000000a865d7d4, 0x34f2a050c605b6b0, 0x0000000000000000, 0x0000000000000000},
                        {0x7f2e6910bdea3ffd, 0xb9e2a99fdb7b2948, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc10a152d71cb3f16, 0x0000000000000004, 0x0000000000000000, 0x0000000000000000},
                        {0x61fd04828c93ce01, 0x93d7d7a9d87056f0, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x2c1fb5204d248917, 0x00000000a865d7d4, 0x0000000000000000, 0x0000000000000000},
                        {0x16b3a918e4278c9d, 0x000000000dd2966b, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0ec6680cabb95f09, 0x0000000000000000, 0x0000000000000000},
                        {0x867e3492977cb1bb, 0xfecee737556609f5, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc7dee68fffbaf900, 0x3b4de2fabe6d6476, 0x0000000000000000, 0x0000000000000000},
                        {0x9420000000000000, 0xbd6192029dd91d60, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x61fd04828c93ce01, 0x63eb500cce126b70, 0x0000000000000000, 0x0000000000000000},
                        {0x3b4de2fabe6d6476, 0xdf9a26c8470349dd, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xcb9848f06e9659f6, 0x7f2e6910bdea3ffd, 0x0000000000000000, 0x0000000000000000},
                        {0x9420000000000000, 0xdfd83d690e5f073e, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x4ab9cfc9a41744c4, 0x4fcf7212bebfdd89, 0x0000000000000000, 0x0000000000000000},
                        {0x3b4de2fabe6d6476, 0x9480583abdfb5837, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xf0fe55be95a18d13, 0xbad28e0ca5854070, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x7c6bcb08155fac38, 0xea59a91078581c00, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xcb9848f06e9659f6, 0xb9e2a99fdb7b2948, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xea59a91078581c00, 0x6d159abfb3030000, 0x0000000000000000, 0x0000000000000000},
                        {0xbd6192029dd91d60, 0x7dc2ae94e4000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb1db9b0fecbfaabe, 0xe5baa16ee5b5419e, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x25474d793f2c7d32, 0x0000000100000000, 0x0000000000000000, 0x0000000000000000},
                        {0x000000000003ed82, 0x8b4eb00000000000, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x4ab9cfc9a41744c4, 0x16b3a918e4278c9d, 0x0000000000000000, 0x0000000000000000},
                        {0xdf09e5c90a990b56, 0x4a6c986967d5ace8, 0x0000000000000000, 0x0000000000000000},
                        {0x31523358d080e093, 0x3d0e482377794618, 0x0000000000000000, 0x0000000000000000},
                        {0xfecee737556609f5, 0xbe55668178139c8e, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x00000000a865d7d4, 0x000000000dd2966b, 0x0000000000000000, 0x0000000000000000},
                        {0x02ab7bb54e687499, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000000004, 0x0f812a265e560f2b, 0x0000000000000000, 0x0000000000000000},
                        {0xdf09e5c90a990b56, 0x000000000000015b, 0x0000000000000000, 0x0000000000000000},
                        {0x62daff171a9fae42, 0x0000000000002000, 0x0000000000000000, 0x0000000000000000},
                        {0x0010000000000000, 0x0000000380f3cf69, 0x0000000000000000, 0x0000000000000000},
                        {0x58aee9fdc3f41b74, 0x262a15662b298944, 0x0000000000000000, 0x0000000000000000},
                        {0xd251a40a022b9000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0xb1db9b0fecbfaabe, 0x686f332000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x00000bea6a6af755, 0x0000000000000000, 0x0000000000000000},
                        {0x00129af7f2440efe, 0x7c6bcb08155fac38, 0x0000000000000000, 0x0000000000000000},
                        {0x8000000000000000, 0xbad28e0ca5854070, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x2c1fb5204d248917, 0x3d0e482377794618, 0x0000000000000000, 0x0000000000000000},
                        {0x1234769364d9eac9, 0x986a686578456056, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc9d368e6546c1f00, 0x1234769364d9eac9, 0x0000000000000000, 0x0000000000000000},
                        {0x8c91e2fe14041a34, 0xdf9a26c8470349dd, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xc3bd5e2cd52318a8, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0xe35a000000000000, 0xea59a91078581c00, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x8c91e2fe14041a34, 0x62daff171a9fae42, 0x0000000000000000, 0x0000000000000000},
                        {0x2d21e3da342cd6be, 0xdf9a26c8470349dd, 0xffffffffffffffff, 0xffffffffffffffff},
                        {0x0000000000000004, 0xdfd3a0870f60e072, 0xffffffffffffffff, 0xffffffffffffffff}};

  vsext_vf2(100, x, y);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 4; j++) {
      if (y[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}
