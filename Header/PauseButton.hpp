/******************************************************************************/
/**
 * @file        PauseButton.hpp
 * @project     Astral Siege
 * @author      Celeste Tong Jia Xuan (primary)
 * @brief       Declares the pause button, the pause pop-up (volume slider,
 *              vector-field toggle) and the quit-confirmation pop-up.
 * @copyright   All content © 2025 DigiPen Institute of Technology Singapore.
 *              All rights reserved.
 */
/******************************************************************************/

#pragma once

extern bool PauseShowConfirmation;
extern float SliderValue;
extern bool IsVectorEnabled;
void PauseButton_Update();
void PauseButton_Draw();

void PopUpPause_Draw();
void UpdateSlider();

void UpdateVectorEnable();
void DrawVectorEnable();

void PopUpQuit_Update();
void PopUpQuit_Draw();

enum class PauseOption {
    MAIN_MENU,
    TUTORIAL,
    QUIT_GAME,
    COUNT
};