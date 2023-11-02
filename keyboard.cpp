#include "keyboard.h"
#include "ui_keyboard.h"

keyboard::keyboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::keyboard)
{
    ui->setupUi(this);
}

keyboard::~keyboard()
{
    delete ui;
}


QString keyboard::getData()
{
    return(ui->lineEdit->text());
}

void keyboard::setData(const QString &labelText, const QString &lineeditText)
{
    ui->label_4->setText(labelText);
    ui->lineEdit->setText(lineeditText);
}

void keyboard::setPage(int index)
{
    ui->stackedWidget_8->setCurrentIndex(index);
}

void keyboard::on_pushButton_104_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_104->text());
}

void keyboard::on_pushButton_99_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_99->text());
}

void keyboard::on_pushButton_107_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_107->text());
}

void keyboard::on_pushButton_86_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_86->text());
}
void keyboard::on_pushButton_91_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_91->text());
}

void keyboard::on_pushButton_101_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_101->text());
}
void keyboard::on_pushButton_109_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_109->text());
}

void keyboard::on_pushButton_106_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_106->text());
}
void keyboard::on_pushButton_96_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_96->text());
}

void keyboard::on_pushButton_111_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_111->text());
}
void keyboard::on_pushButton_112_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_112->text());
}

void keyboard::on_pushButton_97_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_97->text());
}
void keyboard::on_pushButton_95_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_95->text());
}

void keyboard::on_pushButton_100_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_100->text());
}
void keyboard::on_pushButton_85_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_85->text());
}

void keyboard::on_pushButton_94_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_94->text());
}
void keyboard::on_pushButton_92_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_92->text());
}

void keyboard::on_pushButton_83_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_83->text());
}
void keyboard::on_pushButton_87_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_87->text());
}

void keyboard::on_pushButton_116_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_116->text());
}
void keyboard::on_pushButton_110_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_110->text());
}

void keyboard::on_pushButton_115_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_115->text());
}
void keyboard::on_pushButton_108_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_108->text());
}

void keyboard::on_pushButton_102_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_102->text());
}
void keyboard::on_pushButton_105_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_105->text());
}

void keyboard::on_pushButton_90_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_90->text());
}
void keyboard::on_pushButton_98_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_98->text());
}

void keyboard::on_pushButton_88_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_88->text());
}
void keyboard::on_pushButton_244_clicked() //mu
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_244->text());
}

void keyboard::on_pushButton_89_clicked() //back
{
    ui->lineEdit->backspace();
}
void keyboard::on_pushButton_114_clicked() //small abc
{
    ui->stackedWidget_8->setCurrentIndex(0);
}

void keyboard::on_pushButton_113_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_113->text());
}
void keyboard::on_pushButton_103_clicked() //Space
{
    ui->lineEdit->setText(ui->lineEdit->text()+" ");
}
void keyboard::on_pushButton_84_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_84->text());
}

void keyboard::on_pushButton_93_clicked() // Enter
{
    this->accept();
}
void keyboard::on_pushButton_13_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_13->text());
}

void keyboard::on_pushButton_14_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_14->text());
}
void keyboard::on_pushButton_15_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_15->text());
}

void keyboard::on_pushButton_22_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_22->text());
}
void keyboard::on_pushButton_37_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_37->text());
}

void keyboard::on_pushButton_36_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_36->text());
}
void keyboard::on_pushButton_35_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_35->text());
}

void keyboard::on_pushButton_34_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_34->text());
}
void keyboard::on_pushButton_33_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_33->text());
}

void keyboard::on_pushButton_29_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_29->text());
}
void keyboard::on_pushButton_27_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_27->text());
}

void keyboard::on_pushButton_21_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_21->text());
}
void keyboard::on_pushButton_31_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_31->text());
}

void keyboard::on_pushButton_41_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_41->text());
}
void keyboard::on_pushButton_19_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_19->text());
}

void keyboard::on_pushButton_32_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_32->text());
}
void keyboard::on_pushButton_20_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_20->text());
}

void keyboard::on_pushButton_30_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_30->text());
}
void keyboard::on_pushButton_28_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_28->text());
}

void keyboard::on_pushButton_46_clicked() //caps
{
    ui->stackedWidget_8->setCurrentIndex(1);
}
void keyboard::on_pushButton_40_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_40->text());
}

void keyboard::on_pushButton_39_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_39->text());
}
void keyboard::on_pushButton_38_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_38->text());
}

void keyboard::on_pushButton_42_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_42->text());
}
void keyboard::on_pushButton_43_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_43->text());
}

void keyboard::on_pushButton_16_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_16->text());
}
void keyboard::on_pushButton_44_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_44->text());
}

void keyboard::on_pushButton_45_clicked() //back
{
    ui->lineEdit->backspace();
}
void keyboard::on_pushButton_47_clicked() // 123
{
    ui->stackedWidget_8->setCurrentIndex(2);
}
void keyboard::on_pushButton_49_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_49->text());
}
void keyboard::on_pushButton_50_clicked() //space
{
    ui->lineEdit->setText(ui->lineEdit->text()+" ");
}

void keyboard::on_pushButton_48_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_48->text());
}
void keyboard::on_pushButton_18_clicked() // enter
{
    this->accept();
}

void keyboard::on_pushButton_80_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_80->text());
}
void keyboard::on_pushButton_17_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_17->text());
}

void keyboard::on_pushButton_59_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_59->text());
}
void keyboard::on_pushButton_81_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_81->text());
}

void keyboard::on_pushButton_82_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_82->text());
}
void keyboard::on_pushButton_51_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_51->text());
}

void keyboard::on_pushButton_55_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_55->text());
}
void keyboard::on_pushButton_61_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_61->text());
}

void keyboard::on_pushButton_58_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_58->text());
}
void keyboard::on_pushButton_79_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_79->text());
}

void keyboard::on_pushButton_63_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_63->text());
}

void keyboard::on_pushButton_66_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_66->text());
}
void keyboard::on_pushButton_76_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_76->text());
}

void keyboard::on_pushButton_62_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_62->text());
}
void keyboard::on_pushButton_77_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_77->text());
}

void keyboard::on_pushButton_78_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_78->text());
}
void keyboard::on_pushButton_68_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_68->text());
}

void keyboard::on_pushButton_52_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_52->text());
}
void keyboard::on_pushButton_56_clicked() // Small
{
    ui->stackedWidget_8->setCurrentIndex(0);
}

void keyboard::on_pushButton_65_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_65->text());
}
void keyboard::on_pushButton_53_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_53->text());
}

void keyboard::on_pushButton_75_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_75->text());
}
void keyboard::on_pushButton_64_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_64->text());
}

void keyboard::on_pushButton_69_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_69->text());
}
void keyboard::on_pushButton_74_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_74->text());
}

void keyboard::on_pushButton_57_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_57->text());
}
void keyboard::on_pushButton_60_clicked() //back
{
    ui->lineEdit->backspace();
}

void keyboard::on_pushButton_71_clicked()//123
{
    ui->stackedWidget_8->setCurrentIndex(2);
}
void keyboard::on_pushButton_54_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_54->text());
}

void keyboard::on_pushButton_72_clicked() //space
{
    ui->lineEdit->setText(ui->lineEdit->text()+" ");
}
void keyboard::on_pushButton_70_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_70->text());
}

void keyboard::on_pushButton_67_clicked() //enter
{
    this->accept();
}


