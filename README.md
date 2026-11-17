*This project has been created as part of the 42 curriculum by abegou, aldecour.*

# Description

Cub3d is a graphical project about raycasting, not unlike ye olde engines of classics such as
 Wolfenstein.\
What does all of this entail ?\
First, a 2d map arranged in a grid composed of 0 or 1,
 0 being an empty square and 1 being a full square, aka a wall in common language.\
Once a map exists, the engine will launch rays across the player's FOV to get how far its
 position is from the nearest wall.
Then, its draws the wall bigger or smaller to simulate a depth effect.\
As for the ceiling and the floor, a scene description file contains the colors allows to simply
 fill out the rest of the screen.

# Instructions

After cloning the repo, simply run `make` to compile the program.

## Configuration

As said at the end of the description, a file acting as a scene description with the
 `.cub` extension will contain all relevant information for the programm to output what's wanted:
- The map must be composed of only 6 possible characters: 0 for an empty space,
1 for a wall, and N,S,E or W for the player’s start position and spawning orientation.\
This is a simple valid map:
```
111111
100101
101001
1100N1
111111
```
- The map must be closed/surrounded by walls, if not, an error will be returned.

- Except for the map content, each type of element can be separated by one or
more empty lines. As well, each type of information from an element can be separated
by one or more spaces.

- Except for the map content which always has to be the last, each type of
element can be set in any order in the file

- Except for the map, each element must begin with its type identifier (composed
by one or two characters), followed by its specific information in a strict order:
  - North texture:\
`NO ./path_to_the_north_texture`
    - identifier: NO
    - path to the north texture
  - South texture:\
`SO ./path_to_the_south_texture`
    - identifier: SO
    - path to the south texture
  - West texture:\
`WE ./path_to_the_west_texture`
    - identifier: WE
    - path to the west texture
  - East texture:\
`EA ./path_to_the_east_texture`
    - identifier: EA
    - path to the east texture
  - Floor color:\
`F 220,100,0`
    - identifier: F
    - R,G,B colors in range [0,255]: 0, 255, 255
  - Ceiling color:\
`C 225,30,0`
    - identifier: C
    - R,G,B colors in range [0,255]: 0, 255, 255

# Resources

[Cool raycasting concept guide](https://lodev.org/cgtutor/raycasting.html)
. It explains the maths pretty simply and shows visual examples.\
[Another insight on raycasting basics and history](https://xitog.github.io/dgx/passetemps/tech_raycasting_fr.html).
