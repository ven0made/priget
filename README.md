## Priget

Get Discord Messages, and like, output data from them or something idfk, proper readme will be done later aight

### Build Instructions

```shell
git clone https://github.com/st00gan/priget --recursive
cd priget
mkdir build
cd build
cmake ..
make
```
to specify discord token, create a file *priget.cfg* with the following
```
#default priget.cfg
token=YOUR_TOKEN_GOES_HERE
```


### TODO
- Organize project structure
- Output as JSON
- Get Message History
- Get user data
- Write a better split implementation
- Learn to understand the libconfig docs (or not, really doesn't matter)
- Much more...

Built for a specific project, don't expect PR or Issue responces.

[Repo Name](https://github.com/colinmorris/char-rbm/blob/master/samples/repos_unique.txt#L15169)