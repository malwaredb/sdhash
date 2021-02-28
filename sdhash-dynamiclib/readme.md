### LibSDHash

Use SDHash as a module in your project!
* `make libsdhash.so`
* `sudo make installsharedlib`
* Test:
  * `cd sdhash-dynamiclib/test/`
  * `make`
  * `./test`
  * Check output of `ldd test`.
    * You should see something like `libsdhash.so => /usr/local/lib/libsdhash.so (0x00007fc2b6263000)`
    * If not, try `sudo ldconfig`.