
echo "file path : $1"

pscp -r -l jlwei -pw 1 192.168.4.23:/home/jlwei/TeamTalk/server/src/$1 ../src/$1