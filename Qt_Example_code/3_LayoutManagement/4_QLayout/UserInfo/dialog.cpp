#include "dialog.h"
#include<QLabel>
#include<QLineEdit>
#include<QComboBox>
#include<QPushButton>
#include<QFrame>
#include<QGridLayout>
#include<QPixmap>
#include<QHBoxLayout>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("UserInfo"));
    /************** 左侧 ******************************/
    UserNameLabel =new QLabel(tr("用户名："));
    UserNameLineEdit =new QLineEdit;
    NameLabel =new QLabel(tr("姓名："));
    NameLineEdit =new QLineEdit;
    SexLabel =new QLabel(tr("性别："));
    SexComboBox =new QComboBox;
    SexComboBox->addItem(tr("女"));
    SexComboBox->addItem(tr("男"));
    DepartmentLabel =new QLabel(tr("部门："));
    DepartmentTextEdit =new QTextEdit;
    AgeLabel =new QLabel(tr("年龄："));
    AgeLineEdit =new QLineEdit;
    OtherLabel =new QLabel(tr("备注："));
    OtherLabel->setFrameStyle(QFrame::Panel|QFrame::Sunken);//(a) 设置控件风格
    LeftLayout =new QGridLayout();						//(b)左部布局，不是主布局，不用指定父级窗口
    //向布局中加入需要布局的控件
    LeftLayout->addWidget(UserNameLabel,0,0);     		//用户名    向布局内加入需要的布局控件
    LeftLayout->addWidget(UserNameLineEdit,0,1);
    LeftLayout->addWidget(NameLabel,1,0);               //姓名
    LeftLayout->addWidget(NameLineEdit,1,1);
    LeftLayout->addWidget(SexLabel,2,0);                //性别
    LeftLayout->addWidget(SexComboBox,2,1);
    LeftLayout->addWidget(DepartmentLabel,3,0);        	//部门
    LeftLayout->addWidget(DepartmentTextEdit,3,1);
    LeftLayout->addWidget(AgeLabel,4,0);             	//年龄
    LeftLayout->addWidget(AgeLineEdit,4,1);
    LeftLayout->addWidget(OtherLabel,5,0,1,2);       	//其他
    LeftLayout->setColumnStretch(0,1);
    LeftLayout->setColumnStretch(1,3);//设置两列分别占用的空间比例，这里设置为1:3.即使对话框大小改变了，两列之间的宽度比依然保持不变
    /*********右侧*********/
    HeadLabel =new QLabel(tr("头像： "));              	//右上角部分
    HeadIconLabel =new QLabel;
    QPixmap icon("312.png");
    HeadIconLabel->setPixmap(icon);
    HeadIconLabel->resize(icon.width(),icon.height());
    UpdateHeadBtn =new QPushButton(tr("更新"));
    //完成右上侧头像选择区的布局
    TopRightLayout =new QHBoxLayout();
    TopRightLayout->setSpacing(20);		//设定各个控件之间的间距为20
    TopRightLayout->addWidget(HeadLabel);
    TopRightLayout->addWidget(HeadIconLabel);
    TopRightLayout->addWidget(UpdateHeadBtn);
    IntroductionLabel =new QLabel(tr("个人说明："));		//右下角部分
    IntroductionTextEdit =new QTextEdit;
    //完成右侧的布局
    RightLayout =new QVBoxLayout();
    RightLayout->setMargin(10);
    RightLayout->addLayout(TopRightLayout);
    RightLayout->addWidget(IntroductionLabel);
    RightLayout->addWidget(IntroductionTextEdit);
    /*--------------------- 底部 --------------------*/
    OkBtn =new QPushButton(tr("确定"));
    CancelBtn =new QPushButton(tr("取消"));
    //完成下方两个按钮的布局
    ButtomLayout =new QHBoxLayout();
    ButtomLayout->addStretch();		//按钮之前插入一个占位符，使两个按钮能够靠右对齐，并且在整个对话框的大小发生改变时，保证按钮的大小不发生变化
    ButtomLayout->addWidget(OkBtn);
    ButtomLayout->addWidget(CancelBtn);
    /*---------------------------------------------*/
    QGridLayout *mainLayout =new QGridLayout(this);     //(e)
    mainLayout->setMargin(15);					//设定对话框的边距为15
    mainLayout->setSpacing(10);
    mainLayout->addLayout(LeftLayout,0,0);
    mainLayout->addLayout(RightLayout,0,1);
    mainLayout->addLayout(ButtomLayout,1,0,1,2);
    mainLayout->setSizeConstraint(QLayout::SetFixedSize);	//设定为最优化显示，并且使用户无法改变对话框的大小。
}

Dialog::~Dialog()
{

}
