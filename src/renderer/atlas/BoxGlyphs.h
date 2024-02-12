#pragma once

namespace Microsoft::Console::Render::Atlas::BoxGlyphs
{
    struct Line
    {
        u32 width : 4 = 0;
        u32 begX : 5 = 0;
        u32 begY : 5 = 0;
        u32 endX : 5 = 0;
        u32 endY : 5 = 0;
        u32 flags : 8 = 0;
    };
    static_assert(sizeof(Line) == sizeof(u32));

    constexpr bool isLine(u32 xy)
    {
        return xy >= 1 && xy <= 8;
    }

    constexpr f32 widthToFloat(u32 width)
    {
        return width / 8.0f;
    }

    constexpr f32 posToFloat(u32 pos)
    {
        return pos <= 16 ? pos / 16.0f : (pos == 17 ? -0.5f : 1.5f);
    }

    inline constexpr u32 Pos_Min = 17;
    inline constexpr u32 Pos_Max = 18;

    inline constexpr u32 Flags_LineMask = 0b00'11;
    inline constexpr u32 Flags_LineRect = 0b00'01;
    inline constexpr u32 Flags_LineRoundedRect = 0b00'10;

    constexpr u32 Flags_ShadeToIndex(u32 flag) { return (flag >> 2) - 1; }
    inline constexpr u32 Flags_ShadeMask = 0b11'00;
    inline constexpr u32 Flags_Shade25 = 0b01'00;
    inline constexpr u32 Flags_Shade50 = 0b10'00;
    inline constexpr u32 Flags_Shade75 = 0b11'00;

    inline constexpr u32 light = 1;
    inline constexpr u32 heavy = 2;

    consteval u32 q(const u32 a, const u32 b)
    {
        return a * 16 / b;
    }

