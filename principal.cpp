#include "principal.h"
#include "ui_principal.h"

#include <QPainter>

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::paintEvent(QPaintEvent *event)
{
    //Objeto que permite dibujar (Picasso)
    //Se envia como dispositivo a este (this) objeto (Principal)
    QPainter painter(this);

    //Establecer un pincel azul
    painter.setPen(Qt::blue);

    //Establecer un tipo de letra y tamaño
    painter.setFont(QFont("Arial", 30));

    //Dibujar un texto
    painter.drawText(rect(), Qt::AlignCenter, "Camila");

    // Crear un pincel
    QPen pincel;
    pincel.setColor(Qt::red);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    //Establecer nuevo pincel
    painter.setPen(pincel);

    //Dibujar una linea
    painter.drawLine(100,100,200,200);

    //Establecer una brocha
    painter.setBrush(Qt::lightGray);

    //Dibujar un rectangulo
    painter.drawRect(300,100,50 ,100);

    //Crear un nuevo pincel
    QPen pincel2;
    pincel2.setWidth(5);
    pincel2.setColor(Qt::darkGreen);
    pincel2.setStyle(Qt::DotLine);

    //Establecer nuevo pincel
    painter.setPen(pincel2);
    painter.setBrush(Qt::green);

    //Dibujar una circunferencia
    painter.drawEllipse(400, 100, 50, 50);

    //Dibujar un arco
    QRectF rectangle (500.0, 100.0, 50.0, 50.0);
    int startAngle = 30 * 16;
    int spanAngle = 120 * 16;
    painter.drawArc(rectangle, startAngle, spanAngle);
}
