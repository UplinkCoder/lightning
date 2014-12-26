
#if __WORDSIZE == 32
#if defined(__ARM_PCS_VFP)
#define JIT_INSTR_MAX 44
    0,	/* data */
    0,	/* live */
    2,	/* align */
    0,	/* save */
    0,	/* load */
    0,	/* #name */
    0,	/* #note */
    0,	/* label */
    26,	/* prolog */
    0,	/* arg */
    4,	/* addr */
    8,	/* addi */
    4,	/* addcr */
    8,	/* addci */
    4,	/* addxr */
    4,	/* addxi */
    4,	/* subr */
    8,	/* subi */
    4,	/* subcr */
    8,	/* subci */
    4,	/* subxr */
    4,	/* subxi */
    12,	/* rsbi */
    4,	/* mulr */
    8,	/* muli */
    4,	/* qmulr */
    12,	/* qmuli */
    4,	/* qmulr_u */
    8,	/* qmuli_u */
    32,	/* divr */
    44,	/* divi */
    24,	/* divr_u */
    28,	/* divi_u */
    18,	/* qdivr */
    22,	/* qdivi */
    18,	/* qdivr_u */
    22,	/* qdivi_u */
    24,	/* remr */
    28,	/* remi */
    24,	/* remr_u */
    28,	/* remi_u */
    4,	/* andr */
    4,	/* andi */
    4,	/* orr */
    8,	/* ori */
    4,	/* xorr */
    8,	/* xori */
    4,	/* lshr */
    4,	/* lshi */
    4,	/* rshr */
    4,	/* rshi */
    4,	/* rshr_u */
    4,	/* rshi_u */
    4,	/* negr */
    4,	/* comr */
    14,	/* ltr */
    14,	/* lti */
    14,	/* ltr_u */
    14,	/* lti_u */
    14,	/* ler */
    14,	/* lei */
    14,	/* ler_u */
    14,	/* lei_u */
    14,	/* eqr */
    14,	/* eqi */
    14,	/* ger */
    14,	/* gei */
    14,	/* ger_u */
    14,	/* gei_u */
    14,	/* gtr */
    14,	/* gti */
    14,	/* gtr_u */
    14,	/* gti_u */
    14,	/* ner */
    14,	/* nei */
    4,	/* movr */
    8,	/* movi */
    4,	/* extr_c */
    4,	/* extr_uc */
    4,	/* extr_s */
    4,	/* extr_us */
    0,	/* extr_i */
    0,	/* extr_ui */
    8,	/* htonr_us */
    4,	/* htonr_ui */
    0,	/* htonr_ul */
    4,	/* ldr_c */
    12,	/* ldi_c */
    4,	/* ldr_uc */
    12,	/* ldi_uc */
    4,	/* ldr_s */
    12,	/* ldi_s */
    4,	/* ldr_us */
    12,	/* ldi_us */
    4,	/* ldr_i */
    12,	/* ldi_i */
    0,	/* ldr_ui */
    0,	/* ldi_ui */
    0,	/* ldr_l */
    0,	/* ldi_l */
    4,	/* ldxr_c */
    4,	/* ldxi_c */
    4,	/* ldxr_uc */
    4,	/* ldxi_uc */
    4,	/* ldxr_s */
    4,	/* ldxi_s */
    4,	/* ldxr_us */
    4,	/* ldxi_us */
    4,	/* ldxr_i */
    4,	/* ldxi_i */
    0,	/* ldxr_ui */
    0,	/* ldxi_ui */
    0,	/* ldxr_l */
    0,	/* ldxi_l */
    4,	/* str_c */
    12,	/* sti_c */
    4,	/* str_s */
    12,	/* sti_s */
    4,	/* str_i */
    12,	/* sti_i */
    0,	/* str_l */
    0,	/* sti_l */
    4,	/* stxr_c */
    4,	/* stxi_c */
    4,	/* stxr_s */
    4,	/* stxi_s */
    4,	/* stxr_i */
    4,	/* stxi_i */
    0,	/* stxr_l */
    0,	/* stxi_l */
    8,	/* bltr */
    8,	/* blti */
    8,	/* bltr_u */
    8,	/* blti_u */
    8,	/* bler */
    8,	/* blei */
    8,	/* bler_u */
    8,	/* blei_u */
    8,	/* beqr */
    16,	/* beqi */
    8,	/* bger */
    8,	/* bgei */
    8,	/* bger_u */
    8,	/* bgei_u */
    8,	/* bgtr */
    8,	/* bgti */
    8,	/* bgtr_u */
    8,	/* bgti_u */
    8,	/* bner */
    16,	/* bnei */
    8,	/* bmsr */
    8,	/* bmsi */
    8,	/* bmcr */
    8,	/* bmci */
    8,	/* boaddr */
    8,	/* boaddi */
    8,	/* boaddr_u */
    8,	/* boaddi_u */
    8,	/* bxaddr */
    8,	/* bxaddi */
    8,	/* bxaddr_u */
    8,	/* bxaddi_u */
    8,	/* bosubr */
    8,	/* bosubi */
    8,	/* bosubr_u */
    8,	/* bosubi_u */
    8,	/* bxsubr */
    8,	/* bxsubi */
    8,	/* bxsubr_u */
    8,	/* bxsubi_u */
    0,	/* jmpr */
    4,	/* jmpi */
    4,	/* callr */
    12,	/* calli */
    16,	/* epilog */
    0,	/* arg_f */
    4,	/* addr_f */
    8,	/* addi_f */
    4,	/* subr_f */
    8,	/* subi_f */
    8,	/* rsbi_f */
    4,	/* mulr_f */
    8,	/* muli_f */
    4,	/* divr_f */
    8,	/* divi_f */
    4,	/* negr_f */
    4,	/* absr_f */
    4,	/* sqrtr_f */
    18,	/* ltr_f */
    30,	/* lti_f */
    20,	/* ler_f */
    32,	/* lei_f */
    18,	/* eqr_f */
    30,	/* eqi_f */
    18,	/* ger_f */
    30,	/* gei_f */
    18,	/* gtr_f */
    30,	/* gti_f */
    18,	/* ner_f */
    30,	/* nei_f */
    18,	/* unltr_f */
    30,	/* unlti_f */
    18,	/* unler_f */
    30,	/* unlei_f */
    24,	/* uneqr_f */
    36,	/* uneqi_f */
    18,	/* unger_f */
    30,	/* ungei_f */
    18,	/* ungtr_f */
    30,	/* ungti_f */
    24,	/* ltgtr_f */
    36,	/* ltgti_f */
    18,	/* ordr_f */
    30,	/* ordi_f */
    18,	/* unordr_f */
    30,	/* unordi_f */
    8,	/* truncr_f_i */
    0,	/* truncr_f_l */
    8,	/* extr_f */
    4,	/* extr_d_f */
    4,	/* movr_f */
    12,	/* movi_f */
    4,	/* ldr_f */
    12,	/* ldi_f */
    8,	/* ldxr_f */
    4,	/* ldxi_f */
    4,	/* str_f */
    12,	/* sti_f */
    8,	/* stxr_f */
    4,	/* stxi_f */
    12,	/* bltr_f */
    24,	/* blti_f */
    12,	/* bler_f */
    24,	/* blei_f */
    12,	/* beqr_f */
    24,	/* beqi_f */
    12,	/* bger_f */
    24,	/* bgei_f */
    12,	/* bgtr_f */
    24,	/* bgti_f */
    12,	/* bner_f */
    24,	/* bnei_f */
    16,	/* bunltr_f */
    28,	/* bunlti_f */
    16,	/* bunler_f */
    28,	/* bunlei_f */
    20,	/* buneqr_f */
    32,	/* buneqi_f */
    16,	/* bunger_f */
    28,	/* bungei_f */
    12,	/* bungtr_f */
    24,	/* bungti_f */
    20,	/* bltgtr_f */
    32,	/* bltgti_f */
    12,	/* bordr_f */
    24,	/* bordi_f */
    12,	/* bunordr_f */
    24,	/* bunordi_f */
    0,	/* arg_d */
    4,	/* addr_d */
    20,	/* addi_d */
    4,	/* subr_d */
    20,	/* subi_d */
    20,	/* rsbi_d */
    4,	/* mulr_d */
    20,	/* muli_d */
    4,	/* divr_d */
    20,	/* divi_d */
    4,	/* negr_d */
    4,	/* absr_d */
    4,	/* sqrtr_d */
    18,	/* ltr_d */
    34,	/* lti_d */
    20,	/* ler_d */
    36,	/* lei_d */
    18,	/* eqr_d */
    34,	/* eqi_d */
    18,	/* ger_d */
    34,	/* gei_d */
    18,	/* gtr_d */
    34,	/* gti_d */
    18,	/* ner_d */
    34,	/* nei_d */
    18,	/* unltr_d */
    34,	/* unlti_d */
    18,	/* unler_d */
    34,	/* unlei_d */
    24,	/* uneqr_d */
    40,	/* uneqi_d */
    18,	/* unger_d */
    34,	/* ungei_d */
    18,	/* ungtr_d */
    34,	/* ungti_d */
    24,	/* ltgtr_d */
    40,	/* ltgti_d */
    18,	/* ordr_d */
    34,	/* ordi_d */
    18,	/* unordr_d */
    34,	/* unordi_d */
    8,	/* truncr_d_i */
    0,	/* truncr_d_l */
    8,	/* extr_d */
    4,	/* extr_f_d */
    4,	/* movr_d */
    16,	/* movi_d */
    4,	/* ldr_d */
    12,	/* ldi_d */
    8,	/* ldxr_d */
    4,	/* ldxi_d */
    4,	/* str_d */
    12,	/* sti_d */
    8,	/* stxr_d */
    4,	/* stxi_d */
    12,	/* bltr_d */
    28,	/* blti_d */
    12,	/* bler_d */
    28,	/* blei_d */
    12,	/* beqr_d */
    28,	/* beqi_d */
    12,	/* bger_d */
    28,	/* bgei_d */
    12,	/* bgtr_d */
    28,	/* bgti_d */
    12,	/* bner_d */
    28,	/* bnei_d */
    16,	/* bunltr_d */
    32,	/* bunlti_d */
    16,	/* bunler_d */
    32,	/* bunlei_d */
    20,	/* buneqr_d */
    36,	/* buneqi_d */
    16,	/* bunger_d */
    32,	/* bungei_d */
    12,	/* bungtr_d */
    28,	/* bungti_d */
    20,	/* bltgtr_d */
    36,	/* bltgti_d */
    12,	/* bordr_d */
    28,	/* bordi_d */
    12,	/* bunordr_d */
    28,	/* bunordi_d */
    0,	/* movr_w_f */
    0,	/* movr_ww_d */
    0,	/* movr_w_d */
    0,	/* movr_f_w */
    0,	/* movi_f_w */
    4,	/* movr_d_ww */
    8,	/* movi_d_ww */
    0,	/* movr_d_w */
    0,	/* movi_d_w */
    0,	/* x86_retval_f */
    0,	/* x86_retval_d */
