# convert ROOT TTrees to text files

compile it with
```
g++ -o convertTree `root-config --cflags` convertTree.cpp `root-config --glibs`
```
and convert your root file with

```
./convertTree data.root eventTree >> data.txt
```
   
   
  
The script is compatible with my [dockerized root](https://github.com/martingabelmann/docker-ROOT) image.

