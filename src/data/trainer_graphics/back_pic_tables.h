const struct MonCoords gTrainerBackPicCoords[] =
{
    [TRAINER_BACK_PIC_AKIRA] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_RAN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_RED] = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_LEAF] = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_AKIRA] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_RAN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_WALLY] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_STEVEN] = {.size = 8, .y_offset = 4},
};

// this table goes functionally unused, since none of these pics are compressed
// and the place they would get extracted to gets overwritten later anyway
// the casts are so they'll play nice with the strict struct definition
const struct CompressedSpriteSheet gTrainerBackPicTable[] =
{
    (const u32 *)gTrainerBackPic_Akira, 0x2000, TRAINER_BACK_PIC_AKIRA,
    (const u32 *)gTrainerBackPic_Ran, 0x2000, TRAINER_BACK_PIC_RAN,
    (const u32 *)gTrainerBackPic_Red, 0x2800, TRAINER_BACK_PIC_RED,
    (const u32 *)gTrainerBackPic_Leaf, 0x2800, TRAINER_BACK_PIC_LEAF,
    (const u32 *)gTrainerBackPic_RubySapphireAkira, 0x2000, TRAINER_BACK_PIC_RUBY_SAPPHIRE_AKIRA,
    (const u32 *)gTrainerBackPic_RubySapphireRan, 0x2000, TRAINER_BACK_PIC_RUBY_SAPPHIRE_RAN,
    (const u32 *)gTrainerBackPic_Wally, 0x2000, TRAINER_BACK_PIC_WALLY,
    (const u32 *)gTrainerBackPic_Steven, 0x2000, TRAINER_BACK_PIC_STEVEN,
};

const struct CompressedSpritePalette gTrainerBackPicPaletteTable[] =
{
    TRAINER_BACK_PAL(AKIRA, gTrainerPalette_Akira),
    TRAINER_BACK_PAL(RAN, gTrainerPalette_Ran),
    TRAINER_BACK_PAL(RED, gTrainerBackPicPalette_Red),
    TRAINER_BACK_PAL(LEAF, gTrainerBackPicPalette_Leaf),
    TRAINER_BACK_PAL(RUBY_SAPPHIRE_AKIRA, gTrainerPalette_RubySapphireAkira),
    TRAINER_BACK_PAL(RUBY_SAPPHIRE_RAN, gTrainerPalette_RubySapphireRan),
    TRAINER_BACK_PAL(WALLY, gTrainerPalette_Wally),
    TRAINER_BACK_PAL(STEVEN, gTrainerPalette_Steven),
};
