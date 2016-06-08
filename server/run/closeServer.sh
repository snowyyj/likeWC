#/bin/sh
#start or stop the im-server


function restart() {
    cd $1
    if [ ! -e *.conf  ]
    then
        echo "no config file"
        return
    fi

    if [ -e server.pid  ]; then
        pid=`cat server.pid`
        echo "kill pid=$pid"
        kill $pid
        while true
        do
            oldpid=`ps -ef|grep $1|grep $pid`;
            if [ $oldpid" " == $pid" " ]; then
                echo $oldpid" "$pid
                sleep 1
            else
                break
            fi
        done
    fi

    cd ..
}

restart login_server;
restart msg_server;
restart route_server;
restart db_proxy_server;
restart http_msg_server;
restart push_server;
restart msfs;
