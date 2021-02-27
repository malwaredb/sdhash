The purpose of this fork of [sdhash](https://github.com/sdhash/sdhash) is to make it cross-platform compatible. As such, the only things changed are to remove intrinsic functions from `sdbf/` so that the code can be compiled and used on non-Intel systems.

* February 2021:
  * Updated `blooms.proto` to specify the version of Protocol Buffers, and updated the generated C++ output in `sdbf/`.
  * Removed intrinsic functions in `sdbf/`: `bf_utils.cc`, `bloom_filter.cc`, replaced with pure C++ version of the equivalent functionality in `bits_counter.cc`. Tested to make sure that generated hashes and hash comparisons before & after changes had identical output.
  * Added shared library in `sdhash-dynamiclib/` for easy inclusion into other projects. **Not yet tested**.
  * Updated `Makefile` to include new target, new files, and removal of `-msse` in `CLFAGS` variable.