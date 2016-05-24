package com.mogujie.tt.ui.fragment;


import android.content.Intent;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import com.mogujie.tt.R;
import com.mogujie.tt.ui.activity.SearchFriendActivity;

/**
 * A simple {@link Fragment} subclass.
 */
public class AddFriendFragment extends MainFragment implements View.OnClickListener{

    private View curView = null;

    public AddFriendFragment() {
        // Required empty public constructor
    }


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {

        curView = inflater.inflate(R.layout.fragment_add_friend, topContentView);
        super.init(curView);
        initRes();
        return curView;
    }

    @Override
    protected void initHandler() {

    }

    /**
    * @Description 初始化资源
     */
    private void initRes() {
        // 设置标题栏
        setTopTitle(getResources().getString(R.string.add_friend));
        setTopLeftButton(R.drawable.tt_top_back);
        topLeftContainerLayout.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View arg0) {

                getActivity().finish();
            }
        });
        setTopLeftText(getResources().getString(R.string.top_left_back));

        //查找账号
        View relaLayout = curView.findViewById(R.id.search_account);
        relaLayout.setOnClickListener(this);
    }

    @Override
    public void onClick(View view) {
        Intent intent = new Intent(getActivity(), SearchFriendActivity.class);
        //intent.putExtra(IntentConstant.KEY_PEERID, contactId);
        startActivity(intent);
        // getActivity().overridePendingTransition(android.R.anim.slide_out_right, android.R.anim.slide_out_right);
    }
}
