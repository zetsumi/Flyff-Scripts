import sys
from PyQt5.QtWidgets import *
from PyQt5 import QtGui


class WidgetMainPage(QWidget):

    def __init__(self):
        super().__init__()
        self.widget = None
        self.__set_ui__()

    def __set_ui__(self):
        run = QPushButton('run')
        hbox = QHBoxLayout()
        hbox.addWidget(run)
        self.widget = QWidget()
        self.widget.setLayout(hbox)

    def get(self):
        return self.widget


class MainWindow(QMainWindow):

    def __init__(self):
        super().__init__()

        self.main_body = None

        self.setWindowTitle('Flyff Script Manager')
        self.__set_default_action__()
        self.__set_main_page__()
        self.show()

    def __set_default_action__(self):
        self.exit_action = QAction('&Exit', self)
        self.exit_action.setShortcut('Ctrl-Q')
        self.exit_action.setStatusTip("Quitter l'application")
        self.exit_action.triggered.connect(qApp.exit)

    def __set_main_page__(self):
        self.statusBar().showMessage('main page')
        self.__set_menu_bar__()

        self.main_body = WidgetMainPage()

        self.setCentralWidget(self.main_body.get())

    def __set_menu_bar__(self):
        menu = self.menuBar()
        menu_file = menu.addMenu('&file')
        menu_file.addAction(self.exit_action)


app = QApplication([])
icon = QtGui.QIcon('logo.PNG')
app.setWindowIcon(icon)

window = MainWindow()
op_code = app.exec_()
sys.exit(op_code)
