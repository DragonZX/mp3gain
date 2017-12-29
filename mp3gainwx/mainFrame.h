// -*- C++ -*- generated by wxGlade 0.3.4 on Thu Sep 02 00:14:45 2004

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/dir.h>
#include <wx/filename.h>
//#include <wx/toolbar.h>

// begin wxGlade: ::dependencies
#include <wx/listctrl.h>
#include <wx/statline.h>
// end wxGlade


#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "mp3Info.h"

WX_DECLARE_STRING_HASH_MAP( mp3Info *, mp3InfoHash ); 
//WX_DECLARE_STRING_HASH_MAP( bool, mp3InfoHash ); 

enum {
	ID_WINDOW_MAIN_FRAME=wxID_HIGHEST,
	ID_TOOL_ADD_FILES,
	ID_TOOL_ADD_FOLDER,
	ID_TOOL_ANALYZE,
	ID_TOOL_GAIN,
	ID_TOOL_CLEAR_FILES,
	ID_TOOL_CLEAR_ALL,
	ID_TOOL_CANCEL,
	ID_MENU_ADD_FILES,
	ID_MENU_ADD_FOLDER,
	ID_MENU_MODE_TRACK,
	ID_MENU_MODE_ALBUM,
	ID_MENU_MODE_MANUAL,
	ID_MENU_TRACK_ANALYSIS,
	ID_MENU_ALBUM_ANALYSIS,
	ID_MENU_TRACK_GAIN,
	ID_MENU_ALBUM_GAIN,
	ID_MENU_MANUAL_GAIN,
	ID_MENU_CLEAR_FILES,
	ID_MENU_CLEAR_ALL,
	ID_MENU_QUIT,
	ID_MENU_ABOUT,
	ID_SLIDER_VOLUME,
	ID_LABEL_VOLUME
};

class mainFrame: public wxFrame {
public:
    // begin wxGlade: mainFrame::ids
    // end wxGlade

    mainFrame(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:
    // begin wxGlade: mainFrame::methods
    void set_properties();
    void do_layout();
    // end wxGlade
	
	float targetVolume;
	mp3InfoHash mp3InfoList;
	wxChar pathSeparator;
	bool cancelProcessing;

	void OnQuit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	void OnModeChange(wxCommandEvent& event);
	void OnAddFiles(wxCommandEvent& event);
	void OnAddFolder(wxCommandEvent& event);
	void OnClearFiles(wxCommandEvent& event);
	void OnClearAll(wxCommandEvent& event);
	void OnVolumeChange(wxScrollEvent& event);
	void OnCancel(wxCommandEvent& event);
	void ChangeVolumeLabel();
	void EnableStuff(const bool enable);
	void AddFileToList(wxString path);
	void AddFolder(wxString path);
	DECLARE_EVENT_TABLE()

protected:
    // begin wxGlade: mainFrame::attributes
    wxMenuBar* mainMenu;
    wxStatusBar* mainStatusbar;
    wxToolBar* mainToolbar;
    wxStaticLine* static_line_1;
    wxStaticText* targetLabel;
    wxSlider* volumeSlider;
    wxStaticText* volumeLabel;
    wxPanel* panel_1;
    wxListCtrl* mainList;
    wxStaticText* fileProgressLabel;
    wxGauge* fileProgress;
    wxStaticText* totalProgressLabel;
    wxGauge* totalProgress;
    wxPanel* panel_2;
    // end wxGlade
};


#endif // MAINFRAME_H
