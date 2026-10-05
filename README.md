\# C++ Sprite Animation Logic



A small C++ Project created to practice frame-based animation timing.



\## Concepts practiced



* Delta timing
* Frame timing
* Accumulated time
* Animation frame looping
* `while` loops
* `std::vector`
* Range-based `for`



\## How It Works



The animation stores:



* Current frame
* Total number of frames
* Time per frame
* Accumulated time



The `Update(delta)` method accumulates elapsed time and advances the animation whenever enough time has passed.



If a large delta represents more than one frame interval, the animation can advance multiple frames in a single update.



\## Example



With:



```text

Frames: 4

Time per frame: 0.5s



\## Technologies



* C++
* Visual Studio
* Git and GitHub

