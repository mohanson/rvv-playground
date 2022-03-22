#include <stddef.h>
#include <stdint.h>

void vwsub_vx(size_t n, const uint32_t x[], const uint32_t y, uint64_t z[]);

int main() {
  uint32_t x[100] = {0x27ca04c9, 0x5bddbbdc, 0x5f6277d5, 0x8e380594, 0xd6bb6144, 0x25d1507b, 0x73b9e086, 0x578dd7d1,
                     0x94929662, 0xfd805f3e, 0x3f4c5e5c, 0x0a6f362b, 0x6e6c932c, 0xac02faf7, 0x567a0f49, 0xf62495a6,
                     0xccc5754b, 0xdd4bc878, 0x18850794, 0x7550ef99, 0x04319a34, 0xa3228f0a, 0xbe4979bf, 0xec62fff1,
                     0x29492d7e, 0xd5b097aa, 0xd5a85494, 0x7ced9b68, 0xbd175564, 0x955e2bb0, 0x28eaed14, 0xf21373e9,
                     0xb6d5a3d9, 0xa8a47382, 0x6cb0753a, 0x99ff695c, 0xe87aa284, 0x21fd451e, 0x002d4a85, 0xdd2b5f39,
                     0xb80bb3d7, 0x13d22b86, 0x6308944e, 0x166cce60, 0x797760bd, 0x714de6ff, 0xb37335ac, 0xb4f98fba,
                     0x6542e7b4, 0xd8cfe6b9, 0x0ea9ddb0, 0xfe05db62, 0x3b6a7176, 0xd9deec9a, 0x4c5cf846, 0xac0be240,
                     0x5b2832e3, 0x47a0fb46, 0xc6d7f40d, 0x0305f919, 0x2cb2560d, 0xcc5e0b42, 0x01bbb05f, 0x2d3f2965,
                     0x6384f534, 0x251e075a, 0xa1341155, 0xaa85d3fd, 0x43e68b93, 0x6c355327, 0x08cedf28, 0x912adc97,
                     0xa9654490, 0x3d1ab221, 0xa7d6adda, 0x30e9e567, 0x28fee4bf, 0x0f08ea1d, 0xc2e71ff2, 0x4d2ec3ae,
                     0xebeabad8, 0x4fe43152, 0xc1fd3706, 0x567737bf, 0x9ad16476, 0xfaaa7a10, 0x5bacb407, 0x0121cb49,
                     0x469bb2ab, 0x7b82da32, 0x3246cc85, 0x88f51bf4, 0x236b2c43, 0x9f6a34f7, 0x3a1747f2, 0xca87908f,
                     0xf496ec4b, 0xacfc52f3, 0x2add26e6, 0x8a22c72e};
  uint64_t y[100] = {0};

  vwsub_vx(100, x, 1, y);

  for (int i = 0; i < 100; i++) {
    if (y[i] != (uint64_t)((int64_t)(int32_t)x[i] - 1)) {
      return 1;
    }
  }

  vwsub_vx(100, x, -1, y);

  for (int i = 0; i < 100; i++) {
    if (y[i] != (uint64_t)((int64_t)(int32_t)x[i] + 1)) {
      return 1;
    }
  }

  return 0;
}
