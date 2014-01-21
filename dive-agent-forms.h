///////////////////////////////////////////////////////////////////////////// C++ code generated with wxFormBuilder (version Sep 12 2010)// http://www.wxformbuilder.org///// PLEASE DO "NOT" EDIT THIS FILE!///////////////////////////////////////////////////////////////////////////#ifndef __dive-agent-forms__#define __dive-agent-forms__#include <wx/string.h>#include <wx/stattext.h>#include <wx/gdicmn.h>#include <wx/font.h>#include <wx/colour.h>#include <wx/settings.h>#include <wx/combobox.h>#include <wx/sizer.h>#include <wx/button.h>#include <wx/dialog.h>#include <wx/gauge.h>#include <wx/textctrl.h>///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Class UploadDivesDialogBase///////////////////////////////////////////////////////////////////////////////class UploadDivesDialogBase : public wxDialog {	private:		protected:		wxStaticText* m_selectComputerStatic;		wxComboBox* m_selectComputerCombo;		wxStaticText* m_selectPortStatic;		wxComboBox* m_selectPortCombo;		wxStaticText* m_dialogDescriptionStatic;				wxButton* m_uploadDivesButton;				// Virtual event handlers, overide them in your derived class		virtual void uploadDivesButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }				public:				UploadDivesDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Upload Dives"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );		~UploadDivesDialogBase();	};////////////////////////////////////////////////////////////////////////////////// Class UploadDivesProgressDialogBase///////////////////////////////////////////////////////////////////////////////class UploadDivesProgressDialogBase : public wxDialog {	private:		protected:				wxStaticText* m_statusStatic;		wxGauge* m_uploadProgressGauge;		wxStaticText* m_uploadProgressStatic;				wxButton* m_actionButton;				// Virtual event handlers, overide them in your derived class		virtual void actionButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }				public:				UploadDivesProgressDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Upload Dives"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );		~UploadDivesProgressDialogBase();	};////////////////////////////////////////////////////////////////////////////////// Class PreferencesDialogBase///////////////////////////////////////////////////////////////////////////////class PreferencesDialogBase : public wxDialog {	private:		protected:		wxStaticText* m_accountStatic;		wxTextCtrl* m_accountText;				wxButton* m_unlinkButton;		wxStaticText* m_emailStatic;		wxTextCtrl* m_emailText;		wxStaticText* m_paswordStatic;		wxTextCtrl* m_passwordText;		wxStaticText* m_emptyStatic;		wxButton* m_loginButton;		wxButton* m_FBconnectButton;				// Virtual event handlers, overide them in your derived class		virtual void unlinkButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }		virtual void loginButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }		virtual void FBconnectButtonOnButtonClick( wxCommandEvent& event ) { event.Skip(); }				public:				PreferencesDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );		~PreferencesDialogBase();	};////////////////////////////////////////////////////////////////////////////////// Class AboutDialogBase///////////////////////////////////////////////////////////////////////////////class AboutDialogBase : public wxDialog {	private:		protected:		wxStaticText* m_aboutStatic;		wxButton* m_okButton;		public:				AboutDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("About DiveAgent"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );		~AboutDialogBase();	};#endif //__dive-agent-forms__