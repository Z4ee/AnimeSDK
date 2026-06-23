#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/ProcessWindowStyle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Specialized { class StringDictionary; }
namespace System::Diagnostics { class Process; }
namespace System::Security { class SecureString; }
namespace System::Text { class Encoding; }

#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1C48E9F0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_CREATENOWINDOW_OFFSET UNITYSDK_OFFSET(0x1C48EA20)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1C48F230)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ENVIRONMENTVARIABLES_OFFSET UNITYSDK_OFFSET(0x1C48EA40)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1C48F090)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ERRORDIALOGPARENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1C48F300)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1C48F2E0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1C48F280)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_HAVEENVVARS_OFFSET UNITYSDK_OFFSET(0x1C48F460)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_LOADUSERPROFILE_OFFSET UNITYSDK_OFFSET(0x1C48F260)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_PASSWORDINCLEARTEXT_OFFSET UNITYSDK_OFFSET(0x1C48F210)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1C48F1F0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDERROR_OFFSET UNITYSDK_OFFSET(0x1C48F140)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDINPUT_OFFSET UNITYSDK_OFFSET(0x1C48F100)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDOUTPUT_OFFSET UNITYSDK_OFFSET(0x1C48F120)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_STANDARDERRORENCODING_OFFSET UNITYSDK_OFFSET(0x1C48F160)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_STANDARDOUTPUTENCODING_OFFSET UNITYSDK_OFFSET(0x1C48F180)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1C48F1C0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_USESHELLEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C48F1A0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_VERBS_OFFSET UNITYSDK_OFFSET(0x1C48F470)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_VERB_OFFSET UNITYSDK_OFFSET(0x1C48E9C0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_WINDOWSTYLE_OFFSET UNITYSDK_OFFSET(0x1C48F320)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_WORKINGDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C48F2B0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1C48EA10)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_CREATENOWINDOW_OFFSET UNITYSDK_OFFSET(0x1C48EA30)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1C48F250)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_ERRORDIALOGPARENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1C48F310)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_ERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1C48F2F0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1C48F2A0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_LOADUSERPROFILE_OFFSET UNITYSDK_OFFSET(0x1C48F270)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_PASSWORDINCLEARTEXT_OFFSET UNITYSDK_OFFSET(0x1C48F220)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1C48F200)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_REDIRECTSTANDARDERROR_OFFSET UNITYSDK_OFFSET(0x1C48F150)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_REDIRECTSTANDARDINPUT_OFFSET UNITYSDK_OFFSET(0x1C48F110)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_REDIRECTSTANDARDOUTPUT_OFFSET UNITYSDK_OFFSET(0x1C48F130)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_STANDARDERRORENCODING_OFFSET UNITYSDK_OFFSET(0x1C48F170)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_STANDARDOUTPUTENCODING_OFFSET UNITYSDK_OFFSET(0x1C48F190)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1C48F1E0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_USESHELLEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C48F1B0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_VERB_OFFSET UNITYSDK_OFFSET(0x1C48E9E0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_WINDOWSTYLE_OFFSET UNITYSDK_OFFSET(0x1C48F330)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_WORKINGDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C48F2D0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C48F4D0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C48E940)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C48E9A0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C48E9B0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C48E930)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessStartInfo_TypeDefinitionIndex = 2787;

	class ProcessStartInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_empty()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProcessStartInfo_TypeDefinitionIndex)->GetStaticField(0x2920);
		}
		::System::String* fileName; // 0x10
		::System::String* arguments; // 0x18
		::System::String* directory; // 0x20
		::System::String* verb; // 0x28
		::System::Diagnostics::ProcessWindowStyle windowStyle; // 0x30
		::System::Boolean errorDialog; // 0x34
		::System::IntPtr errorDialogParentHandle; // 0x38
		::System::Boolean useShellExecute; // 0x40
		::System::String* userName; // 0x48
		::System::String* domain; // 0x50
		::System::Security::SecureString* password; // 0x58
		::System::String* passwordInClearText; // 0x60
		::System::Boolean loadUserProfile; // 0x68
		::System::Boolean redirectStandardInput; // 0x69
		::System::Boolean redirectStandardOutput; // 0x6A
		::System::Boolean redirectStandardError; // 0x6B
		::System::Text::Encoding* standardOutputEncoding; // 0x70
		::System::Text::Encoding* standardErrorEncoding; // 0x78
		::System::Boolean createNoWindow; // 0x80
		::System::WeakReference* weakParentProcess; // 0x88
		::System::Collections::Specialized::StringDictionary* environmentVariables; // 0x90
		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* environment; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Diagnostics::Process* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Process*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_1_OFFSET))(this, parent);
		}

		::System::Void _ctor_2(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_2_OFFSET))(this, fileName);
		}

		::System::Void _ctor_3(::System::String* fileName, ::System::String* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_3_OFFSET))(this, fileName, arguments);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CCTOR_OFFSET))();
		}

		::System::String* get_Verb()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_VERB_OFFSET))(this);
		}

		::System::Void set_Verb(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_VERB_OFFSET))(this, value);
		}

		::System::String* get_Arguments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Void set_Arguments(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_ARGUMENTS_OFFSET))(this, value);
		}

		::System::Boolean get_CreateNoWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_CREATENOWINDOW_OFFSET))(this);
		}

		::System::Void set_CreateNoWindow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_CREATENOWINDOW_OFFSET))(this, value);
		}

		::System::Collections::Specialized::StringDictionary* get_EnvironmentVariables()
		{
			return ((::System::Collections::Specialized::StringDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ENVIRONMENTVARIABLES_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* get_Environment()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ENVIRONMENT_OFFSET))(this);
		}

		::System::Boolean get_RedirectStandardInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDINPUT_OFFSET))(this);
		}

		::System::Void set_RedirectStandardInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_REDIRECTSTANDARDINPUT_OFFSET))(this, value);
		}

		::System::Boolean get_RedirectStandardOutput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDOUTPUT_OFFSET))(this);
		}

		::System::Void set_RedirectStandardOutput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_REDIRECTSTANDARDOUTPUT_OFFSET))(this, value);
		}

		::System::Boolean get_RedirectStandardError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDERROR_OFFSET))(this);
		}

		::System::Void set_RedirectStandardError(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_REDIRECTSTANDARDERROR_OFFSET))(this, value);
		}

		::System::Text::Encoding* get_StandardErrorEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_STANDARDERRORENCODING_OFFSET))(this);
		}

		::System::Void set_StandardErrorEncoding(::System::Text::Encoding* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_STANDARDERRORENCODING_OFFSET))(this, value);
		}

		::System::Text::Encoding* get_StandardOutputEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_STANDARDOUTPUTENCODING_OFFSET))(this);
		}

		::System::Void set_StandardOutputEncoding(::System::Text::Encoding* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_STANDARDOUTPUTENCODING_OFFSET))(this, value);
		}

		::System::Boolean get_UseShellExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_USESHELLEXECUTE_OFFSET))(this);
		}

		::System::Void set_UseShellExecute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_USESHELLEXECUTE_OFFSET))(this, value);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_UserName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_USERNAME_OFFSET))(this, value);
		}

		::System::Security::SecureString* get_Password()
		{
			return ((::System::Security::SecureString*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::Security::SecureString* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecureString*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::String* get_PasswordInClearText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_PASSWORDINCLEARTEXT_OFFSET))(this);
		}

		::System::Void set_PasswordInClearText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_PASSWORDINCLEARTEXT_OFFSET))(this, value);
		}

		::System::String* get_Domain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_DOMAIN_OFFSET))(this);
		}

		::System::Void set_Domain(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_DOMAIN_OFFSET))(this, value);
		}

		::System::Boolean get_LoadUserProfile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_LOADUSERPROFILE_OFFSET))(this);
		}

		::System::Void set_LoadUserProfile(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_LOADUSERPROFILE_OFFSET))(this, value);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_FileName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_FILENAME_OFFSET))(this, value);
		}

		::System::String* get_WorkingDirectory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_WORKINGDIRECTORY_OFFSET))(this);
		}

		::System::Void set_WorkingDirectory(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_WORKINGDIRECTORY_OFFSET))(this, value);
		}

		::System::Boolean get_ErrorDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ERRORDIALOG_OFFSET))(this);
		}

		::System::Void set_ErrorDialog(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_ERRORDIALOG_OFFSET))(this, value);
		}

		::System::IntPtr get_ErrorDialogParentHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ERRORDIALOGPARENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ErrorDialogParentHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_ERRORDIALOGPARENTHANDLE_OFFSET))(this, value);
		}

		::System::Diagnostics::ProcessWindowStyle get_WindowStyle()
		{
			return ((::System::Diagnostics::ProcessWindowStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_WINDOWSTYLE_OFFSET))(this);
		}

		::System::Void set_WindowStyle(::System::Diagnostics::ProcessWindowStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::ProcessWindowStyle))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_WINDOWSTYLE_OFFSET))(this, value);
		}

		::System::Boolean get_HaveEnvVars()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_HAVEENVVARS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_Verbs()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_VERBS_OFFSET))(this);
		}
	};
}
