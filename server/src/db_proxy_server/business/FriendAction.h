/*================================================================
*     Copyright (c) 2016年 jlwei. All rights reserved.
*   
*   文件名称：FriendAction.h
*   创 建 者：jlwei
*   邮    箱：snow_jlwei@163.com
*   创建日期：2016年05月26日
*   描    述：好友管理
*
================================================================*/



#ifndef __FRIEND_ACTION_H__
#define __FRIEND_ACTION_H__

#include "ImPduBase.h"

namespace DB_PROXY {

    void getSimpleUserInfo(CImPdu* pPdu, uint32_t conn_uuid);
   
};


#endif /* __FRIEND_ACTION_H__ */

