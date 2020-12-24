1.进入服务端 
cd Server
make
将chat_room.sql导入数据库，并修改config.json中的信息
./chat_room_srv 启动服务器，如果没有报错就启动成功了

2.进入客户端
cd Client
make
修改config.json中的信息
./chat_room_cli 启动客户端
输入相应的功能编号执行任务


已知问题：
聊天不能发送单引号” ‘ “，包含单引号的聊天语句不会保存，并可能导致服务器异常退出
