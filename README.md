# Cage Template

Template to start a new project using Cage game engine

# Update submodules

```bash
git submodule update --init # pull the Cage
cd externals/cage
git checkout master # latest version of the engine
git submodule update --init --recursive # update engine dependencies
```

# Customization

1) Update this readme.
1) Add your assets to the `data` folder.
1) Update the source code and cmake files.
1) Update your tests.

