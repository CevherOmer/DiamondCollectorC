# DiamondCollectorC

A simple console-based diamond collecting game written in C.  
Move your character using **W, A, S, D** keys and collect all diamonds while avoiding enemies. The game shows your remaining lives and the distance to each diamond in real-time.

---

## Game Features

- **Grid-based gameplay:** 10x10 terminal map.
- **Interactive controls:** Move with `W` (up), `A` (left), `S` (down), `D` (right).
- **Diamond collection:** Collect all 5 diamonds to win the game.
- **Enemies:** Avoid enemies; colliding with them reduces your lives.
- **Distance display:** Shows distance from player to each remaining diamond.
- **Lives and score tracking:** Track remaining lives and collected diamonds.
- **Random generation:** Diamonds and enemies are placed randomly at the start of each game.

---

## How to Play

1. Compile the C program:

```c
gcc diamond_collector.c -o diamond_collector
```

Run the game:

bash
Kopyala
Düzenle
./diamond_collector
Use the W, A, S, D keys to move your character:

W → Up

A → Left

S → Down

D → Right

Press Enter after each move.

Collect all diamonds (E) while avoiding enemies (A) to win. Your character is P.

###Example Gameplay
---
```c
Kopyala
Düzenle
##############################################################
#     |     |     |     |     |     |     |     |     |      #
#------------------------------------------------------------#
#     |     |     |     |     |     |     |     |     |      #
#------------------------------------------------------------#     Lives: 3       Score: 0 
#     |     |     |     |  P  |     |     |     |     |      #
#------------------------------------------------------------#
#     |     |     |     |     |     |     |     |     |      #
#------------------------------------------------------------#       Distances   
#     |     |     |     |     |     |     |     |     |      #
#------------------------------------------------------------#     Diamond 1 : 7
#     |     |     |     |     |     |     |     |     |      #
#------------------------------------------------------------#     Diamond 2 : 5
#     |     |     |     |     |     |     |     |     |      #
#------------------------------------------------------------#     Diamond 3 : 5
#     |     |     |     |     |     |     |     |     |      #
#------------------------------------------------------------#     Diamond 4 : 7
#     |     |     |     |     |     |     |     |     |      #
#------------------------------------------------------------#     Diamond 5 : 4
#     |     |     |     |     |     |     |     |     |      #
##############################################################
Choose the direction (w,a,s,d):

```
Winning & Losing
Win: Collect all 5 diamonds.

Lose: Lives reach zero (colliding with enemies too many times).


Author
---
Omer Cevher

Email: omerc3v@gmail.com
GitHub: https://github.com/CevherOmer
