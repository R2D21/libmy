rm *.*~
rm src/*.*~
rm a.out
git add --all
read $1

git commit -am $1
git push origin master