    inline constexpr Line lines[0xa0][4] = {
        // U+2500 ─
        Line{ light, q(0, 2), q(1, 2), q(2, 2), q(1, 2) },
        Line{},
        Line{},
        Line{},
        // U+2501 ━
        Line{ heavy, q(0, 2), q(1, 2), q(2, 2), q(1, 2) },
        Line{},
        Line{},
        Line{},
        // U+2502 │
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(2, 2) },
        Line{},
        Line{},
        Line{},
        // U+2503 ┃
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(2, 2) },
        Line{},
        Line{},
        Line{},
        // U+2504 ┄
        Line{ light, q(0, 16), q(1, 2), q(2, 16), q(1, 2) },
        Line{ light, q(6, 16), q(1, 2), q(10, 16), q(1, 2) },
        Line{ light, q(14, 16), q(1, 2), q(16, 16), q(1, 2) },
        Line{},
        // U+2505 ┅
        Line{ heavy, q(0, 16), q(1, 2), q(2, 16), q(1, 2) },
        Line{ heavy, q(6, 16), q(1, 2), q(10, 16), q(1, 2) },
        Line{ heavy, q(14, 16), q(1, 2), q(16, 16), q(1, 2) },
        Line{},
        // U+2506 ┆
        Line{ light, q(1, 2), q(0, 16), q(1, 2), q(2, 16) },
        Line{ light, q(1, 2), q(6, 16), q(1, 2), q(10, 16) },
        Line{ light, q(1, 2), q(14, 16), q(1, 2), q(16, 16) },
        Line{},
        // U+2507 ┇
        Line{ heavy, q(1, 2), q(0, 16), q(1, 2), q(2, 16) },
        Line{ heavy, q(1, 2), q(6, 16), q(1, 2), q(10, 16) },
        Line{ heavy, q(1, 2), q(14, 16), q(1, 2), q(16, 16) },
        Line{},
        // U+2508 ┈
        Line{ light, q(0, 16), q(1, 2), q(2, 16), q(1, 2) },
        Line{ light, q(4, 16), q(1, 2), q(6, 16), q(1, 2) },
        Line{ light, q(8, 16), q(1, 2), q(10, 16), q(1, 2) },
        Line{ light, q(12, 16), q(1, 2), q(14, 16), q(1, 2) },
        // U+2509 ┉
        Line{ heavy, q(0, 16), q(1, 2), q(2, 16), q(1, 2) },
        Line{ heavy, q(4, 16), q(1, 2), q(6, 16), q(1, 2) },
        Line{ heavy, q(8, 16), q(1, 2), q(10, 16), q(1, 2) },
        Line{ heavy, q(12, 16), q(1, 2), q(14, 16), q(1, 2) },
        // U+250a ┊
        Line{ light, q(1, 2), q(0, 16), q(1, 2), q(2, 16) },
        Line{ light, q(1, 2), q(4, 16), q(1, 2), q(6, 16) },
        Line{ light, q(1, 2), q(8, 16), q(1, 2), q(10, 16) },
        Line{ light, q(1, 2), q(12, 16), q(1, 2), q(14, 16) },
        // U+250b ┋
        Line{ heavy, q(1, 2), q(0, 16), q(1, 2), q(2, 16) },
        Line{ heavy, q(1, 2), q(4, 16), q(1, 2), q(6, 16) },
        Line{ heavy, q(1, 2), q(8, 16), q(1, 2), q(10, 16) },
        Line{ heavy, q(1, 2), q(12, 16), q(1, 2), q(14, 16) },
        // U+250c ┌
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ light, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+250d ┍
        Line{ heavy, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ light, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+250e ┎
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+250f ┏
        Line{ heavy, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+2510 ┐
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+2511 ┑
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+2512 ┒
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+2513 ┓
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+2514 └
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // vertical
        Line{},
        Line{},
        // U+2515 ┕
        Line{ heavy, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // vertical
        Line{},
        Line{},
        // U+2516 ┖
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // vertical
        Line{},
        Line{},
        // U+2517 ┗
        Line{ heavy, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // vertical
        Line{},
        Line{},
        // U+2518 ┘
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        // U+2519 ┙
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        // U+251a ┚
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        // U+251b ┛
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        // U+251c ├
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        // U+251d ┝
        Line{ heavy, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+251e ┞
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ light, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+251f ┟
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2520 ┠
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(0, 2), q(0, 2), q(1, 2), q(1, 2) }, // vertical
        Line{},
        Line{},
        // U+2521 ┡
        Line{ heavy, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ light, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2522 ┢
        Line{ heavy, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2523 ┣
        Line{ heavy, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(0, 2), q(0, 2), q(1, 2), q(1, 2) }, // vertical
        Line{},
        Line{},
        // U+2524 ┤
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ heavy, q(0, 2), q(0, 2), q(1, 2), q(1, 2) }, // vertical
        Line{},
        Line{},
        // U+2525 ┥
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ heavy, q(0, 2), q(0, 2), q(1, 2), q(1, 2) }, // vertical
        Line{},
        Line{},
        // U+2526 ┦
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2527 ┧
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2528 ┨
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ heavy, q(0, 2), q(0, 2), q(1, 2), q(1, 2) }, // vertical
        Line{},
        Line{},
        // U+2529 ┩
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+252a ┪
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+252b ┫
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ heavy, q(0, 2), q(0, 2), q(1, 2), q(1, 2) }, // vertical
        Line{},
        Line{},
        // U+252c ┬
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        Line{},
        // U+252d ┭
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+252e ┮
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+252f ┯
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        Line{},
        // U+2530 ┰
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        Line{},
        // U+2531 ┱
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2532 ┲
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2533 ┳
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        Line{},
        // U+2534 ┴
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        // U+2535 ┵
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        // U+2536 ┶
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        // U+2537 ┷
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        // U+2538 ┸
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        // U+2539 ┹
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        // U+253a ┺
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        // U+253b ┻
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        // U+253c ┼
        Line{ light, q(0, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+253d ┽
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        // U+253e ┾
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        // U+253f ┿
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+2540 ╀
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2541 ╁
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2542 ╂
        Line{ light, q(0, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+2543 ╃
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        // U+2544 ╄
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        // U+2545 ╅
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        // U+2546 ╆
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        // U+2547 ╇
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2548 ╈
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // horizontal
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        // U+2549 ╉
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        // U+254a ╊
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        // U+254b ╋
        Line{ heavy, q(0, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
        Line{},
        Line{},
        // U+254c ╌
        Line{ light, q(0, 16), q(1, 2), q(4, 16), q(1, 2) },
        Line{ light, q(8, 16), q(1, 2), q(12, 16), q(1, 2) },
        Line{},
        Line{},
        // U+254d ╍
        Line{ heavy, q(0, 16), q(1, 2), q(4, 16), q(1, 2) },
        Line{ heavy, q(8, 16), q(1, 2), q(12, 16), q(1, 2) },
        Line{},
        Line{},
        // U+254e ╎
        Line{ light, q(1, 2), q(0, 16), q(1, 2), q(4, 16) },
        Line{ light, q(1, 2), q(8, 16), q(1, 2), q(12, 16) },
        Line{},
        Line{},
        // U+254f ╏
        Line{ heavy, q(1, 2), q(0, 16), q(1, 2), q(4, 16) },
        Line{ heavy, q(1, 2), q(8, 16), q(1, 2), q(12, 16) },
        Line{},
        Line{},
        // U+2550 ═
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2551 ║
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2552 ╒
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2553 ╓
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2554 ╔
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2555 ╕
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2556 ╖
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2557 ╗
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2558 ╘
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2559 ╙
        Line{},
        Line{},
        Line{},
        Line{},
        // U+255a ╚
        Line{},
        Line{},
        Line{},
        Line{},
        // U+255b ╛
        Line{},
        Line{},
        Line{},
        Line{},
        // U+255c ╜
        Line{},
        Line{},
        Line{},
        Line{},
        // U+255d ╝
        Line{},
        Line{},
        Line{},
        Line{},
        // U+255e ╞
        Line{},
        Line{},
        Line{},
        Line{},
        // U+255f ╟
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2560 ╠
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2561 ╡
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2562 ╢
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2563 ╣
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2564 ╤
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2565 ╥
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2566 ╦
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2567 ╧
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2568 ╨
        Line{},
        Line{},
        Line{},
        Line{},
        // U+2569 ╩
        Line{},
        Line{},
        Line{},
        Line{},
        // U+256a ╪
        Line{},
        Line{},
        Line{},
        Line{},
        // U+256b ╫
        Line{},
        Line{},
        Line{},
        Line{},
        // U+256c ╬
        Line{},
        Line{},
        Line{},
        Line{},
        // U+256d ╭
        Line{ light, q(1, 2), q(1, 2), Pos_Max, Pos_Max, Flags_LineRoundedRect },
        Line{},
        Line{},
        Line{},
        // U+256e ╮
        Line{ light, Pos_Min, q(1, 2), q(1, 2), Pos_Max, Flags_LineRoundedRect },
        Line{},
        Line{},
        Line{},
        // U+256f ╯
        Line{ light, Pos_Min, Pos_Min, q(1, 2), q(1, 2), Flags_LineRoundedRect },
        Line{},
        Line{},
        Line{},
        // U+2570 ╰
        Line{ light, q(1, 2), Pos_Min, Pos_Max, q(1, 2), Flags_LineRoundedRect },
        Line{},
        Line{},
        Line{},
        // U+2571 ╱
        Line{ light, q(0, 2), q(2, 2), q(2, 2), q(0, 2) },
        Line{},
        Line{},
        Line{},
        // U+2572 ╲
        Line{ light, q(0, 2), q(0, 2), q(2, 2), q(2, 2) },
        Line{},
        Line{},
        Line{},
        // U+2573 ╳
        Line{ light, q(0, 2), q(2, 2), q(2, 2), q(0, 2) },
        Line{ light, q(0, 2), q(0, 2), q(2, 2), q(2, 2) },
        Line{},
        Line{},
        // U+2574 ╴
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{},
        Line{},
        Line{},
        // U+2575 ╵
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        Line{},
        // U+2576 ╶
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{},
        Line{},
        Line{},
        // U+2577 ╷
        Line{ light, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        Line{},
        Line{},
        // U+2578 ╸
        Line{ heavy, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{},
        Line{},
        Line{},
        // U+2579 ╹
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{},
        Line{},
        Line{},
        // U+257a ╺
        Line{ heavy, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{},
        Line{},
        Line{},
        // U+257b ╻
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        Line{},
        Line{},
        // U+257c ╼
        Line{ light, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ heavy, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{},
        Line{},
        // U+257d ╽
        Line{ light, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ heavy, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        Line{},
        // U+257e ╾
        Line{ heavy, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
        Line{ light, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
        Line{},
        Line{},
        // U+257f ╿
        Line{ heavy, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
        Line{ light, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
        Line{},
        Line{},
        // U+2580 ▀
        Line{ 8, q(1, 2), q(0, 2), q(1, 2), q(1, 2) },
        Line{},
        Line{},
        Line{},
        // U+2581 ▁
        Line{ 8, q(1, 2), q(7, 8), q(1, 2), q(8, 8) },
        Line{},
        Line{},
        Line{},
        // U+2582 ▂
        Line{ 8, q(1, 2), q(6, 8), q(1, 2), q(8, 8) },
        Line{},
        Line{},
        Line{},
        // U+2583 ▃
        Line{ 8, q(1, 2), q(5, 8), q(1, 2), q(8, 8) },
        Line{},
        Line{},
        Line{},
        // U+2584 ▄
        Line{ 8, q(1, 2), q(4, 8), q(1, 2), q(8, 8) },
        Line{},
        Line{},
        Line{},
        // U+2585 ▅
        Line{ 8, q(1, 2), q(3, 8), q(1, 2), q(8, 8) },
        Line{},
        Line{},
        Line{},
        // U+2586 ▆
        Line{ 8, q(1, 2), q(2, 8), q(1, 2), q(8, 8) },
        Line{},
        Line{},
        Line{},
        // U+2587 ▇
        Line{ 8, q(1, 2), q(1, 8), q(1, 2), q(8, 8) },
        Line{},
        Line{},
        Line{},
        // U+2588 █
        Line{ 8, q(1, 2), q(0, 1), q(1, 2), q(1, 1) },
        Line{},
        Line{},
        Line{},
        // U+2589 ▉
        Line{ 7, q(7, 16), q(0, 1), q(7, 16), q(1, 1) },
        Line{},
        Line{},
        Line{},
        // U+258a ▊
        Line{ 6, q(6, 16), q(0, 1), q(6, 16), q(1, 1) },
        Line{},
        Line{},
        Line{},
        // U+258b ▋
        Line{ 5, q(5, 16), q(0, 1), q(5, 16), q(1, 1) },
        Line{},
        Line{},
        Line{},
        // U+258c ▌
        Line{ 4, q(4, 16), q(0, 1), q(4, 16), q(1, 1) },
        Line{},
        Line{},
        Line{},
        // U+258d ▍
        Line{ 3, q(3, 16), q(0, 1), q(3, 16), q(1, 1) },
        Line{},
        Line{},
        Line{},
        // U+258e ▎
        Line{ 2, q(2, 16), q(0, 1), q(2, 16), q(1, 1) },
        Line{},
        Line{},
        Line{},
        // U+258f ▏
        Line{ 1, q(1, 16), q(0, 1), q(1, 16), q(1, 1) },
        Line{},
        Line{},
        Line{},
        // U+2590 ▐
        Line{ 4, q(12, 16), q(0, 1), q(12, 16), q(1, 1) },
        Line{},
        Line{},
        Line{},
        // U+2591 ░
        Line{ 8, q(1, 2), q(0, 1), q(1, 2), q(1, 1), Flags_Shade25 },
        Line{},
        Line{},
        Line{},
        // U+2592 ▒
        Line{ 8, q(1, 2), q(0, 1), q(1, 2), q(1, 1), Flags_Shade50 },
        Line{},
        Line{},
        Line{},
        // U+2593 ▓
        Line{ 8, q(1, 2), q(0, 1), q(1, 2), q(1, 1), Flags_Shade75 },
        Line{},
        Line{},
        Line{},
        // U+2594 ▔
        Line{ 8, q(1, 2), q(0, 8), q(1, 2), q(1, 8) },
        Line{},
        Line{},
        Line{},
        // U+2595 ▕
        Line{ 1, q(15, 16), q(0, 1), q(15, 16), q(1, 1) },
        Line{},
        Line{},
        Line{},
        // U+2596 ▖
        Line{ 4, q(2, 8), q(1, 2), q(2, 8), q(2, 2) },
        Line{},
        Line{},
        Line{},
        // U+2597 ▗
        Line{ 4, q(6, 8), q(1, 2), q(6, 8), q(2, 2) },
        Line{},
        Line{},
        Line{},
        // U+2598 ▘
        Line{ 4, q(2, 8), q(0, 2), q(2, 8), q(1, 2) },
        Line{},
        Line{},
        Line{},
        // U+2599 ▙
        Line{ 4, q(2, 8), q(0, 2), q(2, 8), q(2, 2) },
        Line{ 4, q(6, 8), q(1, 2), q(6, 8), q(2, 2) },
        Line{},
        Line{},
        // U+259a ▚
        Line{ 4, q(2, 8), q(0, 2), q(2, 8), q(1, 2) },
        Line{ 4, q(6, 8), q(1, 2), q(6, 8), q(2, 2) },
        Line{},
        Line{},
        // U+259b ▛
        Line{ 4, q(2, 8), q(0, 2), q(2, 8), q(2, 2) },
        Line{ 4, q(6, 8), q(0, 2), q(6, 8), q(1, 2) },
        Line{},
        Line{},
        // U+259c ▜
        Line{ 4, q(2, 8), q(0, 2), q(2, 8), q(1, 2) },
        Line{ 4, q(6, 8), q(0, 2), q(6, 8), q(2, 2) },
        Line{},
        Line{},
        // U+259d ▝
        Line{ 4, q(6, 8), q(0, 2), q(6, 8), q(1, 2) },
        Line{},
        Line{},
        Line{},
        // U+259e ▞
        Line{ 4, q(2, 8), q(1, 2), q(2, 8), q(2, 2) },
        Line{ 4, q(6, 8), q(0, 2), q(6, 8), q(1, 2) },
        Line{},
        Line{},
        // U+259f ▟
        Line{ 4, q(2, 8), q(1, 2), q(2, 8), q(2, 2) },
        Line{ 4, q(6, 8), q(0, 2), q(6, 8), q(2, 2) },
        Line{},
        Line{},
    };
}
