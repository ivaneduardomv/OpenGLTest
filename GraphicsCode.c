#include "GraphicsCode.h"

void GraphicCode(void)
{
    static float theta = 0.0;

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glRotatef(theta, 0.0f, 0.0f, 1.0f);

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.0f,1.0f);
        glVertex2f(0.0f,-1.0f);

        glVertex2f(-1.0f,0.0f);
        glVertex2f(1.0f,0.0f);
    glEnd();

    glPopMatrix();

    theta += 0.1;
}
