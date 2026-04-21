#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindowClass;
}
QT_END_NAMESPACE

struct Global {
    bool	m_ignoreCase;			//	検索時：大文字小文字同一視
    int		m_editorFontSize;
    int		m_previewFontSize;
    QColor	m_activeLnColor;		//	アクティブ時アンダーライン行カーソル色
    QColor	m_inactiveLnColor;		//	非アクティブ時アンダーライン行カーソル色
    QColor	m_headingsColor;
    QColor	m_boldItalicColor;
    QColor	m_boldColor;
    QColor	m_italicColor;
    QColor	m_strikethroughColor;
    QColor	m_matchColor;			//	検索マッチ背景色
    QColor	m_CSVHeaderColor;
    QColor	m_CSVZebraColor1;		//	本体奇数行
    QColor	m_CSVZebraColor2;		//	本体偶数行
    QColor	m_quoteColor;			//	引用ブロック背景色
    QColor	m_codeBlockColor;		//	コードブロック背景色
    QColor	m_keisenBlockColor;		//	罫線ブロック背景色
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindowClass *ui;
};
#endif // MAINWINDOW_H
