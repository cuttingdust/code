#ifndef HELLOOPENGLWIDGET_H
#define HELLOOPENGLWIDGET_H

#include <QWidget>

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QTimer>

class HelloOpenGLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    enum Shape {
        None,
        Rect,
        Circle,
        Triangle
    };
    
    explicit HelloOpenGLWidget(QWidget *parent = nullptr);
    
    ~HelloOpenGLWidget();
    
    void drawShape(Shape shape);
    
    void setWireframe(bool wireframe);
    
protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    
protected slots:
    void slotTimeout();
    
signals:
    
private:
    Shape shape_;
    QOpenGLShaderProgram shaderProgram_;
    QTimer timer_;
    
};

#endif // HELLOOPENGLWIDGET_H