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

#ifndef AUDIOMIXERPANEL_H
#define AUDIOMIXERPANEL_H

#include <QStackedWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QSlider>
#include <QDial>
#include <QLabel>

#include "widget/panel/panel.h"
#include "trackpanel.h"

namespace olive {

/**
 * @brief PanelWidget wrapper around an AudioMixer
 */
class AudioMixerPanel : public PanelWidget {

  Q_OBJECT

 public:
  AudioMixerPanel(QWidget* parent = nullptr);

  //bool IsPlaying() const { return audio_monitor_->IsPlaying(); }

  //void SetParams(const AudioParams& params) { audio_monitor_->SetParams(params); }

 private:
  virtual void Retranslate() override;

  
  TrackPanel* master_track_ = nullptr;
};

}  // namespace olive

#endif // AUDIOMIXERPANEL_H
