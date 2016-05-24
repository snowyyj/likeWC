package com.mogujie.tt.ui.adapter;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.TextView;

import com.mogujie.tt.R;

/**
 * Created by wjl on 2016/5/12.
 */
public class AddChatAdapter  extends BaseAdapter {
    private LayoutInflater mInflater;

    public AddChatAdapter(Context context) {
        this.mInflater = LayoutInflater.from(context);
    }

    @Override
    public int getCount() {
        return 4;
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
        view = mInflater.inflate(R.layout.tt_chat_add_childbutton, viewGroup, false);
        ImageView image = (ImageView) view.findViewById(R.id.imageView);
        TextView text = (TextView) view.findViewById(R.id.test_chat_add);
        if (i == 0) {
            text.setText(R.string.chat_with_group);
            image.setBackgroundResource(R.drawable.tt_tab_chat_nor);

        } else if (i == 1) {
            text.setText(R.string.add_friend);
            image.setBackgroundResource(R.drawable.tt_tab_contact_nor);

        } else if (i == 2) {
            text.setText(R.string.open_dimension_code);
            image.setBackgroundResource(R.drawable.tt_scan);

        } else if (i == 3) {
            text.setText(R.string.help_contact_me);
            image.setBackgroundResource(R.drawable.tt_help_servvice);

        }
        return view;
    }
}
