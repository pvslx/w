#include"window.h"

Window::Window(const QString &name) : QMainWindow() {
	setWindowTitle(name);
}