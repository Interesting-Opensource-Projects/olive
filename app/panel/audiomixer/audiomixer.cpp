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

#include "audiomixer.h"

namespace olive {

AudioMixerPanel::AudioMixerPanel(QWidget* parent) : PanelWidget(QStringLiteral("AudioMixer"), parent) {
 
  QWidget* central = new QWidget();

  setWidget(central);
  QHBoxLayout* layout = new QHBoxLayout(central);

  master_track_ = new TrackPanel();

  layout->addWidget(master_track_, 0, Qt::AlignLeft);

  
  Retranslate();
}

void AudioMixerPanel::Retranslate()
{
  SetTitle(tr("Audio Mixer"));
}

}
