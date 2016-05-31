package com.mogujie.tt.imservice.manager;

import com.mogujie.tt.config.SysConstant;
import com.mogujie.tt.protobuf.IMBaseDefine;
import com.mogujie.tt.protobuf.IMBuddy;
import com.mogujie.tt.utils.Logger;

/**
 * Created by wjl on 2016/5/23.
 * 管理用户的好友
 */
public class IMFriendManager extends  IMManager{

    private Logger logger = Logger.getLogger(IMContactManager.class);

    private static IMFriendManager mInst = new IMFriendManager();

    public static IMFriendManager getInstance() {
        return mInst;
    }

    private IMSocketManager imSocketManager = IMSocketManager.instance();

    @Override
    public void doOnStart() {

    }

    @Override
    public void reset() {

    }

    public void reqSimpleUserInfo(String nickName, int beginPos) {
        logger.d("reqUserInfo: nickName = %s", nickName);

        IMBuddy.IMGetSimpleUserInfoReq req = IMBuddy.IMGetSimpleUserInfoReq.newBuilder()
                .setNickName(nickName)
                .setMaxSize(SysConstant.MAX_SIMPLE_USERINFO)
                .setBeginPos(beginPos)
                .build();

        int sid = IMBaseDefine.ServiceID.SID_BUDDY_LIST_VALUE;
        int cid = IMBaseDefine.FriendCmdID.CID_GET_SIMPLE_USER_INFO_REQ_VALUE;
        imSocketManager.sendRequest(req, sid, cid);
    }

    public void onRepSimpleUserInfo(IMBuddy.IMGetSimpleUserInfoRsp simpleUsers) {

    }

    public void resMakeFriend(int uid, String nickName) {
        logger.d("resMakeFriend:uid = %d, nickName = %s", uid, nickName);





/*
        IMMessage.IMMsgDataAck imMsgDataAck = IMMessage.IMMsgDataAck.newBuilder()
                .setMsgId(msg.getMsgId())
                .setSessionId(msg.getToId())
                .setUserId(msg.getFromId())
                .setSessionType(sessionType)
                .build();
        int sid = IMBaseDefine.ServiceID.SID_MSG_VALUE;
        int cid = IMBaseDefine.MessageCmdID.CID_MSG_DATA_ACK_VALUE;
        imSocketManager.sendRequest(imMsgDataAck,sid,cid);
        */
    }
}
