// #include <stdio.h>

// #include "../entities/CreateEnemy.h"
// #include "../entities/Constants.h"

// void createEnemiesRockets()
// {

//     float verticalPosition = POSITION_ENEMIES_VERTICAL;

//     for (int i = 0; i < AMOUNT_ENEMIES_HORIZONTAL; i++)
//     {
//         float horizontalPosition = POSITION_ENEMIES_HORIZONTAL;

//         for (int j = 0; j < AMOUNT_ENEMIES_VERTICAL; j++)
//         {

//             enemiesMatrix[i][j] = createEnemy(horizontalPosition,
//                                               verticalPosition,
//                                               DIMENSION_ENEMIES_HORIZONTAL,
//                                               DIMENSION_ENEMIES_VERTICAL);

//             horizontalPosition += POSITION_ENEMIES_HORIZONTAL;
//         }
//         verticalPosition -= (AMOUNT_ENEMIES_VERTICAL + AMOUNT_ENEMIES_HORIZONTAL / 2);
//     }
// }