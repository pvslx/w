#include<QApplication>
#include"window.h"

int main(int argc, char **argv) {
	QApplication app{argc, argv};
	
	Window w{"Test"};
	w.show();
	
	puts("Hello");
	
	return app.exec();
}