// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#include "pch.h"
#include "BoxGlyphs.h"

using namespace Microsoft::Console::Render::Atlas;
using namespace Microsoft::Console::Render::Atlas::BoxGlyphs;

constinit Line BoxGlyphs::lines[0xa0][4] = {
    // U+2500 ─
    Line{ Shape_LightLine, q(0, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
    Line{},
    Line{},
    Line{},
    // U+2501 ━
    Line{ Shape_HeavyLine, q(0, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
    Line{},
    Line{},
    Line{},
    // U+2502 │
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    Line{},
    Line{},
    // U+2503 ┃
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    Line{},
    Line{},
    // U+2504 ┄
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(2, 16), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(6, 16), q(1, 2), q(10, 16), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(14, 16), q(1, 2), q(16, 16), q(1, 2) }, // horizontal
    Line{},
    // U+2505 ┅
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(2, 16), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(6, 16), q(1, 2), q(10, 16), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(14, 16), q(1, 2), q(16, 16), q(1, 2) }, // horizontal
    Line{},
    // U+2506 ┆
    Line{ Shape_LightLine, q(1, 2), q(0, 16), q(1, 2), q(2, 16) }, // vertical
    Line{ Shape_LightLine, q(1, 2), q(6, 16), q(1, 2), q(10, 16) }, // vertical
    Line{ Shape_LightLine, q(1, 2), q(14, 16), q(1, 2), q(16, 16) }, // vertical
    Line{},
    // U+2507 ┇
    Line{ Shape_HeavyLine, q(1, 2), q(0, 16), q(1, 2), q(2, 16) }, // vertical
    Line{ Shape_HeavyLine, q(1, 2), q(6, 16), q(1, 2), q(10, 16) }, // vertical
    Line{ Shape_HeavyLine, q(1, 2), q(14, 16), q(1, 2), q(16, 16) }, // vertical
    Line{},
    // U+2508 ┈
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(2, 16), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(4, 16), q(1, 2), q(6, 16), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(8, 16), q(1, 2), q(10, 16), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(12, 16), q(1, 2), q(14, 16), q(1, 2) }, // horizontal
    // U+2509 ┉
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(2, 16), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(4, 16), q(1, 2), q(6, 16), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(8, 16), q(1, 2), q(10, 16), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(12, 16), q(1, 2), q(14, 16), q(1, 2) }, // horizontal
    // U+250a ┊
    Line{ Shape_LightLine, q(1, 2), q(0, 16), q(1, 2), q(2, 16) }, // vertical
    Line{ Shape_LightLine, q(1, 2), q(4, 16), q(1, 2), q(6, 16) }, // vertical
    Line{ Shape_LightLine, q(1, 2), q(8, 16), q(1, 2), q(10, 16) }, // vertical
    Line{ Shape_LightLine, q(1, 2), q(12, 16), q(1, 2), q(14, 16) }, // vertical
    // U+250b ┋
    Line{ Shape_HeavyLine, q(1, 2), q(0, 16), q(1, 2), q(2, 16) }, // vertical
    Line{ Shape_HeavyLine, q(1, 2), q(4, 16), q(1, 2), q(6, 16) }, // vertical
    Line{ Shape_HeavyLine, q(1, 2), q(8, 16), q(1, 2), q(10, 16) }, // vertical
    Line{ Shape_HeavyLine, q(1, 2), q(12, 16), q(1, 2), q(14, 16) }, // vertical
    // U+250c ┌
    Line{ Shape_LightLine, q(7, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    Line{},
    // U+250d ┍
    Line{ Shape_HeavyLine, q(7, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    Line{},
    // U+250e ┎
    Line{ Shape_LightLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    Line{},
    // U+250f ┏
    Line{ Shape_HeavyLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    Line{},
    // U+2510 ┐
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(9, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    Line{},
    // U+2511 ┑
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(9, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    Line{},
    // U+2512 ┒
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    Line{},
    // U+2513 ┓
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    Line{},
    // U+2514 └
    Line{ Shape_LightLine, q(7, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 16), q(1, 2), q(8, 16) }, // up
    Line{},
    Line{},
    // U+2515 ┕
    Line{ Shape_HeavyLine, q(7, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 16), q(1, 2), q(8, 16) }, // up
    Line{},
    Line{},
    // U+2516 ┖
    Line{ Shape_LightLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 16), q(1, 2), q(8, 16) }, // up
    Line{},
    Line{},
    // U+2517 ┗
    Line{ Shape_HeavyLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 16), q(1, 2), q(8, 16) }, // up
    Line{},
    Line{},
    // U+2518 ┘
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(9, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    Line{},
    // U+2519 ┙
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(9, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    Line{},
    // U+251a ┚
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    Line{},
    // U+251b ┛
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    Line{},
    // U+251c ├
    Line{ Shape_LightLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    Line{},
    // U+251d ┝
    Line{ Shape_HeavyLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    Line{},
    // U+251e ┞
    Line{ Shape_LightLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 16), q(1, 2), q(8, 16) }, // up
    Line{ Shape_LightLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    // U+251f ┟
    Line{ Shape_LightLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 16), q(1, 2), q(8, 16) }, // up
    Line{ Shape_HeavyLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    // U+2520 ┠
    Line{ Shape_LightLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 1), q(1, 2), q(1, 1) }, // vertical
    Line{},
    Line{},
    // U+2521 ┡
    Line{ Shape_HeavyLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 16), q(1, 2), q(8, 16) }, // up
    Line{ Shape_LightLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    // U+2522 ┢
    Line{ Shape_HeavyLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 16), q(1, 2), q(8, 16) }, // up
    Line{ Shape_HeavyLine, q(1, 2), q(8, 16), q(1, 2), q(16, 16) }, // down
    Line{},
    // U+2523 ┣
    Line{ Shape_HeavyLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 1), q(1, 2), q(1, 1) }, // vertical
    Line{},
    Line{},
    // U+2524 ┤
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(1, 2), q(0, 1), q(1, 2), q(1, 1) }, // vertical
    Line{},
    Line{},
    // U+2525 ┥
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(1, 2), q(0, 1), q(1, 2), q(1, 1) }, // vertical
    Line{},
    Line{},
    // U+2526 ┦
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+2527 ┧
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+2528 ┨
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(1, 2), q(0, 1), q(1, 2), q(1, 1) }, // vertical
    Line{},
    Line{},
    // U+2529 ┩
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+252a ┪
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+252b ┫
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(1, 2), q(0, 1), q(1, 2), q(1, 1) }, // vertical
    Line{},
    Line{},
    // U+252c ┬
    Line{ Shape_LightLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    Line{},
    // U+252d ┭
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(9, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+252e ┮
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(7, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+252f ┯
    Line{ Shape_HeavyLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    Line{},
    // U+2530 ┰
    Line{ Shape_LightLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    Line{},
    // U+2531 ┱
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(10, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+2532 ┲
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+2533 ┳
    Line{ Shape_HeavyLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    Line{},
    // U+2534 ┴
    Line{ Shape_LightLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    Line{},
    // U+2535 ┵
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(9, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    // U+2536 ┶
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(7, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    // U+2537 ┷
    Line{ Shape_HeavyLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    Line{},
    // U+2538 ┸
    Line{ Shape_LightLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    Line{},
    // U+2539 ┹
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    // U+253a ┺
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    // U+253b ┻
    Line{ Shape_HeavyLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    Line{},
    // U+253c ┼
    Line{ Shape_LightLine, q(0, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    Line{},
    // U+253d ┽
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    // U+253e ┾
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    // U+253f ┿
    Line{ Shape_HeavyLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    Line{},
    // U+2540 ╀
    Line{ Shape_LightLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+2541 ╁
    Line{ Shape_LightLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+2542 ╂
    Line{ Shape_LightLine, q(0, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    Line{},
    // U+2543 ╃
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    // U+2544 ╄
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    // U+2545 ╅
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(10, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    // U+2546 ╆
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(6, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    // U+2547 ╇
    Line{ Shape_HeavyLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+2548 ╈
    Line{ Shape_HeavyLine, q(0, 1), q(1, 2), q(1, 1), q(1, 2) }, // horizontal
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    // U+2549 ╉
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_LightLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    // U+254a ╊
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(8, 16), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(8, 16), q(1, 2), q(16, 16), q(1, 2) }, // right
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    // U+254b ╋
    Line{ Shape_HeavyLine, q(0, 2), q(1, 2), q(2, 2), q(1, 2) }, // horizontal
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(2, 2) }, // vertical
    Line{},
    Line{},
    // U+254c ╌
    Line{ Shape_LightLine, q(0, 16), q(1, 2), q(4, 16), q(1, 2) },
    Line{ Shape_LightLine, q(8, 16), q(1, 2), q(12, 16), q(1, 2) },
    Line{},
    Line{},
    // U+254d ╍
    Line{ Shape_HeavyLine, q(0, 16), q(1, 2), q(4, 16), q(1, 2) },
    Line{ Shape_HeavyLine, q(8, 16), q(1, 2), q(12, 16), q(1, 2) },
    Line{},
    Line{},
    // U+254e ╎
    Line{ Shape_LightLine, q(1, 2), q(0, 16), q(1, 2), q(4, 16) },
    Line{ Shape_LightLine, q(1, 2), q(8, 16), q(1, 2), q(12, 16) },
    Line{},
    Line{},
    // U+254f ╏
    Line{ Shape_HeavyLine, q(1, 2), q(0, 16), q(1, 2), q(4, 16) },
    Line{ Shape_HeavyLine, q(1, 2), q(8, 16), q(1, 2), q(12, 16) },
    Line{},
    Line{},
    // U+2550 ═
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+2551 ║
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    Line{},
    // U+2552 ╒
    Line{ Shape_LightLine, q(7, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_EmptyRect, q(8, 16), q(8, 16), Pos_Max, Pos_Max, Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+2553 ╓
    Line{ Shape_LightLine, q(8, 16), q(8, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_EmptyRect, q(8, 16), q(8, 16), Pos_Max, Pos_Max, Offset_Pos, Offset_Nul },
    Line{},
    Line{},
    // U+2554 ╔
    Line{ Shape_EmptyRect, q(8, 16), q(8, 16), Pos_Max, Pos_Max, Offset_Neg, Offset_Neg },
    Line{ Shape_EmptyRect, q(8, 16), q(8, 16), Pos_Max, Pos_Max, Offset_Pos, Offset_Pos },
    Line{},
    Line{},
    // U+2555 ╕
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+2556 ╖
    Line{ Shape_LightLine, q(6, 16), q(8, 16), q(16, 16), q(8, 16) },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    // U+2557 ╗
    Line{},
    Line{},
    Line{},
    Line{},
    // U+2558 ╘
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+2559 ╙
    Line{ Shape_LightLine, q(6, 16), q(8, 16), q(16, 16), q(8, 16) },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    // U+255a ╚
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+255b ╛
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+255c ╜
    Line{ Shape_LightLine, q(6, 16), q(8, 16), q(16, 16), q(8, 16) },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    // U+255d ╝
    Line{},
    Line{},
    Line{},
    Line{},
    // U+255e ╞
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+255f ╟
    Line{},
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    // U+2560 ╠
    Line{},
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    // U+2561 ╡
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+2562 ╢
    Line{},
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    // U+2563 ╣
    Line{},
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    // U+2564 ╤
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+2565 ╥
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    // U+2566 ╦
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+2567 ╧
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+2568 ╨
    Line{},
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    // U+2569 ╩
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+256a ╪
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Neg },
    Line{ Shape_LightLine, q(0, 16), q(8, 16), q(16, 16), q(8, 16), Offset_Nul, Offset_Pos },
    Line{},
    Line{},
    // U+256b ╫
    Line{},
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Neg, Offset_Nul },
    Line{ Shape_LightLine, q(8, 16), q(0, 16), q(8, 16), q(16, 16), Offset_Pos, Offset_Nul },
    Line{},
    // U+256c ╬
    Line{},
    Line{},
    Line{},
    Line{},
    // U+256d ╭
    Line{ Shape_RoundRect, q(1, 2), q(1, 2), Pos_Max, Pos_Max },
    Line{},
    Line{},
    Line{},
    // U+256e ╮
    Line{ Shape_RoundRect, Pos_Min, q(1, 2), q(1, 2), Pos_Max },
    Line{},
    Line{},
    Line{},
    // U+256f ╯
    Line{ Shape_RoundRect, Pos_Min, Pos_Min, q(1, 2), q(1, 2) },
    Line{},
    Line{},
    Line{},
    // U+2570 ╰
    Line{ Shape_RoundRect, q(1, 2), Pos_Min, Pos_Max, q(1, 2) },
    Line{},
    Line{},
    Line{},
    // U+2571 ╱
    Line{ Shape_LightLine, q(0, 2), q(2, 2), q(2, 2), q(0, 2) },
    Line{},
    Line{},
    Line{},
    // U+2572 ╲
    Line{ Shape_LightLine, q(0, 2), q(0, 2), q(2, 2), q(2, 2) },
    Line{},
    Line{},
    Line{},
    // U+2573 ╳
    Line{ Shape_LightLine, q(0, 2), q(2, 2), q(2, 2), q(0, 2) },
    Line{ Shape_LightLine, q(0, 2), q(0, 2), q(2, 2), q(2, 2) },
    Line{},
    Line{},
    // U+2574 ╴
    Line{ Shape_LightLine, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
    Line{},
    Line{},
    Line{},
    // U+2575 ╵
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    Line{},
    Line{},
    // U+2576 ╶
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
    Line{},
    Line{},
    Line{},
    // U+2577 ╷
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    Line{},
    Line{},
    // U+2578 ╸
    Line{ Shape_HeavyLine, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
    Line{},
    Line{},
    Line{},
    // U+2579 ╹
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{},
    Line{},
    Line{},
    // U+257a ╺
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
    Line{},
    Line{},
    Line{},
    // U+257b ╻
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    Line{},
    Line{},
    // U+257c ╼
    Line{ Shape_LightLine, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
    Line{},
    Line{},
    // U+257d ╽
    Line{ Shape_LightLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_HeavyLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    Line{},
    // U+257e ╾
    Line{ Shape_HeavyLine, q(0, 2), q(1, 2), q(1, 2), q(1, 2) }, // left
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(2, 2), q(1, 2) }, // right
    Line{},
    Line{},
    // U+257f ╿
    Line{ Shape_HeavyLine, q(1, 2), q(0, 2), q(1, 2), q(1, 2) }, // up
    Line{ Shape_LightLine, q(1, 2), q(1, 2), q(1, 2), q(2, 2) }, // down
    Line{},
    Line{},
    // U+2580 ▀
    Line{ Shape_Filled100, q(0, 1), q(0, 2), q(1, 1), q(1, 2) },
    Line{},
    Line{},
    Line{},
    // U+2581 ▁
    Line{ Shape_Filled100, q(0, 1), q(7, 8), q(1, 1), q(8, 8) },
    Line{},
    Line{},
    Line{},
    // U+2582 ▂
    Line{ Shape_Filled100, q(0, 1), q(6, 8), q(1, 1), q(8, 8) },
    Line{},
    Line{},
    Line{},
    // U+2583 ▃
    Line{ Shape_Filled100, q(0, 1), q(5, 8), q(1, 1), q(8, 8) },
    Line{},
    Line{},
    Line{},
    // U+2584 ▄
    Line{ Shape_Filled100, q(0, 1), q(4, 8), q(1, 1), q(8, 8) },
    Line{},
    Line{},
    Line{},
    // U+2585 ▅
    Line{ Shape_Filled100, q(0, 1), q(3, 8), q(1, 1), q(8, 8) },
    Line{},
    Line{},
    Line{},
    // U+2586 ▆
    Line{ Shape_Filled100, q(0, 1), q(2, 8), q(1, 1), q(8, 8) },
    Line{},
    Line{},
    Line{},
    // U+2587 ▇
    Line{ Shape_Filled100, q(0, 1), q(1, 8), q(1, 1), q(8, 8) },
    Line{},
    Line{},
    Line{},
    // U+2588 █
    Line{ Shape_Filled100, q(0, 1), q(0, 1), q(1, 1), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+2589 ▉
    Line{ Shape_Filled100, q(0, 8), q(0, 1), q(7, 8), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+258a ▊
    Line{ Shape_Filled100, q(0, 8), q(0, 1), q(8, 8), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+258b ▋
    Line{ Shape_Filled100, q(0, 8), q(0, 1), q(5, 8), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+258c ▌
    Line{ Shape_Filled100, q(0, 8), q(0, 1), q(4, 8), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+258d ▍
    Line{ Shape_Filled100, q(0, 8), q(0, 1), q(3, 8), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+258e ▎
    Line{ Shape_Filled100, q(0, 8), q(0, 1), q(2, 8), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+258f ▏
    Line{ Shape_Filled100, q(0, 8), q(0, 1), q(1, 8), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+2590 ▐
    Line{ Shape_Filled100, q(1, 2), q(0, 1), q(2, 2), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+2591 ░
    Line{ Shape_Filled025, q(0, 1), q(0, 1), q(1, 1), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+2592 ▒
    Line{ Shape_Filled050, q(0, 1), q(0, 1), q(1, 1), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+2593 ▓
    Line{ Shape_Filled075, q(0, 1), q(0, 1), q(1, 1), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+2594 ▔
    Line{ Shape_Filled100, q(0, 1), q(0, 8), q(1, 1), q(1, 8) },
    Line{},
    Line{},
    Line{},
    // U+2595 ▕
    Line{ Shape_Filled100, q(7, 8), q(0, 1), q(8, 8), q(1, 1) },
    Line{},
    Line{},
    Line{},
    // U+2596 ▖
    Line{ Shape_Filled100, q(0, 2), q(1, 2), q(1, 2), q(2, 2) },
    Line{},
    Line{},
    Line{},
    // U+2597 ▗
    Line{ Shape_Filled100, q(1, 2), q(1, 2), q(2, 2), q(2, 2) },
    Line{},
    Line{},
    Line{},
    // U+2598 ▘
    Line{ Shape_Filled100, q(0, 2), q(0, 2), q(1, 2), q(1, 2) },
    Line{},
    Line{},
    Line{},
    // U+2599 ▙
    Line{ Shape_Filled100, q(0, 2), q(0, 2), q(1, 2), q(2, 2) },
    Line{ Shape_Filled100, q(1, 2), q(1, 2), q(2, 2), q(2, 2) },
    Line{},
    Line{},
    // U+259a ▚
    Line{ Shape_Filled100, q(0, 2), q(0, 2), q(1, 2), q(1, 2) },
    Line{ Shape_Filled100, q(1, 2), q(1, 2), q(2, 2), q(2, 2) },
    Line{},
    Line{},
    // U+259b ▛
    Line{ Shape_Filled100, q(0, 2), q(0, 2), q(1, 2), q(2, 2) },
    Line{ Shape_Filled100, q(1, 2), q(0, 2), q(2, 2), q(1, 2) },
    Line{},
    Line{},
    // U+259c ▜
    Line{ Shape_Filled100, q(0, 2), q(0, 2), q(1, 2), q(1, 2) },
    Line{ Shape_Filled100, q(1, 2), q(0, 2), q(2, 2), q(2, 2) },
    Line{},
    Line{},
    // U+259d ▝
    Line{ Shape_Filled100, q(1, 2), q(0, 2), q(2, 2), q(1, 2) },
    Line{},
    Line{},
    Line{},
    // U+259e ▞
    Line{ Shape_Filled100, q(0, 2), q(1, 2), q(1, 2), q(2, 2) },
    Line{ Shape_Filled100, q(1, 2), q(0, 2), q(2, 2), q(1, 2) },
    Line{},
    Line{},
    // U+259f ▟
    Line{ Shape_Filled100, q(0, 2), q(1, 2), q(1, 2), q(2, 2) },
    Line{ Shape_Filled100, q(1, 2), q(0, 2), q(2, 2), q(2, 2) },
    Line{},
    Line{},
};
