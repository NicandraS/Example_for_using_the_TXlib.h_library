#include "TXlib.h"

void SpruceDraw();
void BunDraw();
void FoxDraw();
void WolfDraw();
void HareDraw();
void HomeDraw();

int main()
    {
    txCreateWindow (600, 600);
    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 600, 600);

    txSetFillColor (TX_LIGHTGREEN);
    txRectangle (0, 500, 600, 600);

    SpruceDraw();
    BunDraw();
    FoxDraw();
    WolfDraw();
    HareDraw();
    HomeDraw();
    return 0;
    }

void SpruceDraw()
    {
    txSetFillColor (TX_GREEN);
    POINT spruce1[] = { {10, 100}, {50, 60}, {90, 100} };
    txPolygon (spruce1, 3);
    POINT spruce2[] = { {10, 140}, {50, 100}, {90, 140} };
    txPolygon (spruce2, 3);
    POINT spruce3[] = { {10, 180}, {90, 180}, {50, 140} };
    txPolygon (spruce3, 3);
    POINT spruce4[] = { {10, 220}, {90, 220}, {50, 180} };
    txPolygon (spruce4, 3);
    }

void BunDraw()
    {
    txSetFillColor (TX_RED);
    txCircle (350, 550, 40);
    txSetFillColor (TX_YELLOW);
    txCircle (350, 550, 30);
    txSetColor (TX_RED);
    txCircle (350, 550, 20);
    txSetFillColor (TX_YELLOW);
    txSetColor (TX_YELLOW);
    txRectangle (330, 530, 370, 550);
    txSetFillColor (TX_RED);
    txCircle (340, 545, 5);
    txCircle (360, 545, 5);
    }

void FoxDraw()
    {
    txSetColor (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    txCircle (95, 400, 40);
    POINT fox1[] = { {45, 520}, {135, 520}, {95, 440} };
    txPolygon (fox1, 3);
    POINT fox2[] = { {120, 385}, {160, 400}, {120, 415} };
    txPolygon (fox2, 3);
    POINT fox3[] = { {45, 520}, {15, 435}, {30, 390}, {45, 520} };
    txPolygon (fox3, 4);
    POINT fox4[] = { {95, 370}, {115, 340}, {125, 400} };
    txPolygon (fox4, 3);
    POINT fox5[] = { {95, 370}, {75, 340}, {65, 400} };
    txPolygon (fox5, 3);
    }

void WolfDraw()
    {
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle (445, 440, 535, 520);
    txSetColor (TX_GRAY);
    txSetFillColor (TX_GRAY);
    txCircle (490, 400, 40);
    POINT wolf1[] = { {445, 440}, {535, 440}, {495, 520} };
    txPolygon (wolf1, 3);
    POINT wolf2[] = { {530, 520}, {545, 500}, {560, 510} };
    txPolygon (wolf2, 3);
    POINT wolf3[] = { {475, 370}, {475, 430}, {420, 400} };
    txPolygon (wolf3, 3);
    POINT wolf4[] = { {470, 370}, {480, 330}, {490, 360} };
    txPolygon (wolf4, 3);
    POINT wolf5[] = { {510, 370}, {500, 330}, {490, 360} };
    txPolygon (wolf5, 3);
    }

void HareDraw()
    {
    txSetColor (TX_GRAY);
    txSetFillColor (TX_GRAY);
    txRectangle (465, 125, 515, 190);
    txSetColor (TX_LIGHTBLUE, 5);
    txSetFillColor (TX_LIGHTBLUE);
    txCircle (490, 100, 25);
    txRectangle (495, 25, 505, 90);
    txRectangle (475, 25, 485, 90);
    POINT hare1[] = { {465, 125}, {515, 125}, {490, 185} };
    txPolygon (hare1, 3);
    txLine (440, 140, 540, 140);
    }

void HomeDraw()
    {
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txRectangle (200, 100, 400, 300);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txRectangle (260, 160, 340, 240);
    txSetColor (TX_RED, 5);
    POINT home1[] = { {280, 300}, {280, 320}, {200, 340}, {290, 330}, {300, 360}, {310, 330}, {400, 340}, {320, 320}, {320, 300} };
    txPolygon (home1, 9);
    txSetColor (TX_YELLOW);
    POINT home2[] = { {200, 100}, {300, 5}, {400, 100} };
    txPolygon (home2, 3);
    txTextOut (235, 115, "ÐÎÑÏÎÒÐÅÁÍÀÄÇÎÐ");
    txSetFillColor (TX_BLACK);
    txCircle (300, 200, 30);
    txSetFillColor (TX_YELLOW);
    txCircle (300, 200, 25);
    txSetFillColor (TX_BLACK);
    POINT home3[] = { {275, 200}, {280, 185}, {300, 200} };
    txPolygon (home3, 3);
    POINT home4[] = { {325, 200}, {320, 185}, {300, 200} };
    txPolygon (home4, 3);
    POINT home5[] = { {291, 223}, {309, 223}, {300, 200} };
    txPolygon (home5, 3);
    txCircle (300, 200, 5);
    }

