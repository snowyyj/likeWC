
echo "file path : $1"

pscp -r -l jlwei -pw 1 ../src/$1 192.168.4.23:/home/jlwei/likeWC/server/src/$1

read name