#include "stdafx.h"
#include <fstream>
#include <sstream>

#include "Transform.h"
#include "Clip.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
 void Main(array<String^>^ args) {
 Application::EnableVisualStyles();
 Application::SetCompatibleTextRenderingDefault(false);
 ������1::MyForm form;
 Application::Run(%form);
}
