package com.example.menuprincipal;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import android.app.AlertDialog;
import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.net.Uri;
import android.os.Bundle;
import android.provider.MediaStore;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;

import org.opencv.android.OpenCVLoader;
import org.opencv.android.Utils;
import org.opencv.core.Core;
import org.opencv.core.Mat;
import org.opencv.core.MatOfPoint;
import org.opencv.core.Point;
import org.opencv.core.Scalar;
import org.opencv.core.Size;
import org.opencv.imgproc.Imgproc;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class MainActivity2 extends AppCompatActivity {
    ImageView imageView;
    Bitmap imageBitmap;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);
        imageView = (ImageView) findViewById(R.id.imageView);
        OpenCVLoader.initDebug();
    }


    public void openGalery(View v){
        Intent myIntent = new Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI);
        startActivityForResult(myIntent,100);

    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if(requestCode == 100  && resultCode == RESULT_OK && data!=null){
            Uri imageUri = data.getData();
            try {
                imageBitmap = MediaStore.Images.Media.getBitmap(this.getContentResolver(),imageUri);
            } catch (IOException e) {
                e.printStackTrace();
            }
            imageView.setImageBitmap(imageBitmap);
        }
    }
    public void colordeteccion(View v){
        Mat img = new Mat();
        Mat img2 = new Mat();

        List<MatOfPoint> contours = new ArrayList<MatOfPoint>();
        Mat hierarchy = new Mat();
        Mat dst = new Mat(img.rows(),img.cols(),img.type());
        Mat kernel = Imgproc.getStructuringElement(Imgproc.MORPH_RECT, new Size(5,5));
        Utils.bitmapToMat(imageBitmap,img2);
        Utils.bitmapToMat(imageBitmap,img);
        Imgproc.resize(img,img,new Size(1080,802));
        Imgproc.resize(img2,img2,new Size(1080,802));
        Imgproc.cvtColor(img,img,Imgproc.COLOR_BGR2HSV);
        Core.inRange(img,new Scalar(0,0,0),new Scalar(0,0,90),img);

        Imgproc.medianBlur(img,img,5);
        Imgproc.filter2D(img,img,-1,kernel);
        Mat img_result = img.clone();
        Imgproc.findContours(img_result,contours,hierarchy,Imgproc.RETR_EXTERNAL,Imgproc.CHAIN_APPROX_SIMPLE);
        Imgproc.drawContours(img2,contours,-1,new Scalar(74, 255, 1 ),1);

        String tex;
        Bitmap img_bitmap = Bitmap.createBitmap(img_result.cols(), img_result.rows(),Bitmap.Config.ARGB_8888);
        int cont = contours.size();
        String text = String.valueOf(cont);
        Imgproc.putText(img2,tex=text,new Point(img2.cols() / 10, img2.rows() / 1),Core.FONT_HERSHEY_COMPLEX_SMALL, 2, new Scalar(255, 0, 0 ),2);
        Utils.matToBitmap(img2,img_bitmap);
        ImageView imageView = findViewById(R.id.imageView);
        TextView textView = findViewById(R.id.texto);
        textView.setText("El número de esporas es de: " + tex);
        imageView.setImageBitmap(img_bitmap);
    }
}