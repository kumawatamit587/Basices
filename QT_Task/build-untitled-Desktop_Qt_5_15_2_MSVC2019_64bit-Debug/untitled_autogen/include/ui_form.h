/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *Email;
    QRadioButton *Male;
    QTextEdit *MobileNumber;
    QLabel *label_4;
    QComboBox *Plan;
    QRadioButton *Female;
    QLabel *label_5;
    QCheckBox *SoftwareEngineer;
    QCheckBox *Designer;
    QLabel *label_3;
    QTextEdit *Name;
    QRadioButton *Transgender;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_6;
    QCheckBox *SegmentTeam;
    QLabel *verifiyname;
    QLabel *GenderInfo;
    QLabel *Departmentselect;
    QLabel *Planselect;
    QLabel *verifiymail;
    QLabel *verifiymobile;
    QPushButton *Back;
    QPushButton *Next;
    QPushButton *ClearForm;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1017, 492);
        gridLayoutWidget = new QWidget(Form);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 1011, 428));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Email = new QTextEdit(gridLayoutWidget);
        Email->setObjectName(QString::fromUtf8("Email"));
        Email->setMaximumSize(QSize(470, 32));

        gridLayout->addWidget(Email, 1, 2, 1, 4);

        Male = new QRadioButton(gridLayoutWidget);
        Male->setObjectName(QString::fromUtf8("Male"));
        Male->setMaximumSize(QSize(151, 32));
        Male->setIconSize(QSize(20, 20));

        gridLayout->addWidget(Male, 8, 2, 1, 1);

        MobileNumber = new QTextEdit(gridLayoutWidget);
        MobileNumber->setObjectName(QString::fromUtf8("MobileNumber"));
        MobileNumber->setMaximumSize(QSize(470, 32));

        gridLayout->addWidget(MobileNumber, 2, 2, 1, 4);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(125, 32));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 8, 1, 1, 1);

        Plan = new QComboBox(gridLayoutWidget);
        Plan->addItem(QString());
        Plan->addItem(QString());
        Plan->addItem(QString());
        Plan->setObjectName(QString::fromUtf8("Plan"));
        Plan->setMaximumSize(QSize(200, 32));

        gridLayout->addWidget(Plan, 11, 2, 1, 1);

        Female = new QRadioButton(gridLayoutWidget);
        Female->setObjectName(QString::fromUtf8("Female"));
        Female->setMaximumSize(QSize(151, 32));

        gridLayout->addWidget(Female, 8, 3, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(125, 32));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 10, 1, 1, 1);

        SoftwareEngineer = new QCheckBox(gridLayoutWidget);
        SoftwareEngineer->setObjectName(QString::fromUtf8("SoftwareEngineer"));
        SoftwareEngineer->setMaximumSize(QSize(16777215, 32));

        gridLayout->addWidget(SoftwareEngineer, 10, 2, 1, 1);

        Designer = new QCheckBox(gridLayoutWidget);
        Designer->setObjectName(QString::fromUtf8("Designer"));
        Designer->setMaximumSize(QSize(16777215, 32));

        gridLayout->addWidget(Designer, 10, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(125, 16777215));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        Name = new QTextEdit(gridLayoutWidget);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setMaximumSize(QSize(470, 32));

        gridLayout->addWidget(Name, 0, 2, 1, 4);

        Transgender = new QRadioButton(gridLayoutWidget);
        Transgender->setObjectName(QString::fromUtf8("Transgender"));
        Transgender->setMaximumSize(QSize(151, 32));

        gridLayout->addWidget(Transgender, 8, 4, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(125, 16777215));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(125, 16777215));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(125, 32));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 11, 1, 1, 1);

        SegmentTeam = new QCheckBox(gridLayoutWidget);
        SegmentTeam->setObjectName(QString::fromUtf8("SegmentTeam"));
        SegmentTeam->setMaximumSize(QSize(16777215, 32));

        gridLayout->addWidget(SegmentTeam, 10, 4, 1, 1);

        verifiyname = new QLabel(gridLayoutWidget);
        verifiyname->setObjectName(QString::fromUtf8("verifiyname"));
        verifiyname->setMaximumSize(QSize(500, 16777215));
        verifiyname->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(verifiyname, 0, 6, 1, 1);

        GenderInfo = new QLabel(gridLayoutWidget);
        GenderInfo->setObjectName(QString::fromUtf8("GenderInfo"));
        GenderInfo->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(GenderInfo, 8, 5, 1, 2);

        Departmentselect = new QLabel(gridLayoutWidget);
        Departmentselect->setObjectName(QString::fromUtf8("Departmentselect"));

        gridLayout->addWidget(Departmentselect, 10, 5, 1, 2);

        Planselect = new QLabel(gridLayoutWidget);
        Planselect->setObjectName(QString::fromUtf8("Planselect"));
        Planselect->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Planselect, 11, 5, 1, 2);

        verifiymail = new QLabel(gridLayoutWidget);
        verifiymail->setObjectName(QString::fromUtf8("verifiymail"));
        verifiymail->setMaximumSize(QSize(500, 16777215));
        verifiymail->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(verifiymail, 1, 6, 1, 1);

        verifiymobile = new QLabel(gridLayoutWidget);
        verifiymobile->setObjectName(QString::fromUtf8("verifiymobile"));
        verifiymobile->setMaximumSize(QSize(500, 16777215));
        verifiymobile->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(verifiymobile, 2, 6, 1, 1);

        Back = new QPushButton(Form);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(320, 380, 83, 29));
        Next = new QPushButton(Form);
        Next->setObjectName(QString::fromUtf8("Next"));
        Next->setGeometry(QRect(490, 380, 83, 29));
        ClearForm = new QPushButton(Form);
        ClearForm->setObjectName(QString::fromUtf8("ClearForm"));
        ClearForm->setGeometry(QRect(20, 380, 83, 29));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        Male->setText(QCoreApplication::translate("Form", "Male", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Gender", nullptr));
        Plan->setItemText(0, QCoreApplication::translate("Form", "Standard Plan", nullptr));
        Plan->setItemText(1, QCoreApplication::translate("Form", "Premium Plan", nullptr));
        Plan->setItemText(2, QCoreApplication::translate("Form", "Basic Plan", nullptr));

        Female->setText(QCoreApplication::translate("Form", "Female", nullptr));
        label_5->setText(QCoreApplication::translate("Form", "Department", nullptr));
        SoftwareEngineer->setText(QCoreApplication::translate("Form", "Software Engineer", nullptr));
        Designer->setText(QCoreApplication::translate("Form", "Designer", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Mobile Number", nullptr));
        Transgender->setText(QCoreApplication::translate("Form", "Transgender", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Email", nullptr));
        label->setText(QCoreApplication::translate("Form", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("Form", "Plan", nullptr));
        SegmentTeam->setText(QCoreApplication::translate("Form", "Segmenter Team", nullptr));
        verifiyname->setText(QString());
        GenderInfo->setText(QString());
        Departmentselect->setText(QString());
        Planselect->setText(QString());
        verifiymail->setText(QString());
        verifiymobile->setText(QString());
        Back->setText(QCoreApplication::translate("Form", "Back", nullptr));
        Next->setText(QCoreApplication::translate("Form", "Next", nullptr));
        ClearForm->setText(QCoreApplication::translate("Form", "Clear Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
