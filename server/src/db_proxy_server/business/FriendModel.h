/*================================================================
*     Copyright (c) 2016年 jlwei. All rights reserved.
*   
*   文件名称：FriendModel.h
*   创 建 者：jlwei
*   邮    箱：snow_jlwei@163.com
*   创建日期：2016年05月26日
*   描    述：好友管理
*
#pragma once
================================================================*/

#ifndef __FRIENDMODEL_H__
#define __FRIENDMODEL_H__

#include "IM.BaseDefine.pb.h"
#include "ImPduBase.h"
#include "public_define.h"


class FriendMamager
{

public:
	FriendMamager();
	~FriendMamager();

private:
	static FriendMamager* mInstance;

public:

	static FriendMamager* getInstance() {
		if (mInstance == NULL) {
			mInstance = new FriendMamager();
		}
		return mInstance;
	}


	void getSimpleUsers(std::string _nickName, int _size, int _begin, list<IM::BaseDefine::UserInfo> &lsUsers);
		

};

#define g_pFriendManager FriendMamager::getInstance()

#endif
