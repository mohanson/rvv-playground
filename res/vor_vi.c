#include <stddef.h>
#include <stdint.h>

void vor_vi(size_t n, const uint64_t x[], uint64_t y[]);

int main() {
  uint64_t x[100] = {
      0xf5e158482f52b632, 0x2024167e6254a7df, 0x89a58b213677f799, 0x8023f2191e9dad47, 0xc64b130bd54c49a8,
      0xeeee82619252c94d, 0x7c87c86a66ee66fb, 0x881958d06453189f, 0x8af8750682bae078, 0x5dfc5a430f4454ee,
      0x051c57f17919b2f0, 0xff33b1adc6d22687, 0x874137cff24ef83b, 0x8bc8e83d6fcc311d, 0x5ecb0888dad898c1,
      0x11f1bb22c0f5126d, 0x501b64824e7594d7, 0x68f183e61b831b36, 0xc530b730920215b9, 0x77c7dc8b55e0f17b,
      0xa64b1bce28ccf23c, 0x4974337210a33909, 0x2c729ab52f00e293, 0x7d806504f69f204b, 0x199fdcd18fb19f2f,
      0xf650d6c23dcf9650, 0xc5af6d4555c2f0ca, 0xca7d360cd617828b, 0x3d818d38bb028bf0, 0x9e015efb17a5ecb3,
      0xd55810737290ff4d, 0xbcf63ac2cfac587e, 0x4b49ae2a296e352c, 0x79f8c19570e5eaae, 0xe9ae5a9d894d5048,
      0x51cafb798d778f18, 0x1660a5d1be2c286e, 0x4fd2ac5553f64624, 0x960e0924757e153c, 0x438f953114ce5349,
      0xb31a9d8fda6912bc, 0x7f9fac3fb5896413, 0xdf8bfa1eb722dc79, 0x1491adfea6c193cb, 0xbd9a98a52f15f229,
      0xd22f8d25513965d0, 0x7702392272cae06e, 0x643d6f565171c7df, 0x8574ef779cc470a1, 0x4b763846f22c2e51,
      0x2d425b0b386bc45b, 0x63e7acc55a1176c0, 0xc0cfe4accef80ea8, 0x687256c9e7b5b21b, 0x836e89be6854c441,
      0x0a7bf8c43bf2d70f, 0x1a3bbd04726e58f5, 0x7a8556b976f19f81, 0x3e678dd18ae8e7d9, 0x75255ce72e0ec19a,
      0x4a017b207c1489cd, 0xc809ed8315f279bd, 0xdd1bd24916a4525e, 0xf5dc6b3ef09bb854, 0x7ce5b30b0a7509a6,
      0x7f21d8f47fd10bd8, 0xab07e6f15a12e7a4, 0x637f87422cd58587, 0xb9c63fdcf29da0fa, 0x51deff93d7650b10,
      0xb4ac5425eeed6a0a, 0xb2828cbc97412a3a, 0x52e73bf8a58d17bc, 0x62c73d001f3ad7ea, 0xfc74f37365a42f6a,
      0xcbf6fff7618e5edf, 0x90c1a9e1772e38d2, 0x3ac575fb8c2fb2e0, 0x53b5f239af8e4125, 0x93e6905b2b544f21,
      0x7001082b4a5b0f57, 0x2885a90c5f43c7cb, 0xccf3467eb9be0d2e, 0x240865e47a046fcb, 0xcb9a97f9eef6241c,
      0x66913906216b1b38, 0x9a33b3cb35ebc93a, 0x68e4c8de0bc3ad8d, 0x3957fead3bcabbd7, 0x9ef4a24d418b67d9,
      0xdded54d7f946c886, 0xa21b38571b3cf277, 0x1b66fa0f7d42d3e3, 0x61ea40494c3ab0d3, 0x7c79b4c85ad44996,
      0x4c22a07e4a2a6141, 0xda914218381ac674, 0xb609f110850aa10b, 0x5202856d5fdc3cd7, 0x0b1822f86b33768a};
  uint64_t y[100];

  vor_vi(100, x, y);

  for (int i = 0; i < 100; i++) {
    if (y[i] != (x[i] | 1)) {
      return 1;
    }
  }

  return 0;
}
