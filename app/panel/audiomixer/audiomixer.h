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

#include <QVector>

#include "widget/panel/panel.h"
#include "trackpanel.h"

// TODO: Rename Project in panel/project/project.h to projectpanel.h

// Get tracks track.h holds this data
// track.h <- tracklist.h <- sequence.h <- folder.h <- project.h <- core.h

namespace olive {

/**
 * @brief PanelWidget wrapper around an AudioMixer
 */
class AudioMixerPanel : public PanelWidget {
  Q_OBJECT

 public:
  AudioMixerPanel(QWidget* parent = nullptr);

 private:
  virtual void Retranslate() override;

  void update_trackpanel();

 private:
  TrackPanel* master_track_ = nullptr;

  QVector<TrackPanel*> audio_track_panel_collection;
};

}  // namespace olive

#endif // AUDIOMIXERPANEL_H
