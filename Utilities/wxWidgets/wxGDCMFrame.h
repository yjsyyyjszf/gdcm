// -*- C++ -*- generated by wxGlade 0.4.1 on Sat Aug 19 15:28:55 2006

#include <wx/wx.h>
#include <wx/image.h>

#ifndef WXGDCMFRAME_H
#define WXGDCMFRAME_H

// begin wxGlade: ::dependencies
// end wxGlade


class wxVTKRenderWindowInteractor;
class vtkImageViewer;
class wxGDCMFrame: public wxFrame {
public:
    // begin wxGlade: wxGDCMFrame::ids
    // end wxGlade

    wxGDCMFrame(wxWindow* parent, int id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);
    ~wxGDCMFrame();

    void OnQuit( wxCommandEvent& event );
    void OnOpen(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnCloseFrame( wxCloseEvent& event );

private:
    // begin wxGlade: wxGDCMFrame::methods
    void set_properties();
    void do_layout();
    // end wxGlade

    wxString	      directory;
    wxString        filename;
protected:
    // begin wxGlade: wxGDCMFrame::attributes
    wxMenuBar* TopFrameMenubar;
    wxStatusBar* TopFrameStatusbar;
    wxToolBar* TopFrameToolbar;
    wxVTKRenderWindowInteractor* VTKwindow;
    wxPanel* Panel;
    // end wxGlade

    vtkImageViewer *imageViewer;

    DECLARE_EVENT_TABLE( );
}; // wxGlade: end class


#endif // WXGDCMFRAME_H
