git submodule --init
git submodule update --recursive
cmake -S . -B Build -DSHERPHY_DEBUG=1