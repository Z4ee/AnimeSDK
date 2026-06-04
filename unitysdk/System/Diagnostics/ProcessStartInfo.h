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

#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1AF48CC0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1AF48D00)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ENVIRONMENTVARIABLES_OFFSET UNITYSDK_OFFSET(0x1AF48680)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1AF46890)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_HAVEENVVARS_OFFSET UNITYSDK_OFFSET(0x1AF48670)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_LOADUSERPROFILE_OFFSET UNITYSDK_OFFSET(0x1AF48DA0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1AF48D90)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDERROR_OFFSET UNITYSDK_OFFSET(0x1AF48D50)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDINPUT_OFFSET UNITYSDK_OFFSET(0x1AF48D30)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDOUTPUT_OFFSET UNITYSDK_OFFSET(0x1AF48D40)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_STANDARDERRORENCODING_OFFSET UNITYSDK_OFFSET(0x1AF48D60)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_STANDARDOUTPUTENCODING_OFFSET UNITYSDK_OFFSET(0x1AF48D70)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1AF48260)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_USESHELLEXECUTE_OFFSET UNITYSDK_OFFSET(0x1AF48D80)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_WORKINGDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1AF48CE0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1AF48D20)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1AF48DB0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF48DC0)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF47B80)
#define SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF457F0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessStartInfo_TypeDefinitionIndex = 2541;

	class ProcessStartInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_empty()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ProcessStartInfo_TypeDefinitionIndex)->GetStaticField(0x23920);
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

		::System::Void _ctor(::System::Diagnostics::Process* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Process*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO__CCTOR_OFFSET))();
		}

		::System::String* get_Arguments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Void set_Arguments(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_ARGUMENTS_OFFSET))(this, a1);
		}

		::System::Collections::Specialized::StringDictionary* get_EnvironmentVariables()
		{
			return ((::System::Collections::Specialized::StringDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_ENVIRONMENTVARIABLES_OFFSET))(this);
		}

		::System::Boolean get_RedirectStandardInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDINPUT_OFFSET))(this);
		}

		::System::Boolean get_RedirectStandardOutput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDOUTPUT_OFFSET))(this);
		}

		::System::Boolean get_RedirectStandardError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_REDIRECTSTANDARDERROR_OFFSET))(this);
		}

		::System::Text::Encoding* get_StandardErrorEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_STANDARDERRORENCODING_OFFSET))(this);
		}

		::System::Text::Encoding* get_StandardOutputEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_STANDARDOUTPUTENCODING_OFFSET))(this);
		}

		::System::Boolean get_UseShellExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_USESHELLEXECUTE_OFFSET))(this);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_USERNAME_OFFSET))(this);
		}

		::System::Security::SecureString* get_Password()
		{
			return ((::System::Security::SecureString*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_PASSWORD_OFFSET))(this);
		}

		::System::String* get_Domain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_DOMAIN_OFFSET))(this);
		}

		::System::Boolean get_LoadUserProfile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_LOADUSERPROFILE_OFFSET))(this);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Void set_FileName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_SET_FILENAME_OFFSET))(this, a1);
		}

		::System::String* get_WorkingDirectory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_WORKINGDIRECTORY_OFFSET))(this);
		}

		::System::Boolean get_HaveEnvVars()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSSTARTINFO_GET_HAVEENVVARS_OFFSET))(this);
		}
	};
}
