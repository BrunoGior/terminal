// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "common.h"

namespace Microsoft::Console::Render::Atlas::BoxGlyphs
{
    union Line
    {
        struct
        {
            u32 shape : 4; // Shape_ enum
            u32 begX : 6; // left
            u32 begY : 6; // top
            u32 endX : 6; // right
            u32 endY : 6; // bottom
            u32 offsetX : 2; // Offset_ enum
            u32 offsetY : 2; // Offset_ enum
        };
        u32 value = 0;
    };
    static_assert(sizeof(Line) == sizeof(u32));

    enum Shape : u32
    {
        Shape_Filled100,
        Shape_Filled075,
        Shape_Filled050,
        Shape_Filled025,
        Shape_EmptyRect,
        Shape_RoundRect,
        Shape_LightLine,
        Shape_HeavyLine,
    };

    enum Offset : u32
    {
        Offset_Nul,
        Offset_Neg,
        Offset_Pos,
    };

    // 48 is divisible by 3 (sextant glyphs), 8 (most box drawing glyphs)
    // and 16 (allows us to express centers of box drawing glyphs).
    inline constexpr u32 Denominator = 48;
    inline constexpr f32 DenominatorMultiplier = 1.0f / Denominator;

    inline constexpr u32 Pos_Min = 49;
    inline constexpr u32 Pos_Max = 50;

    extern constinit Line lines[0xa0][4];

    consteval u32 q(const u32 a, const u32 b)
    {
        return a * Denominator / b;
    }

    constexpr f32 posToFloat(u32 pos)
    {
        return pos <= Denominator ? pos * DenominatorMultiplier : (pos == Pos_Min ? -0.5f : 1.5f);
    }

    constexpr bool isLine(u32)
    {
        return false; //xy >= 1 && xy <= 15;
    }
}
