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

#ifndef TRACKPANEL_H
#define TRACKPANEL_H

#include <QStackedWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QSlider>
#include <QDial>
#include <QLabel>
#include <QPalette>

#include "widget/audiomonitor/audiomonitor.h"

namespace olive {

/**
 * @brief PanelWidget wrapper around an AudioMixer
 */
class TrackPanel : public QWidget {

  Q_OBJECT

 public:
  TrackPanel(QWidget* parent = nullptr);
  
 private:
  QLabel* label_track_name;
  QVBoxLayout* panel;
  QHBoxLayout* slider_layout;
  QSlider* volume_slider;
  QDial* dial_left_right_pane;
  QHBoxLayout* buttons;
  QPushButton* btn_mute;
  QPushButton* btn_solo;
  QPushButton* btn_record;

  AudioMonitor* audio_monitor_;

};

}  // namespace olive

#endif // TRACKPANEL_H
