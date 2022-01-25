#pragma once

#include "common.hpp"

#include <wx/wx.h>
#include <wx/filepicker.h>

#include <filesystem>

class OutputPanel : public wxPanel {
public:
	OutputPanel(wxWindow *parent, wxWindowID id = wxID_ANY);

	void SetPath(const std::filesystem::path &path);
	void SetName(const std::wstring &name);
	void SetFormat(FORMAT format);
	void SetMode(MODE mode);

private:
	wxDirPickerCtrl *output_picker;
	wxTextCtrl *name_text;
	wxChoice *format_choice;
	wxChoice *mode_choice;
	wxChoice *max_res_choice;
};