# orbits
Triangles orbiting around a target on your GBA's screen, made using Butano.
The triangles attempt to face the target.

![Sample recording of game](./orbits.gif)

## Controls
- **A** - Add a triangle, up to 30
- **B** - Remove a triangle
- **L** - Decrease target's gravity
- **R** - Increase target's gravity

# Play
## Online (recommended)
Visit https://tk421bsod.github.io/sdev301-orbits

## Build from source
First, either open the project in the included VSCode Dev Container or install Butano and its dependencies.
If you use the latter option, set the `LIBBUTANO` `Makefile` variable to the path Butano is installed at.
Once finished, run `make`.
Then open `orbits.gba` in your emulator. (or copy to a flash cart!)
