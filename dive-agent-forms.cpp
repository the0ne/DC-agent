///////////////////////////////////////////////////////////////////////////// C++ code generated with wxFormBuilder (version Sep 12 2010)// http://www.wxformbuilder.org///// PLEASE DO "NOT" EDIT THIS FILE!///////////////////////////////////////////////////////////////////////////#include "dive-agent-forms.h"///////////////////////////////////////////////////////////////////////////UploadDivesDialogBase::UploadDivesDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style ){	this->SetSizeHints( wxSize( 450,-1 ), wxDefaultSize );		wxBoxSizer* m_mainSizer;	m_mainSizer = new wxBoxSizer( wxVERTICAL );		wxGridSizer* m_controlsSizer;	m_controlsSizer = new wxGridSizer( 2, 2, 0, 0 );		m_selectComputerStatic = new wxStaticText( this, wxID_ANY, wxT("Select computer:"), wxDefaultPosition, wxDefaultSize, 0 );	m_selectComputerStatic->Wrap( -1 );	m_controlsSizer->Add( m_selectComputerStatic, 0, wxALIGN_RIGHT|wxALL, 5 );		m_selectComputerCombo = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 	m_controlsSizer->Add( m_selectComputerCombo, 0, wxALIGN_RIGHT|wxEXPAND|wxRIGHT, 5 );		m_selectPortStatic = new wxStaticText( this, wxID_ANY, wxT("Select port:"), wxDefaultPosition, wxDefaultSize, 0 );	m_selectPortStatic->Wrap( -1 );	m_controlsSizer->Add( m_selectPortStatic, 0, wxALIGN_RIGHT|wxALL, 5 );		m_selectPortCombo = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 	m_controlsSizer->Add( m_selectPortCombo, 0, wxALIGN_RIGHT|wxEXPAND|wxRIGHT, 5 );		m_mainSizer->Add( m_controlsSizer, 1, wxEXPAND, 5 );		m_dialogDescriptionStatic = new wxStaticText( this, wxID_ANY, wxT("Connect your dive computer to you MAC, put it in \"PC\" mode\nand then you are ready to hit \"Upload dives\" button."), wxDefaultPosition, wxDefaultSize, 0 );	m_dialogDescriptionStatic->Wrap( -1 );	m_mainSizer->Add( m_dialogDescriptionStatic, 0, wxALL, 5 );		wxBoxSizer* m_buttonSizer;	m_buttonSizer = new wxBoxSizer( wxHORIZONTAL );			m_buttonSizer->Add( 0, 0, 1, wxEXPAND, 5 );		m_uploadDivesButton = new wxButton( this, wxID_ANY, wxT("Upload Dives"), wxDefaultPosition, wxDefaultSize, 0 );	m_buttonSizer->Add( m_uploadDivesButton, 0, wxALIGN_BOTTOM|wxALL, 5 );		m_mainSizer->Add( m_buttonSizer, 1, wxEXPAND, 5 );		this->SetSizer( m_mainSizer );	this->Layout();	m_mainSizer->Fit( this );		this->Centre( wxBOTH );		// Connect Events	m_uploadDivesButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( UploadDivesDialogBase::uploadDivesButtonOnButtonClick ), NULL, this );}UploadDivesDialogBase::~UploadDivesDialogBase(){	// Disconnect Events	m_uploadDivesButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( UploadDivesDialogBase::uploadDivesButtonOnButtonClick ), NULL, this );	}UploadDivesProgressDialogBase::UploadDivesProgressDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style ){	this->SetSizeHints( wxSize( 450,-1 ), wxDefaultSize );		wxBoxSizer* m_mainSizer;	m_mainSizer = new wxBoxSizer( wxVERTICAL );		wxBoxSizer* m_statusSizer;	m_statusSizer = new wxBoxSizer( wxVERTICAL );			m_statusSizer->Add( 0, 0, 1, wxEXPAND, 5 );		m_statusStatic = new wxStaticText( this, wxID_ANY, wxT("Status:"), wxDefaultPosition, wxDefaultSize, 0 );	m_statusStatic->Wrap( -1 );	m_statusSizer->Add( m_statusStatic, 1, wxALIGN_BOTTOM|wxALL, 5 );		m_mainSizer->Add( m_statusSizer, 2, wxEXPAND, 5 );		wxBoxSizer* m_gaugeSizer;	m_gaugeSizer = new wxBoxSizer( wxHORIZONTAL );		m_uploadProgressGauge = new wxGauge( this, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );	m_gaugeSizer->Add( m_uploadProgressGauge, 10, wxALL|wxEXPAND, 5 );		m_uploadProgressStatic = new wxStaticText( this, wxID_ANY, wxT("100%"), wxDefaultPosition, wxDefaultSize, 0 );	m_uploadProgressStatic->Wrap( -1 );	m_gaugeSizer->Add( m_uploadProgressStatic, 0, wxALIGN_RIGHT|wxALL, 5 );		m_mainSizer->Add( m_gaugeSizer, 1, wxEXPAND, 5 );		wxBoxSizer* m_buttonSizer;	m_buttonSizer = new wxBoxSizer( wxVERTICAL );			m_buttonSizer->Add( 0, 0, 1, wxEXPAND, 5 );		m_actionButton = new wxButton( this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );	m_buttonSizer->Add( m_actionButton, 0, wxALIGN_RIGHT|wxALL, 5 );		m_mainSizer->Add( m_buttonSizer, 2, wxEXPAND, 5 );		this->SetSizer( m_mainSizer );	this->Layout();	m_mainSizer->Fit( this );		this->Centre( wxBOTH );		// Connect Events	m_actionButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( UploadDivesProgressDialogBase::actionButtonOnButtonClick ), NULL, this );}UploadDivesProgressDialogBase::~UploadDivesProgressDialogBase(){	// Disconnect Events	m_actionButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( UploadDivesProgressDialogBase::actionButtonOnButtonClick ), NULL, this );	}PreferencesDialogBase::PreferencesDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style ){	this->SetSizeHints( wxDefaultSize, wxDefaultSize );		wxBoxSizer* m_mainSizer;	m_mainSizer = new wxBoxSizer( wxVERTICAL );		wxBoxSizer* m_accountInfoSizer;	m_accountInfoSizer = new wxBoxSizer( wxHORIZONTAL );		m_accountStatic = new wxStaticText( this, wxID_ANY, wxT("Diveboard account: "), wxDefaultPosition, wxDefaultSize, 0 );	m_accountStatic->Wrap( -1 );	m_accountInfoSizer->Add( m_accountStatic, 0, wxALIGN_RIGHT|wxALL, 5 );		m_accountText = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );	m_accountInfoSizer->Add( m_accountText, 0, wxALL, 5 );			m_accountInfoSizer->Add( 0, 0, 1, wxEXPAND, 5 );		m_unlinkButton = new wxButton( this, wxID_ANY, wxT("Unlink"), wxDefaultPosition, wxDefaultSize, 0 );	m_accountInfoSizer->Add( m_unlinkButton, 0, wxALL, 5 );		m_mainSizer->Add( m_accountInfoSizer, 1, wxEXPAND, 5 );		wxBoxSizer* m_accountSetSizer;	m_accountSetSizer = new wxBoxSizer( wxHORIZONTAL );		wxGridSizer* m_accountInputSizer;	m_accountInputSizer = new wxGridSizer( 3, 2, 0, 0 );		m_emailStatic = new wxStaticText( this, wxID_ANY, wxT("E-Mail:"), wxDefaultPosition, wxDefaultSize, 0 );	m_emailStatic->Wrap( -1 );	m_accountInputSizer->Add( m_emailStatic, 0, wxALIGN_RIGHT|wxALL, 5 );		m_emailText = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );	m_accountInputSizer->Add( m_emailText, 0, wxALL, 5 );		m_paswordStatic = new wxStaticText( this, wxID_ANY, wxT("Password:"), wxDefaultPosition, wxDefaultSize, 0 );	m_paswordStatic->Wrap( -1 );	m_accountInputSizer->Add( m_paswordStatic, 0, wxALIGN_RIGHT|wxALL, 5 );		m_passwordText = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD );	m_accountInputSizer->Add( m_passwordText, 0, wxALL, 5 );		m_emptyStatic = new wxStaticText( this, wxID_ANY, wxT(" "), wxDefaultPosition, wxDefaultSize, 0 );	m_emptyStatic->Wrap( -1 );	m_accountInputSizer->Add( m_emptyStatic, 0, wxALL, 5 );		m_loginButton = new wxButton( this, wxID_ANY, wxT("Login"), wxDefaultPosition, wxDefaultSize, 0 );	m_accountInputSizer->Add( m_loginButton, 0, wxALIGN_LEFT|wxALIGN_RIGHT|wxALL, 5 );		m_accountSetSizer->Add( m_accountInputSizer, 1, wxEXPAND, 5 );		m_FBconnectButton = new wxButton( this, wxID_ANY, wxT("FB connect"), wxDefaultPosition, wxDefaultSize, 0 );	m_accountSetSizer->Add( m_FBconnectButton, 0, wxALL, 5 );		m_mainSizer->Add( m_accountSetSizer, 2, wxEXPAND, 5 );		this->SetSizer( m_mainSizer );	this->Layout();	m_mainSizer->Fit( this );		this->Centre( wxBOTH );		// Connect Events	m_unlinkButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::unlinkButtonOnButtonClick ), NULL, this );	m_loginButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::loginButtonOnButtonClick ), NULL, this );	m_FBconnectButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::FBconnectButtonOnButtonClick ), NULL, this );}PreferencesDialogBase::~PreferencesDialogBase(){	// Disconnect Events	m_unlinkButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::unlinkButtonOnButtonClick ), NULL, this );	m_loginButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::loginButtonOnButtonClick ), NULL, this );	m_FBconnectButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::FBconnectButtonOnButtonClick ), NULL, this );	}AboutDialogBase::AboutDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style ){	this->SetSizeHints( wxSize( 400,-1 ), wxDefaultSize );		wxBoxSizer* m_mainSizer;	m_mainSizer = new wxBoxSizer( wxVERTICAL );		m_aboutStatic = new wxStaticText( this, wxID_ANY, wxT("DiveAgent"), wxDefaultPosition, wxDefaultSize, 0 );	m_aboutStatic->Wrap( -1 );	m_mainSizer->Add( m_aboutStatic, 3, wxALIGN_LEFT|wxALL, 5 );		m_okButton = new wxButton( this, wxID_ANY, wxT("Ok"), wxDefaultPosition, wxDefaultSize, 0 );	m_mainSizer->Add( m_okButton, 1, wxALIGN_RIGHT|wxALL, 5 );		this->SetSizer( m_mainSizer );	this->Layout();	m_mainSizer->Fit( this );		this->Centre( wxBOTH );}AboutDialogBase::~AboutDialogBase(){}