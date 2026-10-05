# C++ Sprite Animation Logic

A small C++ project created to practice frame-based animation timing.

## Concepts Practiced

- Delta time
- Frame timing
- Accumulated time
- Animation frame looping
- `while` loops
- `std::vector`
- Range-based `for`

## How It Works

The animation stores:

- Current frame
- Total number of frames
- Time per frame
- Accumulated time

The `Update(delta)` method accumulates elapsed time and advances the animation whenever enough time has passed.

If a large delta represents more than one frame interval, the animation can advance multiple frames in a single update.

## Example

With:

```text
Frames: 4
Time per frame: 0.5s
```

The valid frame indexes are:

```text
0, 1, 2, 3
```

The animation loops back to frame `0` after the last frame.

## Technologies

- C++
- Visual Studio
- Git
- GitHub