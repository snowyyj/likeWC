
#include "FriendModel.h"
#include "../DBPool.h"

FriendMamager* FriendMamager::mInstance = NULL;

FriendMamager::FriendMamager()
{

}

FriendMamager::~FriendMamager()
{

}

void FriendMamager::getSimpleUsers(std::string _nickName, int _size, int _begin, list<IM::BaseDefine::UserInfo> &lsUsers)
{
	if (_size<1 || _begin<0)
	{
		log("getSimpleUsers wrong params: nickName[%s], size[%d], begin[%d]", _nickName.c_str(), _size, _begin);
        return;
    }
	
	
	CDBManager* pDBManager = CDBManager::getInstance();
	CDBConn* pDBConn = pDBManager->GetDBConn("teamtalk_slave");

	
	if (pDBConn)
	{
	 	 char strSql[512];
		 sprintf(strSql, "select * from IMUser where INSTR(nick,'%s') > 0 order by id desc limit %d offset %d", _nickName.c_str(), _size, _begin);
		 CResultSet* pResultSet = pDBConn->ExecuteQuery(strSql);
		 if(pResultSet)
		 {
			 while (pResultSet->Next())
			 {
				 IM::BaseDefine::UserInfo cUser;
				 cUser.set_user_id(pResultSet->GetInt("id"));
				 cUser.set_user_gender(pResultSet->GetInt("sex"));
				 cUser.set_user_nick_name(pResultSet->GetString("nick"));
				 cUser.set_user_domain(pResultSet->GetString("domain"));
                 cUser.set_status(pResultSet->GetInt("status"));
  		         cUser.set_department_id(pResultSet->GetInt("departId"));
                 cUser.set_email(pResultSet->GetString("email"));
                 cUser.set_user_tel(pResultSet->GetString("phone"));
                 cUser.set_user_real_name(pResultSet->GetString("name"));
				 cUser.set_avatar_url(pResultSet->GetString("avatar"));
				 cUser.set_sign_info(pResultSet->GetString("sign_info"));
				 lsUsers.push_back(cUser);
			 }
			 delete pResultSet;
		 }
		 else
		 {
			 log(" no result set for sql:%s", strSql);
		 }
		 pDBManager->RelDBConn(pDBConn);
	}
}



