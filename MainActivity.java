package com.example.anara.myapplication;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.RelativeLayout;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);

        final RelativeLayout main_view =(RelativeLayout) findViewById(R.id.main_view);
        TextView chosenButton= (TextView) findViewById(R.id.textView);
        Button fun = (Button) findViewById(R.id.fun_button);
        Button nope = (Button) findViewById(R.id.nope_button);
        fun.setOnClickListener (new View.OnClickListener(){

            @Override
            public void onClick(View v) {
                main_view.setBackgroundColor(getResources().getColor(R.color.colorPrimary));
                main_view.setBackgroundColor(getResources().getColor(R.color.colorAccent));
            }
        } ) ;


    }
}*/

