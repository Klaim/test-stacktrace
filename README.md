
# Test for boost.stacktrace:

This version requires Windows + Visual Studio (C++) + Clang + Git-Bash (the terminal) + [`build2`](https://build2.org)

0. Beware, the build directories will be created in the parent directory from this project!
1. Clone this repo: `git clone git@github.com:Klaim/test-stacktrace.git myapp`
2. `cd myapp`
3. Run this to setup the configs: `./init-config.sh`
4. Run this to build all the variations: `bdep update -a`
5. Run this to run every built executable -> this should show the different stacktraces. : `./run-all.sh`

