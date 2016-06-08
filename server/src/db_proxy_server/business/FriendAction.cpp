/*================================================================
*     Copyright (c) 2016年 jlwei. All rights reserved.
*   
*   文件名称：FriendModel.h
*   创 建 者：jlwei
*   邮    箱：snow_jlwei@163.com
*   创建日期：2016年05月26日
*   描    述：好友管理
*
================================================================*/




#include "FriendAction.h"
#include "IM.BaseDefine.pb.h"
#include "IM.Buddy.pb.h"
#include "GlobalDefine.h"
#include "../ProxyConn.h"

#include "FriendModel.h"

#include <list>




namespace DB_PROXY {

    void getSimpleUserInfo(CImPdu* pPdu, uint32_t conn_uuid)
    {
        log("getSimpleUserInfo");
    	IM::Buddy::IMGetSimpleUserInfoReq msg;
        IM::Buddy::IMGetSimpleUserInfoRsp msgResp;
    	if(msg.ParseFromArray(pPdu->GetBodyData(), pPdu->GetBodyLength()))
    	{
    		CImPdu* pPduRes = new CImPdu;
			
    		std::string nickName = msg.nick_name();
			int listSize = msg.max_size();
			listSize = listSize > MAX_SIMPLE_USERINFO ? MAX_SIMPLE_USERINFO : listSize;
			int beginPos = msg.begin_pos();
			list<IM::BaseDefine::UserInfo> userList;
			g_pFriendManager->getSimpleUsers(nickName, listSize, beginPos, userList);

			for (list<IM::BaseDefine::UserInfo>::iterator it = userList.begin(); it != userList.end(); it++)
		    {
				 IM::BaseDefine::UserInfo* pUser = msgResp.add_user_info_list();
				 pUser->set_user_id(it->user_id());
				 pUser->set_user_gender(it->user_gender());
				 pUser->set_user_nick_name(it->user_nick_name());
                 pUser->set_sign_info(it->sign_info());
                 pUser->set_department_id(it->department_id());
                 pUser->set_email(it->email());
                 pUser->set_user_real_name(it->user_real_name());
                 pUser->set_user_tel(it->user_tel());
				 pUser->set_user_domain(it->user_domain());
				 pUser->set_avatar_url(it->avatar_url());
			     pUser->set_status(it->status());
            }

			msgResp.set_attach_data(msg.attach_data());
			
			pPduRes->SetPBMsg(&msgResp);
            pPduRes->SetSeqNum(pPdu->GetSeqNum());
            pPduRes->SetServiceId(IM::BaseDefine::SID_BUDDY_LIST);
            pPduRes->SetCommandId(IM::BaseDefine::CID_GET_SIMPLE_USER_INFO_RSP);
            CProxyConn::AddResponsePdu(conn_uuid, pPduRes);
    	}
    }
   
};


