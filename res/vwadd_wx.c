#include <stddef.h>
#include <stdint.h>

void vwadd_wx(size_t n, const uint64_t x[], uint32_t y, uint64_t z[]);

int main() {
  uint64_t x[100] = {
      0x9c651609b461c3ad, 0xc3bef2419083d38b, 0x9c3f93b2c71e2a93, 0xbaa29a8761529bf6, 0xf84b85d559246e27,
      0x2c216518fc4795a4, 0xb6fc2d770b7a3e11, 0x14eac221906b556a, 0xa9fd1f72ca5ee032, 0x80bbeb7877ea8d47,
      0xeeaa61ec90133ed5, 0x6ab8026f205e958d, 0x08b470e602dac68c, 0x9cda3737c8fedebe, 0xda73f7c7dfc82e58,
      0x0b9f9901ef9c7f96, 0xb371f3b6b6e90d18, 0xe85c2a7b0473f6bb, 0x10eda237e7cc2205, 0x0d0b1576376aa18c,
      0xd299deb2239a14f1, 0xda7fb57dbed3d79f, 0x3ffbe9639b134076, 0x0fecfdfa6fd28026, 0x88707c1ea25aa40f,
      0xc49ff50653f79447, 0x3906031eff6154be, 0xa8b07fb3763de9fb, 0x3573480a635abb6e, 0xe561b6bdf8669801,
      0xaa7d3657299143fd, 0xbfe9b130a74be2a8, 0x58006857b92c7951, 0x19d270f77c5f0a50, 0x3846ea6a00673928,
      0x16b60b210096b7bb, 0xfd11efe1cdc04ae0, 0x0df4aa266162703d, 0xdc29dc488cd59d54, 0xa7f85154a569f184,
      0x8ae4ff06b38f941e, 0x918444e0d5fad085, 0x9fc82644c961219d, 0xb94afb36fa8300ca, 0xada40b22c2e2680a,
      0xa448941615f94ca6, 0x1fbe11c6063eec6b, 0xc12e3a029101f31f, 0x626abb41fa331038, 0xabf47f89e1108426,
      0x62c1be5eb2642dcb, 0x51cfe8384744b9bc, 0xd28ea6c120a421b4, 0x6a848740b53a8212, 0xd856d50323090d01,
      0x6024899f95b98bce, 0x7887a85ba33c58c1, 0xfbe6f974a17c4443, 0xb5fd32e09829f9c1, 0xa98a3c08f59e3dff,
      0xcad51e5584d92861, 0x7a4e776aef55118d, 0xfa02847956cebb36, 0x9990da03d0fbf774, 0xe94fd9042eebe333,
      0x555bdd337616c508, 0x99a1c5911738b830, 0x095e3d8d89e55cfd, 0xdaadaae55a177e3a, 0xaa39baf561bfbc7b,
      0xd2dbae01564e908c, 0xf1f1eb4dd68bdb8f, 0xffb0980fc05538e6, 0x2d64e6f554048953, 0x1008132a6b5f916f,
      0x28c05fc3309e361c, 0xbae1e39e888606cd, 0xd45f0bb262f31a01, 0x5ad7e3bd1a4e07ae, 0x386385b465e0294f,
      0xfe108372a9c49ac9, 0x3c1b7dd800a08254, 0x04219d57ea1dd90c, 0x7c354ab1db24148c, 0x8728ab8e795be26a,
      0x936c1c933b75d8bc, 0xd17dc1a8b0dfcef0, 0x55f5ea18c4ef34ba, 0x0677afb6cd22f31f, 0x64431b8af22c435d,
      0x26ea76357fa96e6a, 0x82b1b8291525f5f7, 0xba0bfdf1f6221d7e, 0xe21144ffc11fe65b, 0x3b409a33514d42ef,
      0x8bf1338b689f6936, 0x96f91aaf03a32cbd, 0x264ed4a2f987c87f, 0x8168404e2dbe9e78, 0x56a387086c9876c1};
  uint64_t y[100];

  vwadd_wx(100, x, 1, y);

  for (int i = 0; i < 100; i++) {
    if (y[i] != x[i] + 1) {
      return 1;
    }
  }

  vwadd_wx(100, x, -1, y);

  for (int i = 0; i < 100; i++) {
    if (y[i] != x[i] - 1) {
      return 1;
    }
  }

  return 0;
}
