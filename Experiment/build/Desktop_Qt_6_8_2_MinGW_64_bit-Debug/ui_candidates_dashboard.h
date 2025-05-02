/********************************************************************************
** Form generated from reading UI file 'candidates_dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANDIDATES_DASHBOARD_H
#define UI_CANDIDATES_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_candidates_dashboard
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *Title;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *dashboard_btn;
    QPushButton *candidates_btn;
    QPushButton *voters_btn_;
    QPushButton *result_btn;
    QVBoxLayout *verticalLayout;
    QLabel *LIVE_STATS;
    QFrame *line_3;
    QLabel *candidates;
    QFrame *line;
    QLabel *vters;
    QFrame *line_2;
    QLabel *castsvote;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *id;
    QLabel *name;
    QLabel *party;
    QLabel *actions;

    void setupUi(QWidget *candidates_dashboard)
    {
        if (candidates_dashboard->objectName().isEmpty())
            candidates_dashboard->setObjectName("candidates_dashboard");
        candidates_dashboard->resize(504, 633);
        candidates_dashboard->setStyleSheet(QString::fromUtf8("#voters_btn_, #candidates_btn, #dashboard_btn, #result_btn {\n"
"  color: white;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(candidates_dashboard);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Title = new QLabel(candidates_dashboard);
        Title->setObjectName("Title");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setStrikeOut(false);
        Title->setFont(font);
        Title->setStyleSheet(QString::fromUtf8("color:black"));

        horizontalLayout->addWidget(Title);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        dashboard_btn = new QPushButton(candidates_dashboard);
        dashboard_btn->setObjectName("dashboard_btn");
        QFont font1;
        font1.setBold(true);
        dashboard_btn->setFont(font1);
        dashboard_btn->setAutoFillBackground(false);
        dashboard_btn->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 89);\n"
" color: white;"));

        horizontalLayout_2->addWidget(dashboard_btn);

        candidates_btn = new QPushButton(candidates_dashboard);
        candidates_btn->setObjectName("candidates_btn");
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        candidates_btn->setFont(font2);
        candidates_btn->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 89);"));

        horizontalLayout_2->addWidget(candidates_btn);

        voters_btn_ = new QPushButton(candidates_dashboard);
        voters_btn_->setObjectName("voters_btn_");
        voters_btn_->setFont(font1);
        voters_btn_->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 89);"));

        horizontalLayout_2->addWidget(voters_btn_);

        result_btn = new QPushButton(candidates_dashboard);
        result_btn->setObjectName("result_btn");
        result_btn->setFont(font1);
        result_btn->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 89);"));

        horizontalLayout_2->addWidget(result_btn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        LIVE_STATS = new QLabel(candidates_dashboard);
        LIVE_STATS->setObjectName("LIVE_STATS");
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        LIVE_STATS->setFont(font3);
        LIVE_STATS->setStyleSheet(QString::fromUtf8("color:black"));
        LIVE_STATS->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(LIVE_STATS);

        line_3 = new QFrame(candidates_dashboard);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_3);

        candidates = new QLabel(candidates_dashboard);
        candidates->setObjectName("candidates");
        candidates->setStyleSheet(QString::fromUtf8("color:black"));
        candidates->setMargin(5);

        verticalLayout->addWidget(candidates);

        line = new QFrame(candidates_dashboard);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        vters = new QLabel(candidates_dashboard);
        vters->setObjectName("vters");
        vters->setStyleSheet(QString::fromUtf8("color:black"));
        vters->setMargin(5);

        verticalLayout->addWidget(vters);

        line_2 = new QFrame(candidates_dashboard);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_2);

        castsvote = new QLabel(candidates_dashboard);
        castsvote->setObjectName("castsvote");
        castsvote->setStyleSheet(QString::fromUtf8("color:black"));
        castsvote->setMargin(5);

        verticalLayout->addWidget(castsvote);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(candidates_dashboard);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color:black"));
        label->setMargin(10);

        horizontalLayout_4->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        id = new QLabel(candidates_dashboard);
        id->setObjectName("id");
        id->setMaximumSize(QSize(70, 16777215));
        id->setStyleSheet(QString::fromUtf8("color:black"));
        id->setFrameShape(QFrame::Shape::NoFrame);
        id->setFrameShadow(QFrame::Shadow::Raised);
        id->setLineWidth(1);
        id->setMidLineWidth(0);
        id->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        id->setMargin(6);

        horizontalLayout_3->addWidget(id);

        name = new QLabel(candidates_dashboard);
        name->setObjectName("name");
        name->setStyleSheet(QString::fromUtf8("color:black"));
        name->setFrameShape(QFrame::Shape::NoFrame);
        name->setLineWidth(1);
        name->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        name->setMargin(6);

        horizontalLayout_3->addWidget(name);

        party = new QLabel(candidates_dashboard);
        party->setObjectName("party");
        party->setMaximumSize(QSize(130, 16777215));
        party->setStyleSheet(QString::fromUtf8("color:black"));
        party->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        party->setMargin(6);

        horizontalLayout_3->addWidget(party);

        actions = new QLabel(candidates_dashboard);
        actions->setObjectName("actions");
        actions->setStyleSheet(QString::fromUtf8("color:black"));
        actions->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        actions->setMargin(6);

        horizontalLayout_3->addWidget(actions);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(candidates_dashboard);

        QMetaObject::connectSlotsByName(candidates_dashboard);
    } // setupUi

    void retranslateUi(QWidget *candidates_dashboard)
    {
        candidates_dashboard->setWindowTitle(QCoreApplication::translate("candidates_dashboard", "Form", nullptr));
        Title->setText(QCoreApplication::translate("candidates_dashboard", "ELECTION ADMIN PORTAL", nullptr));
        dashboard_btn->setText(QCoreApplication::translate("candidates_dashboard", "Dashboard", nullptr));
        candidates_btn->setText(QCoreApplication::translate("candidates_dashboard", "Candidates", nullptr));
        voters_btn_->setText(QCoreApplication::translate("candidates_dashboard", "Voters", nullptr));
        result_btn->setText(QCoreApplication::translate("candidates_dashboard", "Results", nullptr));
        LIVE_STATS->setText(QCoreApplication::translate("candidates_dashboard", "LIVE STATS", nullptr));
        candidates->setText(QCoreApplication::translate("candidates_dashboard", "Candidates :", nullptr));
        vters->setText(QCoreApplication::translate("candidates_dashboard", "Voters :", nullptr));
        castsvote->setText(QCoreApplication::translate("candidates_dashboard", "Votes Cast :", nullptr));
        label->setText(QCoreApplication::translate("candidates_dashboard", "RECENT CANDIDATES", nullptr));
        id->setText(QCoreApplication::translate("candidates_dashboard", "ID", nullptr));
        name->setText(QCoreApplication::translate("candidates_dashboard", "Name", nullptr));
        party->setText(QCoreApplication::translate("candidates_dashboard", "Party", nullptr));
        actions->setText(QCoreApplication::translate("candidates_dashboard", "Actions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class candidates_dashboard: public Ui_candidates_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANDIDATES_DASHBOARD_H
