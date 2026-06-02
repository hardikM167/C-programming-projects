# Snake Water Gun Game

## What is this?

A two-player game (you vs computer) where:
- Snake drinks water (Snake WINS)
- Water drowns gun (Water WINS)
- Gun shoots snake (Gun WINS)

## How to Run

```bash
gcc -o snake_water_gun snake_water_gun.c
./snake_water_gun
```

Then:
1. Choose: Snake (1), Water (2), or Gun (3)
2. Computer chooses randomly
3. See who wins!

## What I Learned

- Rand() function for random choices
- String comparison
- Game logic (who beats who)
- Switch-case statements (maybe)
- Player vs computer logic

## File

- `snake_water_gun.c` - Main game code

## Possible Improvements

- Best of 3 rounds
- Keep score across multiple games
- Better messages
- Input validation