// CREATED BY VLAD (LOW LEVEL GAMEDEV)
// UNDER MIT LICENSE
// https://github.com/meemknight/ourCraft

#pragma once
#include "glm/vec4.hpp"
#include "glm/vec2.hpp"
#include <glui/glui.h>
#include "raylib.h"

struct PlayerInventory;
struct BlocksLoader;
struct Item;
struct CraftingTableInventory;


struct UIEngine
{

    gl2d::Renderer2D renderer2d;
    glui::RendererUi menuRenderer;

    void init();

    gl2d::TextureAtlas uiAtlas{6, 1};


    gl2d::Font font;
    gl2d::Texture uiTexture;
    gl2d::Texture buttonTexture;

    gl2d::Texture itemsBar;
    gl2d::Texture itemsHighlighter;
    gl2d::Texture itemsBarInventory;
    gl2d::Texture oneInventorySlot;
    gl2d::Texture playerCell;

    glm::vec2 itemsBarSize;
    glm::vec2 itemsHighlighterSize;
    glm::vec2 itemsBarInventorySize;
    glm::vec2 oneInventorySlotSize;
    glm::vec2 playerCellSize;



    //cursorItemIndex returns -1 if outside the menu to throw items, and -2 if it is nowhere
    //if inside crafting, supply craftingTableInventory
    void renderGameUI(float deltaTime,
                      int w, int h, int itemSelected, PlayerInventory &inventory,
                      bool insideInventory, int &cursorItemIndex,
                      Item &itemToCraft
    );

};