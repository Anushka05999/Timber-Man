# Timberman Game 

A C++ game built with **SFML** inspired by the classic Timberman.  
The player chops down a tree while avoiding branches, racing against time, and scoring as high as possible.

---

## Features
- Chop left or right to avoid branches.
- Randomly spawning clouds, bees, and branches for dynamic gameplay.
- Timer-based challenge with time extensions per chop.
- Fun sound effects (chop, death, out of time).
- Simple yet engaging gameplay loop.

---

## Tech Stack
- **Language:** C++  
- **Library:** SFML (Simple and Fast Multimedia Library)  
- **Graphics & Audio:** SFML Textures, Sprites, and Sound  

---

## Project Structure
/graphics -> images (player, tree, bee, clouds, etc.)
/sounds -> audio files (chop, death, out_of_time)
/font -> game fonts
main.cpp -> game source code

---

g++ main.cpp -o timberman -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
./timberman

