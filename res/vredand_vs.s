    .text
    .balign 4
    .global vredand_vs
vredand_vs:
    vsetvli t0, a0, e64, m4, ta, ma
    vle64.v v4, (a1)
    vle64.v v8, (a2)
    vle64.v v12, (a3)
    vredand.vs v12, v4, v8
    vse64.v v12, (a3)
    ret
