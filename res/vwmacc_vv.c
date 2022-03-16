#include <stddef.h>
#include <stdint.h>

void vwmacc_vv(size_t n, const uint32_t x[], const uint32_t y[], uint64_t z[]);

int main() {
  uint32_t x[100] = {0x1040cbc6, 0xb5b013eb, 0xdf671519, 0x82a2933f, 0xe4b70546, 0x697a5817, 0x653b2413, 0x94b3c4a6,
                     0x882cc382, 0x74c0aa5f, 0xda70797b, 0x4fc260a9, 0x747f4bbf, 0x244b24fa, 0x9a0a3e28, 0x0863c8f4,
                     0x6da5e8a0, 0x1a75412a, 0x2be0dcc0, 0x0b840e58, 0x9c86b5c8, 0x2b7f68c9, 0x0375120a, 0x8c0b6807,
                     0x0f8892e7, 0x8e3122c5, 0x0a89ed3b, 0xcc208795, 0x83d6c65a, 0xf49df9f6, 0xb9661744, 0x516f28f4,
                     0x531ed55c, 0x7858a7a5, 0xed539f20, 0xc07ed9a1, 0x2271a5e7, 0x804d30e9, 0x6c989b20, 0x8bdb33da,
                     0xb613c80d, 0xdcddeb49, 0x8b1bb9f7, 0x9190656f, 0xb5919140, 0xe20031c4, 0x9f141540, 0x526f0795,
                     0x91e2b37f, 0x5e50f5e0, 0x2580c562, 0x400ab546, 0x406a162a, 0x44fde422, 0xe254ae3f, 0xae6e8a54,
                     0xcc6e7f5d, 0x60402deb, 0x77989abd, 0x64cd52a1, 0xa329ab7d, 0x5096abc2, 0xfd260da3, 0x40c0c7ca,
                     0x2cfdd21d, 0x287c8aef, 0x52ed3bb5, 0xf2b07d99, 0x2394a953, 0x24e5f4ce, 0xbbb0c78d, 0xe9187199,
                     0x03c04181, 0xeb36239e, 0x32f3c1dc, 0x2872a6bf, 0x38bd62e6, 0x409c4450, 0x0e645b50, 0xb647b47a,
                     0x6e102b90, 0x792e4846, 0x216f0eaa, 0x413c6371, 0x9680194e, 0xf829fd99, 0xe268a43f, 0x47504e2d,
                     0x297fc655, 0xb346729f, 0x25e7bb6f, 0xa0e8eb7a, 0x70fdec79, 0x65981198, 0xaf69f80f, 0x2ed8e127,
                     0x8e6b4431, 0x0d02e14d, 0xf0f6953b, 0x90d1396f};
  uint32_t y[100] = {0x0e8cd5d6, 0x3b0246eb, 0xc707e718, 0x70f58753, 0x25cc9dde, 0xc0a408ac, 0x132116c6, 0xfc4fd2b7,
                     0x87ce7058, 0xd9f14c24, 0xd21bb980, 0x26b7aa04, 0xd1146062, 0x475f7bed, 0x81c96bb1, 0x0f6539b6,
                     0x9bcd049a, 0x8a628ee6, 0x7657bb3d, 0x0195bc6b, 0xfb98c629, 0x1ccf6343, 0x9d5e6b2f, 0x921ab738,
                     0x01670a8f, 0xb1cfb4a3, 0x696ad246, 0x36c56a2a, 0xa61e926b, 0xe5bcb827, 0x2efd2b2c, 0xa0a27f76,
                     0x00d84fee, 0xc559833c, 0xdca3dcd0, 0xdde4474d, 0x6484299f, 0xfdb88b6c, 0xf8bcc516, 0x48ad3155,
                     0x2a2e5d55, 0x64ead384, 0x39e6c522, 0xe19acbbc, 0x7f5005f8, 0xbc04e230, 0xe04e88d7, 0xbd0bfffa,
                     0xbf6d7b0f, 0x5dc93148, 0xe6b80801, 0x158849a9, 0xed79858c, 0x70d4d33f, 0x2c928e62, 0x96a0e4e2,
                     0xdf45d2a8, 0x019215c1, 0x2b4fa531, 0x2b6d8718, 0x00e7c7b9, 0x053e1f72, 0x503a3516, 0x593a4061,
                     0x659b2631, 0x3836ec6e, 0xa163b4e6, 0x0a476781, 0xc5ac980a, 0xaad020a1, 0xa864420f, 0x887e2b64,
                     0x2f1c1c35, 0xecb85e7d, 0xa09fabf6, 0x4715c9ea, 0x11f03295, 0x705dd8a8, 0xa844eeff, 0xe1fcb33b,
                     0x35f8ba2d, 0x9ede89da, 0xff6b2f7c, 0x51b54693, 0x6ca28d37, 0x5fda32e3, 0xb2a758a5, 0x00666e29,
                     0x7466378d, 0x1cd1d87c, 0xe81fe9e6, 0x205774ac, 0xe86b35db, 0x32b930f3, 0x639f163c, 0x8451dabf,
                     0x6ba35457, 0xd0d4785d, 0x2ebb6b16, 0x5efc92f4};
  uint64_t z[100] = {
      0xdff64e6dbe0f8f0b, 0x93c996d9769d1faf, 0x989aef3e3be87d8a, 0x5274cfdeb23a9feb, 0x600ee9bf8b961f83,
      0x45fc5dc8fe8210e2, 0x54161246f55c3ab9, 0x8cde8247df8bd5e1, 0xe7a9e20e0c3b3027, 0xfc724b0081c42438,
      0x3ddbc253bb7a0cf9, 0x345507a51f1d414d, 0x3d4734f9e59c1392, 0xc8407c7f4b11d194, 0x5cd7c3286b83325a,
      0xb9b59a1dcf4b3e53, 0xffe8ef4e125dd58e, 0xd82ec9d3676a8630, 0x75159e61828a4e99, 0x53c47c0db6e9a436,
      0x83cb72da70e297dd, 0xbd3cc287e01bc1dc, 0x58a9b7e644c8edcd, 0x5d73e8514e22ed22, 0x949428d29345d792,
      0x66b5785f929beb53, 0x4a2027e3a0ec29ad, 0xfd5e9ca64425f134, 0x40072174e887c7ff, 0x4d3cc7aac628ba5e,
      0x3810386efe44cb70, 0xdb88e13f5206c350, 0x0bbe4e8bbb36a945, 0x63eb132e3d0305c1, 0xc8c5e0ba296c0c01,
      0x264ef80750bb6cc6, 0x48a97e9670b18448, 0x39465a37a51bfc1f, 0xa593ec424ec932c4, 0x40ca3b32b451d66b,
      0xdff0a4c4a8ed0f82, 0xa6e0414055fe9338, 0x68a5fcfbfc332b76, 0x7341b40cf62eb1d2, 0x7fdb87d7967760b8,
      0x0169b6039831c537, 0x92580b9855a903e3, 0x9c354b61fb096480, 0x58feb0ff4dacce07, 0x1829796ac7e39830,
      0x36d23c0fd6b79f5e, 0xae3e14ba0fb8d8af, 0x2d98bb6fc331f5d4, 0xeee78b66ec731cde, 0x3f6ee7c7424ac1cb,
      0x5e6c3d33e76e40ea, 0x4576ba73bb549978, 0x3acec2aed46c1e55, 0xfb73a7764d9d6438, 0xa0ef79ecceeb4e8c,
      0x7f9ded9c52bf9598, 0x9c0da58a888aa688, 0xbc35654a0fd2f0cf, 0x64c432048f1470fb, 0xb5a2d58c549ce5fc,
      0x1ded568e87bbc452, 0x18eeb1a97123a5bc, 0xe0c6a96fccad131a, 0x84b168a88c0a9f47, 0x83b7febc4bbb672e,
      0xf714888f2298fde3, 0x814fd249a831b309, 0xda0d9b3295d8d066, 0xc2b37b8d270465d4, 0xee31b48566d7304f,
      0x57fce2783d78ec8b, 0x2bb45441c3f91fc4, 0x4b80cbe00120dd5e, 0xd8eb34f4a6465957, 0x0e71a6db8ccbc3f9,
      0x1a08738c400724d5, 0x980a666e0405a29c, 0xbea52070583b6d9d, 0x5bce9229a7425543, 0x025b0efd9a3640a3,
      0xad6f2f674f02fe6e, 0xb8d334d51e178990, 0xd0fc0fd9af65e309, 0xbd26e92adf6e6070, 0xcc65b51e311086f9,
      0x57b99497a3231369, 0xddf00b76114bc672, 0xcb322165880fa76e, 0xd6eb30afe21c0a13, 0x633c2984afab419c,
      0xbf29598d96101298, 0xfa656c71a3f35de7, 0x7b045bf5b6513aa7, 0xe2b60172de4a7a0c, 0x03267bee83bc35ee};
  uint64_t e[100] = {
      0xe0e2ca95820da48f, 0x82a8823ab587aa68, 0x9fdbf9f0344b06e2, 0x1b23b39c43e19658, 0x5c078e877250a037,
      0x2be15db65e31f856, 0x5ba68b9565a6c36b, 0x8e6a3e5dba97948b, 0x1fec191551c344d7, 0xeb16fd2609df4d94,
      0x44977b24f179ad79, 0x40651ae9a125fdf1, 0x27ed1be014aab2b0, 0xd25edd350e2d2b06, 0x8f1c757929fae402,
      0xba36c426923e6fcb, 0xd4fe4a5ac7ee45ce, 0xcc06ed71ccfc5dec, 0x895e4da4bd9f2859, 0x53d6bc7232dc42fe,
      0x85817449b9ce64e5, 0xc221eee13e80e977, 0x5754b85b977d6ba3, 0x8f3ae7c9a6b4afaa, 0x94a9f1fc983dec9b,
      0x8977f811faa292c2, 0x4e771ff514ab6dcf, 0xf24578c4fd48e1a6, 0x6b9ecbe11af8039d, 0x4e67ba21348a9ed8,
      0x2b1abe9a37ed3720, 0xbd32e2c76afcafc8, 0x0c048a838b5868cd, 0x4858b90f10f0bf6d, 0xcb5a2a7cab7cd601,
      0x2ec4ff9035a28933, 0x562fab97cff58dc1, 0x3a6964941bb3216b, 0xa27f3b15fec62784, 0x1fd14e887358c7cd,
      0xd3c28031618134d3, 0x9906b6fab6130fdc, 0x4e35ca49dee6f144, 0x805e70bdf06e3456, 0x5ad77aa7775256b8,
      0x0961164adb3a21f7, 0x9e57cd401450dca3, 0x86a61998686b3702, 0x74c50a03f4465778, 0x3ab702763a989f30,
      0x331e1dbdecd374c0, 0xb3a10db66fab79e5, 0x28ef6f897693e6cc, 0x0d4ffa64f61e473c, 0x3a447985134a67e9,
      0x7fff341604b72f12, 0x4c0e6b61df637880, 0x3b65efa4c3990380, 0x0faf7eb80ce1d365, 0xb209176bc24af4a4,
      0x7f49dfc85df5aded, 0x9db425490d6ba0ec, 0xbb50a394b8d8dbd1, 0x7b55f36fc7d6a485, 0xc77e3dd646f16b89,
      0x26d1449c53bdcb04, 0xfa48f4d8ac418e5a, 0xe03dd7e8e993ec33, 0x7c9622a5d7268485, 0x7770be09f2541cbc,
      0x0e750364307b0926, 0x8c0113300220c5cd, 0xdabe50aa3cec7c1b, 0xc44448022317cdfa, 0xdb36137217356db7,
      0x63382005e1dc4e21, 0x2fae2495c5249ba2, 0x67dcd936126131de, 0xd3fc95a90a61ae07, 0x171632f9949baa17,
      0x313cbc465c056d25, 0x6a100626dad0a438, 0xbe91b10064c5bdf5, 0x70a0df4eb0055526, 0xd5961c886907a665,
      0xaa8016b64b10bf19, 0xc1c3facdf7180e2b, 0xd1189888c2c7be3e, 0xd00560f3b848e041, 0xc3c285496fb533fd,
      0x543094b6e55e8023, 0xd1ecacb6fef3446a, 0xc0c9a52141d0fff1, 0xeb0c62713b993d5b, 0x43e01043c623af20,
      0xa887472592f244b1, 0xcaa3cad322fa9e8e, 0x789e9e37edbd2ba0, 0xdff74e183ff3f61e, 0xd9e59d27292c41ba};

  vwmacc_vv(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    if (z[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}
