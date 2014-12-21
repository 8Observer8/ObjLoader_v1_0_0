#ifndef SCENE_H
#define SCENE_H

#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions>
#include <QWheelEvent>
#include <QMouseEvent>
#include "Object.h"

class Scene : public QOpenGLWidget, public QOpenGLFunctions
{
    Q_OBJECT

signals:
    void signalSetStatus( const QString &text );

public:
    Scene( QWidget *parent = 0 );
    ~Scene();

public slots:
    void slotLoadObject( const QString &fullFileName );

private:
    void initializeGL();
    void paintGL();
    void resizeGL( int w, int h );

    void wheelEvent( QWheelEvent *event );
    void scalePlus();
    void scaleMinus();

    void mousePressEvent( QMouseEvent *event );
    void mouseMoveEvent( QMouseEvent *event );

    void drawObject();

    QOpenGLShaderProgram m_program;
    int m_vertexAttr;
    int m_colorAttr;
    int m_matrixUniform;
    Object m_object;
    float m_scale;
    QPoint m_lastPos;
    float m_xRot;
    float m_zRot;
};

#endif // SCENE_H
