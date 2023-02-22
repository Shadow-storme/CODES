package com.example.firstproject;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
/*
public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    TextView t1,t2;
    EditText e1;
    EditText e2;
    Button b1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        t1=findViewById(R.id.t1);
        e1=findViewById(R.id.e1);
        e2=findViewById(R.id.e2);
        b1=findViewById(R.id.b1);
        t2=findViewById(R.id.t2);
        b1.setOnClickListener(this);

    }
    @Override
    public void onClick(View view) {
        String n=e2.getText().toString();
        int age=Integer.parseInt(e2.getText().toString());
        if (age >18){

            t2.setText(" "+ "You are Eligible");
        }
        else

            t2.setText(" "+ "You are not Eligible");

    }
}*/

//wap to create a simple calculator.
public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    TextView t1,t2;
    EditText e1;
    EditText e2;
    Button b1,b2,b3,b4;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        t1=findViewById(R.id.t1);
        e1=findViewById(R.id.e1);
        e2=findViewById(R.id.e2);
        b1=findViewById(R.id.b1);
        b2=findViewById(R.id.b2);
        b3=findViewById(R.id.b3);
        b4=findViewById(R.id.b4);
        t2=findViewById(R.id.t2);
        b1.setOnClickListener(this);
        b2.setOnClickListener(this);
        b3.setOnClickListener(this);
        b4.setOnClickListener(this);
    }
    @Override
    public void onClick(View view) {
        int n1=Integer.parseInt(e1.getText().toString());
        int n2=Integer.parseInt(e2.getText().toString());
        if (view.getId()==R.id.b1){
            int sum=n1+n2;
            t2.setText(" "+sum);
        }
        else if (view.getId()==R.id.b2){
            int sub=n1-n2;
            t2.setText(" "+sub);
        }
        else if (view.getId()==R.id.b3){
            int mul=n1*n2;
            t2.setText(" "+mul);
        }
        else if (view.getId()==R.id.b4){
            int div=n1/n2;
            t2.setText(" "+div);
        }
    }
}
