/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2021 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#include "trackpanel.h"

namespace olive {

TrackPanel::TrackPanel(QWidget* parent) : QWidget(parent) {
  
  //central = new QWidget();
  //setWidget(central);
  
  //this->setStyleSheet("background-color: red;");

  
  //setWidget(audio_monitor_); // from audiomonitor

  QPalette pal = this->palette();
  pal.setColor(QPalette::Window, Qt::red);
  this->setPalette(pal);

  this->setAutoFillBackground(true);

  this->setFixedWidth(100);

  panel = new QVBoxLayout(this);
  panel->setAlignment(Qt::AlignHCenter);

  label_track_name = new QLabel();
  label_track_name->setText("master");
  panel->addWidget(label_track_name);

  dial_left_right_pane = new QDial();
  panel->addWidget(dial_left_right_pane);

  {
    // Three buttons Mute Solo and Record

    buttons = new QHBoxLayout();

    btn_mute = new QPushButton("M");
    btn_solo = new QPushButton("S");
    btn_record = new QPushButton("R");

    buttons->addWidget(btn_mute);
    buttons->addWidget(btn_solo);
    buttons->addWidget(btn_record);

    panel->addLayout(buttons);

  }

  {
    slider_layout = new QHBoxLayout();

    //audio_monitor_ = new AudioMonitor(this);

    //slider_layout->addWidget(audio_monitor_);

    volume_slider = new QSlider(Qt::Vertical);

    slider_layout->addWidget(volume_slider);

    audio_monitor_ = new AudioMonitor(this);
    audio_monitor_->setFixedWidth(7);
    slider_layout->addWidget(audio_monitor_);

    panel->addLayout(slider_layout);
  }


  
}

}
