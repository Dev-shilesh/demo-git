
HP@DESKTOP-UC5KGQ8 MINGW64 /d/gits
$ git init project
Initialized empty Git repository in D:/gits/project/.git/

HP@DESKTOP-UC5KGQ8 MINGW64 /d/gits
$ cd project

HP@DESKTOP-UC5KGQ8 MINGW64 /d/gits/project (master)
$ git add file.txt
fatal: pathspec 'file.txt' did not match any files

HP@DESKTOP-UC5KGQ8 MINGW64 /d/gits/project (master)
$ git add hello.c

HP@DESKTOP-UC5KGQ8 MINGW64 /d/gits/project (master)
$ git commit -m "adding the hello"
[master (root-commit) 35c4c9f] adding the hello
 1 file changed, 1 insertion(+)
 create mode 100644 hello.c

HP@DESKTOP-UC5KGQ8 MINGW64 /d/gits/project (master)
$

hello