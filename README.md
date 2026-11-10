# Astral Siege

A 2D space tower defence game in C++ where planets bend your shots with their gravity.

![Astral Siege gameplay](Assets/README/gameplay.png)

## About

Enemy ships close in on Earth, and you defend it with a slingshot-style launcher. Your shots curve around the planets' gravity, so aiming means planning around them. Earn coins from kills, spend them on turrets and upgrades, and clear all three levels to win.

Made by a team of five, **The Alpha Beasts**, in C++ on DigiPen's Alpha Engine for Software Development Project 2 at the Singapore Institute of Technology (DigiPen), January – April 2025.

## Download and play

1. Download **AstralSiege-Windows.zip** from the [latest release](../../releases/latest).
2. Unzip it and run **AstralSiege.exe**.

Windows only. If Windows shows "Windows protected your PC", click **More info → Run anyway**.
If the game says a file like `VCRUNTIME140.dll` is missing, install the [Microsoft Visual C++ Redistributable (x64)](https://learn.microsoft.com/cpp/windows/latest-supported-vc-redist).

## Controls

Astral Siege is played with the mouse.

| Action | Control |
|---|---|
| Aim and fire the missile launcher | Left-click and drag back, then release. The further you drag, the faster the shot. |
| Choose a turret | Click Turret 1 or Turret 2 in the shop |
| Place the selected turret | Right-click in the placement area (not on a planet, the launcher or another turret) |
| Re-aim a turret | Left-click and drag the turret |
| Open the shop | Click the shop button |
| Buy upgrades | Click an item in the shop: explosive missiles, spreadshot, shield or zoom out |
| Sell a turret | Click Sell to turn on sell mode, then click a turret to sell it for half its price. Click Sell again to turn it off. |
| Pause | Click the pause button |
| Fullscreen / windowed | F11 |
| Skip the splash screen | Enter, Space, Esc or click |
| Back to main menu (Options, Controls, Credits) | Esc or the Back button |

Gravity arrows (a view of each planet's pull) can be turned on in **Options → Enable Arrows**.

## Team

- **Chloe Lau:** audio, currency and coins, menus, some of the art
- **Celeste Tong Jia Xuan:** game screens, menus and Earth
- **Javier Lee:** weapons, turrets and shop
- **Choi Meng Yew:** enemies, gravity and starfield
- **Guok Yi Yong:** difficulty, levels and camera

## Asset credits

- UI: Kenney
- Missile launcher: Zintoki
- Turret and bullets: Ansimuz
- Sound effects: Jesús Lastra
- Purchasing sound effect: Spring Spring
- Victory sound effect: Jon K. Fite
- Spaceship: [OpenGameArt – spaceship-9](https://opengameart.org/content/spaceship-9)
- Fonts: Chakra Petch, Press Start 2P

## Building from source

The project is a Visual Studio solution (C++, x64). It needs DigiPen's Alpha Engine, which is not included in this repository. Place it in `Extern/AlphaEngine/` to build.

JSON loading uses [nlohmann/json](https://github.com/nlohmann/json) (MIT licence).

## Copyright

All content © 2025 DigiPen Institute of Technology Singapore. All rights reserved.
