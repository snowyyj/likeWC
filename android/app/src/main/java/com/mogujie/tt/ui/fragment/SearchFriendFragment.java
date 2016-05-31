package com.mogujie.tt.ui.fragment;


import android.content.Context;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.BaseAdapter;
import android.widget.ListView;
import android.widget.TextView;

import com.mogujie.tools.ScreenTools;
import com.mogujie.tt.R;
import com.mogujie.tt.imservice.manager.IMFriendManager;
import com.mogujie.tt.ui.base.TTBaseFragment;
import com.mogujie.tt.ui.widget.SearchEditText;

/**
 * A simple {@link Fragment} subclass.
 */
public class SearchFriendFragment extends TTBaseFragment {

    private View curView = null;
    private View mShowSearchLayout;
    private ListView mListView;
    public String mAccountName = "";
    private BaseAdapter mAdapter;

    public SearchFriendFragment() {
        // Required empty public constructor
    }


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        // Inflate the layout for this fragment
        if (null != curView) {
            ((ViewGroup) curView.getParent()).removeView(curView);
            return curView;
        }
        curView = inflater.inflate(R.layout.fragment_search_friend, topContentView);
        initTopBar();

        mShowSearchLayout = curView.findViewById(R.id.search_friend_item);
        mShowSearchLayout.setVisibility(View.GONE);
        mListView =  (ListView) mShowSearchLayout.findViewById(R.id.search_friend_contentlist);

       class SearchFriendAdapter extends BaseAdapter {

           private LayoutInflater mInflater;
           private TextView mSearchContent = null;

           public SearchFriendAdapter(Context context) {
               this.mInflater = LayoutInflater.from(context);
           }

           @Override
           public int getCount() {
               return 1;
           }

           @Override
           public Object getItem(int i) {
               return null;
           }

           @Override
           public long getItemId(int i) {
               return 0;
           }

           @Override
           public View getView(int i, View view, ViewGroup viewGroup) {
               view = mInflater.inflate(R.layout.search_friend_childitem, viewGroup, false);
               mSearchContent = (TextView) view.findViewById(R.id.search_friend_content);
               mSearchContent.setText(mAccountName);
               return view;
           }
       }
        mAdapter = new SearchFriendAdapter(getActivity());
        mListView.setAdapter( mAdapter );
        mListView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> adapterView, View view, int i, long l) {
                IMFriendManager.getInstance().reqSimpleUserInfo(mAccountName, 0);
            }
        });

        return curView;
    }


    @Override
    protected void initHandler() {

    }

    private void initTopBar() {
        setTopBar(R.drawable.tt_top_default_bk);
        showTopSearchBar();
        SearchEditText editText = (SearchEditText)topContentView.findViewById(R.id.chat_title_search);
        editText.setHint(R.string.search_account);



        setTopLeftButton(R.drawable.tt_top_back);
        hideTopRightButton();

        topLeftBtn.setPadding(0, 0, ScreenTools.instance(getActivity()).dip2px(30), 0);
        topLeftBtn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View arg0) {
                getActivity().finish();
            }
        });

        topSearchEdt.addTextChangedListener(new TextWatcher() {
            @Override
            public void onTextChanged(CharSequence s, int start, int before,
                                      int count) {
                mAccountName = s.toString();

                if(mAccountName.isEmpty())
                {
                    mShowSearchLayout.setVisibility(View.GONE);
                }else{
                    mShowSearchLayout.setVisibility(View.VISIBLE);
                    mAdapter.notifyDataSetChanged();
                }
            }

            @Override
            public void beforeTextChanged(CharSequence s, int start, int count,
                                          int after) {}
            @Override
            public void afterTextChanged(Editable s) {
            }
        });
    }

}
