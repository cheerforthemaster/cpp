 //#include "glut.h"
 //#include <math.h>
 //
 //using namespace std;
 // 
 //static float c = 3.1415 / 180.0f; //弧度和角度转换参数 
 //static int du = 90, oldmy = -1, oldmx = -1; //du是视点绕y轴的角度,opengl里默认y轴是上方向 
 //static float r = 1.5f, h = 0.0f; //r是视点绕y轴的半径,h是视点高度即在y轴上的坐标 
 //
 // void init(void)
 // {
 //	glEnable(GL_DEPTH_TEST);
 // 	glClearColor(0.0, 0.0, 0.0, 0.0); //背景黑色
 // }
 // 
 // void display(void)
 // {
 //	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 // 	glColor3f(1.0, 1.0, 1.0); //画笔白色
 // 
 // 	glLoadIdentity();  //加载单位矩阵
 //	gluLookAt(r*cos(c*du), h, r*sin(c*du), 0, 0, 0, 0, 1, 0); //从视点看远点,y轴方向(0,1,0)是上方向 
 //	glutWireTeapot(0.5);
 //	
 //	glFlush();
 // 	glutSwapBuffers();
 // }
 // 
 // void Mouse(int button, int state, int x, int y) //处理鼠标点击 
 // {
 //	 if (state == GLUT_DOWN) //第一次鼠标按下时,记录鼠标在窗口中的初始坐标 
 //		 oldmx = x, oldmy = y;
 // }
 // void onMouseMove(int x, int y) //处理鼠标拖动 
 // {
 //	 printf("%d\n",du); 
 //	 du += x - oldmx; //鼠标在窗口x轴方向上的增量加到视点绕y轴的角度上，这样就左右转了 
 //	 h += 0.03f*(y - oldmy); //鼠标在窗口y轴方向上的改变加到视点的y坐标上，就上下转了 
 //	 if (h > 1.0f) h = 1.0f; //视点y坐标作一些限制，不会使视点太奇怪 
 //	 else if (h < -1.0f) h = -1.0f;
 //	 oldmx = x, oldmy = y; //把此时的鼠标坐标作为旧值，为下一次计算增量做准备 
 // }
 //
 //  void reshape(int w, int h)
 //  {
 //  	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
 //  	glMatrixMode(GL_PROJECTION);
 //  	glLoadIdentity();
 //  	gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
 //  	glMatrixMode(GL_MODELVIEW);
 //  	glLoadIdentity();
 // 	gluLookAt(r*cos(c*du), h, r*sin(c*du), 0, 0, 0, 0, 1, 0); //从视点看远点,y轴方向(0,1,0)是上方向 
 //  }
 // 
 // void reshape(GLsizei w, GLsizei h)
 // {
 //	 glViewport(0, 0, w, h);
 //	 glMatrixMode(GL_PROJECTION);
 //	 glLoadIdentity();
 //	 gluPerspective(75.0f, (float)w / h, 1.0f, 1000.0f);
 //	 glMatrixMode(GL_MODELVIEW);
 // }
 //
 // int main(int argc, char** argv)
 // {
 // 	glutInit(&argc, argv);
 // 	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
 // 	glutInitWindowSize(500, 500);
 // 	glutInitWindowPosition(100, 100);
 // 	glutCreateWindow(argv[0]);
 // 	init();
 // 	glutReshapeFunc(reshape);
 // 	glutDisplayFunc(display);
 //	glutIdleFunc(display);  //设置不断调用显示函数 
 //	glutMouseFunc(Mouse);
 //	glutMotionFunc(onMouseMove);
 // 	glutMainLoop();
 // 	return 0;
 // }
