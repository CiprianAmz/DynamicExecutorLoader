Small programm using dynamic libraries linking.

To build the lib:
- `cd ExecutorLib`
- `./build_so.sh`

To build the runner:
- `cd ExecutorUser`
- `./build`

Now any new change of the library will be reflected in the runner using the `./run` command.
No other build for ExecutorUser is need.