#endif /* __ARM_PCS_VFP */
#endif /* __WORDSIZE */

#if __WORDSIZE == 32
#if !defined(__ARM_PCS_VFP)
#define JIT_INSTR_MAX 90
    0,	/* data */
    0,	/* live */
    2,	/* align */
    0,	/* save */
    0,	/* load */
    0,	/* #name */
    0,	/* #note */
    0,	/* label */
    18,	/* prolog */
    0,	/* arg */
    4,	/* addr */
    8,	/* addi */
    4,	/* addcr */
    8,	/* addci */
    4,	/* addxr */
    4,	/* addxi */
    4,	/* subr */
    8,	/* subi */
    4,	/* subcr */
    8,	/* subci */
    4,	/* subxr */
    4,	/* subxi */
    12,	/* rsbi */
    4,	/* mulr */
    8,	/* muli */
    4,	/* qmulr */
    12,	/* qmuli */
    4,	/* qmulr_u */
    8,	/* qmuli_u */
    40,	/* divr */
    44,	/* divi */
    40,	/* divr_u */
    44,	/* divi_u */
    34,	/* qdivr */
    38,	/* qdivi */
    34,	/* qdivr_u */
    38,	/* qdivi_u */
    40,	/* remr */
    44,	/* remi */
    40,	/* remr_u */
    44,	/* remi_u */
    4,	/* andr */
    4,	/* andi */
    4,	/* orr */
    8,	/* ori */
    4,	/* xorr */
    8,	/* xori */
    4,	/* lshr */
    4,	/* lshi */
    4,	/* rshr */
    4,	/* rshi */
    4,	/* rshr_u */
    4,	/* rshi_u */
    4,	/* negr */
    4,	/* comr */
    14,	/* ltr */
    14,	/* lti */
    14,	/* ltr_u */
    14,	/* lti_u */
    14,	/* ler */
    14,	/* lei */
    14,	/* ler_u */
    14,	/* lei_u */
    14,	/* eqr */
    14,	/* eqi */
    14,	/* ger */
    14,	/* gei */
    14,	/* ger_u */
    14,	/* gei_u */
    14,	/* gtr */
    14,	/* gti */
    14,	/* gtr_u */
    14,	/* gti_u */
    14,	/* ner */
    14,	/* nei */
    4,	/* movr */
    8,	/* movi */
    4,	/* extr_c */
    4,	/* extr_uc */
    4,	/* extr_s */
    4,	/* extr_us */
    0,	/* extr_i */
    0,	/* extr_ui */
    20,	/* htonr_us */
    16,	/* htonr_ui */
    0,	/* htonr_ul */
    4,	/* ldr_c */
    12,	/* ldi_c */
    4,	/* ldr_uc */
    12,	/* ldi_uc */
    4,	/* ldr_s */
    12,	/* ldi_s */
    4,	/* ldr_us */
    12,	/* ldi_us */
    4,	/* ldr_i */
    12,	/* ldi_i */
    0,	/* ldr_ui */
    0,	/* ldi_ui */
    0,	/* ldr_l */
    0,	/* ldi_l */
    4,	/* ldxr_c */
    4,	/* ldxi_c */
    4,	/* ldxr_uc */
    4,	/* ldxi_uc */
    4,	/* ldxr_s */
    4,	/* ldxi_s */
    4,	/* ldxr_us */
    4,	/* ldxi_us */
    4,	/* ldxr_i */
    4,	/* ldxi_i */
    0,	/* ldxr_ui */
    0,	/* ldxi_ui */
    0,	/* ldxr_l */
    0,	/* ldxi_l */
    4,	/* str_c */
    12,	/* sti_c */
    4,	/* str_s */
    12,	/* sti_s */
    4,	/* str_i */
    12,	/* sti_i */
    0,	/* str_l */
    0,	/* sti_l */
    4,	/* stxr_c */
    4,	/* stxi_c */
    4,	/* stxr_s */
    4,	/* stxi_s */
    4,	/* stxr_i */
    4,	/* stxi_i */
    0,	/* stxr_l */
    0,	/* stxi_l */
    8,	/* bltr */
    8,	/* blti */
    8,	/* bltr_u */
    8,	/* blti_u */
    8,	/* bler */
    8,	/* blei */
    8,	/* bler_u */
    8,	/* blei_u */
    8,	/* beqr */
    16,	/* beqi */
    8,	/* bger */
    8,	/* bgei */
    8,	/* bger_u */
    8,	/* bgei_u */
    8,	/* bgtr */
    8,	/* bgti */
    8,	/* bgtr_u */
    8,	/* bgti_u */
    8,	/* bner */
    16,	/* bnei */
    8,	/* bmsr */
    8,	/* bmsi */
    8,	/* bmcr */
    8,	/* bmci */
    8,	/* boaddr */
    8,	/* boaddi */
    8,	/* boaddr_u */
    8,	/* boaddi_u */
    8,	/* bxaddr */
    8,	/* bxaddi */
    8,	/* bxaddr_u */
    8,	/* bxaddi_u */
    8,	/* bosubr */
    8,	/* bosubi */
    8,	/* bosubr_u */
    8,	/* bosubi_u */
    8,	/* bxsubr */
    8,	/* bxsubi */
    8,	/* bxsubr_u */
    8,	/* bxsubi_u */
    0,	/* jmpr */
    4,	/* jmpi */
    4,	/* callr */
    12,	/* calli */
    12,	/* epilog */
    0,	/* arg_f */
    38,	/* addr_f */
    38,	/* addi_f */
    38,	/* subr_f */
    38,	/* subi_f */
    38,	/* rsbi_f */
    38,	/* mulr_f */
    38,	/* muli_f */
    38,	/* divr_f */
    38,	/* divi_f */
    12,	/* negr_f */
    12,	/* absr_f */
    34,	/* sqrtr_f */
    36,	/* ltr_f */
    40,	/* lti_f */
    36,	/* ler_f */
    40,	/* lei_f */
    36,	/* eqr_f */
    40,	/* eqi_f */
    36,	/* ger_f */
    40,	/* gei_f */
    36,	/* gtr_f */
    40,	/* gti_f */
    40,	/* ner_f */
    44,	/* nei_f */
    66,	/* unltr_f */
    74,	/* unlti_f */
    66,	/* unler_f */
    74,	/* unlei_f */
    66,	/* uneqr_f */
    74,	/* uneqi_f */
    66,	/* unger_f */
    74,	/* ungei_f */
    66,	/* ungtr_f */
    74,	/* ungti_f */
    70,	/* ltgtr_f */
    78,	/* ltgti_f */
    40,	/* ordr_f */
    44,	/* ordi_f */
    66,	/* unordr_f */
    74,	/* unordi_f */
    32,	/* truncr_f_i */
    0,	/* truncr_f_l */
    32,	/* extr_f */
    38,	/* extr_d_f */
    8,	/* movr_f */
    12,	/* movi_f */
    8,	/* ldr_f */
    16,	/* ldi_f */
    8,	/* ldxr_f */
    8,	/* ldxi_f */
    8,	/* str_f */
    16,	/* sti_f */
    8,	/* stxr_f */
    8,	/* stxi_f */
    40,	/* bltr_f */
    40,	/* blti_f */
    40,	/* bler_f */
    44,	/* blei_f */
    40,	/* beqr_f */
    44,	/* beqi_f */
    40,	/* bger_f */
    44,	/* bgei_f */
    40,	/* bgtr_f */
    44,	/* bgti_f */
    40,	/* bner_f */
    44,	/* bnei_f */
    40,	/* bunltr_f */
    44,	/* bunlti_f */
    40,	/* bunler_f */
    44,	/* bunlei_f */
    68,	/* buneqr_f */
    76,	/* buneqi_f */
    40,	/* bunger_f */
    44,	/* bungei_f */
    40,	/* bungtr_f */
    44,	/* bungti_f */
    68,	/* bltgtr_f */
    76,	/* bltgti_f */
    40,	/* bordr_f */
    44,	/* bordi_f */
    40,	/* bunordr_f */
    44,	/* bunordi_f */
    0,	/* arg_d */
    50,	/* addr_d */
    52,	/* addi_d */
    50,	/* subr_d */
    52,	/* subi_d */
    52,	/* rsbi_d */
    50,	/* mulr_d */
    52,	/* muli_d */
    50,	/* divr_d */
    52,	/* divi_d */
    20,	/* negr_d */
    20,	/* absr_d */
    42,	/* sqrtr_d */
    44,	/* ltr_d */
    46,	/* lti_d */
    44,	/* ler_d */
    46,	/* lei_d */
    44,	/* eqr_d */
    46,	/* eqi_d */
    44,	/* ger_d */
    46,	/* gei_d */
    44,	/* gtr_d */
    46,	/* gti_d */
    48,	/* ner_d */
    50,	/* nei_d */
    82,	/* unltr_d */
    86,	/* unlti_d */
    82,	/* unler_d */
    86,	/* unlei_d */
    82,	/* uneqr_d */
    86,	/* uneqi_d */
    82,	/* unger_d */
    86,	/* ungei_d */
    82,	/* ungtr_d */
    86,	/* ungti_d */
    86,	/* ltgtr_d */
    90,	/* ltgti_d */
    48,	/* ordr_d */
    50,	/* ordi_d */
    82,	/* unordr_d */
    86,	/* unordi_d */
    36,	/* truncr_d_i */
    0,	/* truncr_d_l */
    36,	/* extr_d */
    38,	/* extr_f_d */
    16,	/* movr_d */
    20,	/* movi_d */
    16,	/* ldr_d */
    24,	/* ldi_d */
    20,	/* ldxr_d */
    16,	/* ldxi_d */
    16,	/* str_d */
    24,	/* sti_d */
    20,	/* stxr_d */
    16,	/* stxi_d */
    48,	/* bltr_d */
    50,	/* blti_d */
    48,	/* bler_d */
    50,	/* blei_d */
    48,	/* beqr_d */
    50,	/* beqi_d */
    48,	/* bger_d */
    50,	/* bgei_d */
    48,	/* bgtr_d */
    50,	/* bgti_d */
    48,	/* bner_d */
    50,	/* bnei_d */
    48,	/* bunltr_d */
    50,	/* bunlti_d */
    48,	/* bunler_d */
    50,	/* bunlei_d */
    84,	/* buneqr_d */
    88,	/* buneqi_d */
    48,	/* bunger_d */
    50,	/* bungei_d */
    48,	/* bungtr_d */
    50,	/* bungti_d */
    84,	/* bltgtr_d */
    88,	/* bltgti_d */
    48,	/* bordr_d */
    50,	/* bordi_d */
    48,	/* bunordr_d */
    50,	/* bunordi_d */
    4,	/* movr_w_f */
    8,	/* movr_ww_d */
    0,	/* movr_w_d */
    6,	/* movr_f_w */
    8,	/* movi_f_w */
    12,	/* movr_d_ww */
    12,	/* movi_d_ww */
    0,	/* movr_d_w */
    0,	/* movi_d_w */
    0,	/* x86_retval_f */
    0,	/* x86_retval_d */
#endif /* __ARM_PCS_VFP */
#endif /* __WORDSIZE */
