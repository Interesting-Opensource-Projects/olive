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

#include <QStackedWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QSlider>
#include <QDial>
#include <QLabel>

#include "audiomixer.h"
#include "core.h"
#include "node/project/project.h"
#include "node/project/folder/folder.h"

namespace olive {

AudioMixerPanel::AudioMixerPanel(QWidget* parent) : PanelWidget(QStringLiteral("AudioMixer"), parent) {
 
  QWidget* central = new QWidget();

  setWidget(central);
  QHBoxLayout* layout = new QHBoxLayout(central);

  master_track_ = new TrackPanel();

  layout->addWidget(master_track_, 0, Qt::AlignLeft);


  update_trackpanel();
  


  
  Retranslate();
}


void AudioMixerPanel::Retranslate()
{
  SetTitle(tr("Audio Mixer"));
}

void AudioMixerPanel::update_trackpanel() { 
	
	audio_track_panel_collection.clear();

	//auto project = Core::instance()->GetActiveProject();
    //Folder* folder = Core::instance()->GetSelectedFolderInActiveProject();

	// track.h <- tracklist.h <- sequence.h <- folder.h <- project.h <- core.h



	Core::instance()->main_window();

	auto prj = Core::instance()->GetActiveProject();

	if (prj) {
          auto folder = prj->root();

          if (folder) {
            auto nodes = folder->children();
          }
    
	}
    


}


}
