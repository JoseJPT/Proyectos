package com.example.menuprincipal;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    Button boton3, boton2, boton4;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        boton2 = findViewById(R.id.btn2);
        boton3 = findViewById(R.id.btn3);
        boton4 = findViewById(R.id.btn4);

        boton2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(MainActivity.this, MainActivity2.class));
                Toast.makeText(getApplicationContext(),"Abriendo Conteo",Toast.LENGTH_LONG).show();
            }
        });

        boton3.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(MainActivity.this, texto1.class));
                Toast.makeText(getApplicationContext(),"¿Quiénes Somos?",Toast.LENGTH_LONG).show();
            }
        });

        boton4.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                startActivity(new Intent(MainActivity.this, texto2.class));
                Toast.makeText(getApplicationContext(),"Información del proyecto",Toast.LENGTH_LONG).show();
            }
        });

    }
}