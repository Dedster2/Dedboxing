/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OptionsWidget.cpp
 * Author: Dedster
 * 
 * Created on July 8, 2018, 8:54 PM
 */

#include "OptionsWidget.h"

OptionsWidget::OptionsWidget(QWidget* parent): QGroupBox(parent)
{
    widget.setupUi(this);
    setTitle("Options");
    connect(widget.startButton, &widget.startButton->clicked, this,
            &this->startClicked);
};

void OptionsWidget::startClicked()
{
    
    emit sendOptions(widget.sbRounds->value(), widget.sbDown->value(), 
            widget.sbLength->value());
}





