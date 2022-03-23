#include <stddef.h>
#include <stdint.h>

void vrsub_vx(size_t n, const uint64_t x[], const uint64_t y, uint64_t z[]);

int main() {
  uint64_t x[100] = {
      0x222f2e1192d20694, 0x79e1cdf2ff6ce7e0, 0x874ec668298da5f0, 0xa4a439dc1b00ac3c, 0xd5c36a3e2451e3fc,
      0x4ff7c348b4e6b31c, 0xce24599e6e7ae5ee, 0x76b708f506c0d29e, 0xdf11c5476679d369, 0xed15edad8a9b44d7,
      0xaf0fb45dd6916b8b, 0xed4def52a00b0ad0, 0x1f295a967977cf67, 0x7635bb2776cc9dab, 0xe68a763ecd5e2e85,
      0x24416dd17d4a1a7e, 0x993df784f4ba0de7, 0xcbf75911a8660506, 0x13d584672fc5ec8c, 0xa0c22b1f0b223867,
      0x49c3d7f3c875a430, 0x13bc6205606b9492, 0x72af7daf5fa0ace0, 0x38ec60c22d58dc82, 0xa381e9ef7ebba3e6,
      0x1a93c50b2cd50acc, 0xbbb56a2badc77fc9, 0x1d933e7854a30f2b, 0xcb4124c4c4ea80ac, 0x83f3b56327d4cb13,
      0xa889cbe51960ddee, 0x4e807d7cd8f145dd, 0x8add80a0f1655c8e, 0xe3ec9973bde72104, 0x5a9620eee1347f88,
      0x32aac09eebeed9ab, 0xbc68d40368421964, 0x6623cf780522c8d8, 0x1666983a3ebddbf3, 0x4862821573de8be4,
      0xbbb5173e904db863, 0x6d7b80a464b912df, 0x9b03c3e57bb683dc, 0xe301d3928ab6a9aa, 0x963985e55866b06c,
      0x1091eb88bea65630, 0x948ca76d75e79320, 0x43a03e92368ee863, 0x2c09de6a0d34326e, 0x1149cfce46577bcb,
      0x538fb61e8988b321, 0xf05d585e2b3aea0c, 0xdcd2b7af4b34290e, 0x637a44706b7a21b9, 0x56cc15266f727f59,
      0x37c20e00b35ae4f2, 0x17a949c20f546917, 0x6e21510c2bc7b729, 0x1d0be7a64c19c66d, 0xa8ffcf1c0f043eba,
      0xd8f17468bf397329, 0x84fe5c7062061b3c, 0x4d72955db4aa464b, 0x52d48aa4749e92cc, 0xe6d6b04f89d78476,
      0x55ef8c0d4dc33584, 0x776aba953ad7f766, 0x94fe4287a7f17c19, 0x5ad5018529667efc, 0xffc85ca91ed766e8,
      0x2b7e6a5c629553fe, 0x0ebf5d482ae5f5ea, 0xd5b5e28cd895dc80, 0x2d48212b59394661, 0x0c79aad24374a215,
      0x22f8cb7d6453f1e7, 0x9935060d852552ac, 0xb50abccacddc1206, 0x88d3d6a3d969e478, 0x11f4119429633c5c,
      0x05ab9595e9e9a433, 0xb9e8e5a1feda5865, 0x15c22352de284e0e, 0x00da12d151cf262c, 0x0cb7d46f023e3206,
      0x6c649de886c0792a, 0x2d183f86bd21bcc2, 0x55c6366c3f2d127a, 0x272ae87b3c8c5f32, 0x9661256abbd40b6b,
      0xd50e8a98d4b4acc7, 0x6a37a560963c498e, 0x30b1929872c3370b, 0x24ede9550bf87062, 0x3e1fbbba42cce1b7,
      0xb675cf044a03c5db, 0xde7cadd02cd6e1ea, 0x91dbaa58c6c731dc, 0x5c21382c9826d1b6, 0x9a5912859e0d7927};
  uint64_t y[100];

  vrsub_vx(100, x, 0x1234567812345678, y);

  for (int i = 0; i < 100; i++) {
    if (y[i] != 0x1234567812345678 - x[i]) {
      return 1;
    }
  }
  return 0;
}
