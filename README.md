Description
  Timber Man is a simple 2D arcade-style game where the player chops a tree while avoiding falling branches.
  The player can move left or right to chop the tree.
  Branches randomly fall on the left or right.
  Clouds and a bee move in the background for a dynamic environment.
  The game has a score system, time bar, and “Game Over” functionality.

Features
  Player can chop tree using Left/Right keys.
  Dynamic branches that randomly appear on left/right.
  Animated background: moving clouds and a bee.
  Time bar showing remaining time.
  Score tracking for each successful chop.
  Collision detection with branches → ends the game.
  Pause and resume using Enter key.

Technologies Used
  C++ – Core language for game logic.
  SFML (Simple and Fast Multimedia Library) – For graphics, sprites, window, and event handling.
  Fonts and Textures – .ttf fonts and .png images for visuals.

Installation / How to Run
  1) Install SFML for your system.
  2) Clone or download the project folder.
  3) Ensure all graphics and fonts are in the graphics/ and font/ folders.
  4) Compile using your C++ compiler:
     g++ TimberMan.cpp -o TimberMan -lsfml-graphics -lsfml-window -lsfml-system
  5) run-> ./TimberMan
  6) Use Left/Right arrow keys to chop, Enter to start, Esc to exit


Gameplay Instructions
  Chop the tree by pressing Left/Right keys.
  Avoid getting hit by branches (look at the lowest branch).
  Keep chopping to increase your score.
  Game ends if the player is hit by a branch or time runs out.
  The time bar at the bottom shows remaining time.

TimberMan/
│
├── TimberMan.cpp         # Main game code
├── graphics/             # Contains all PNG images
│   ├── background.png
│   ├── tree.png
│   ├── branch.png
│   ├── player.png
│   ├── axe.png
│   ├── log.png
│   ├── bee.png
│   └── cloud.png
├── font/
│   └── KOMIKAP_.ttf
└── README.md


Benefits / Learning Outcomes
  Demonstrates real-time game programming in C++.
  Shows knowledge of event handling, sprites, textures, and collisions.
  Teaches array handling and procedural logic for game mechanics.
  Illustrates deltaTime usage for smooth movement independent of FPS.
  Can be extended to add sound, animations, or levels.


Future Improvements
  Add sound effects for chopping and dying.
  Add multiple difficulty levels (faster branches, shorter time).
  Add animations for player, falling log, and branches.
  Add leaderboard for high scores.
  Add multiplayer mode.
