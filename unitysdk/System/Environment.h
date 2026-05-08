#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Environment_SpecialFolder.h"
#include "unitysdk/System/Environment_SpecialFolderOption.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/PlatformID.h"

namespace System { class Exception; }
namespace System { class OperatingSystem; }
namespace System { class String; }
namespace System { class Version; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IDictionary; }

#define SYSTEM_ENVIRONMENT_CREATEVERSIONFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1A098700)
#define SYSTEM_ENVIRONMENT_EXIT_OFFSET UNITYSDK_OFFSET(0x1A098A00)
#define SYSTEM_ENVIRONMENT_EXPANDENVIRONMENTVARIABLES_OFFSET UNITYSDK_OFFSET(0x1A098A20)
#define SYSTEM_ENVIRONMENT_FAILFAST_1_OFFSET UNITYSDK_OFFSET(0x1A099F70)
#define SYSTEM_ENVIRONMENT_FAILFAST_OFFSET UNITYSDK_OFFSET(0x1A099F20)
#define SYSTEM_ENVIRONMENT_GETCOMMANDLINEARGS_OFFSET UNITYSDK_OFFSET(0x1A098440)
#define SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLENAMES_OFFSET UNITYSDK_OFFSET(0x1A099170)
#define SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLESNOCASE_OFFSET UNITYSDK_OFFSET(0x1A098E10)
#define SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLES_OFFSET UNITYSDK_OFFSET(0x1A0991D0)
#define SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A0964F0)
#define SYSTEM_ENVIRONMENT_GETFOLDERPATH_1_OFFSET UNITYSDK_OFFSET(0x1A099410)
#define SYSTEM_ENVIRONMENT_GETFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x1A0964E0)
#define SYSTEM_ENVIRONMENT_GETMACHINECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1A0965A0)
#define SYSTEM_ENVIRONMENT_GETNEWLINE_OFFSET UNITYSDK_OFFSET(0x1A0985B0)
#define SYSTEM_ENVIRONMENT_GETOSVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x1A098660)
#define SYSTEM_ENVIRONMENT_GETPAGESIZE_OFFSET UNITYSDK_OFFSET(0x1A09A000)
#define SYSTEM_ENVIRONMENT_GETRESOURCESTRINGENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x1A097E50)
#define SYSTEM_ENVIRONMENT_GETRESOURCESTRING_1_OFFSET UNITYSDK_OFFSET(0x1A097E30)
#define SYSTEM_ENVIRONMENT_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x1A0977C0)
#define SYSTEM_ENVIRONMENT_GETSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1A09A020)
#define SYSTEM_ENVIRONMENT_GETWINDOWSFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x1A099420)
#define SYSTEM_ENVIRONMENT_GET_COMMANDLINE_OFFSET UNITYSDK_OFFSET(0x1A097F50)
#define SYSTEM_ENVIRONMENT_GET_CURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1A098450)
#define SYSTEM_ENVIRONMENT_GET_CURRENTMANAGEDTHREADID_OFFSET UNITYSDK_OFFSET(0x1A0984B0)
#define SYSTEM_ENVIRONMENT_GET_EXITCODE_OFFSET UNITYSDK_OFFSET(0x1A098570)
#define SYSTEM_ENVIRONMENT_GET_HASSHUTDOWNSTARTED_OFFSET UNITYSDK_OFFSET(0x1A098590)
#define SYSTEM_ENVIRONMENT_GET_IS64BITPROCESS_OFFSET UNITYSDK_OFFSET(0x1A099FD0)
#define SYSTEM_ENVIRONMENT_GET_ISRUNNINGONWINDOWS_OFFSET UNITYSDK_OFFSET(0x1A098E00)
#define SYSTEM_ENVIRONMENT_GET_ISUNIX_OFFSET UNITYSDK_OFFSET(0x1A09A010)
#define SYSTEM_ENVIRONMENT_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1A0985A0)
#define SYSTEM_ENVIRONMENT_GET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x1A0985F0)
#define SYSTEM_ENVIRONMENT_GET_OSVERSION_OFFSET UNITYSDK_OFFSET(0x1A098670)
#define SYSTEM_ENVIRONMENT_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1A098650)
#define SYSTEM_ENVIRONMENT_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1A099FF0)
#define SYSTEM_ENVIRONMENT_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x1A098940)
#define SYSTEM_ENVIRONMENT_GET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0989A0)
#define SYSTEM_ENVIRONMENT_GET_USERDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x1A0989E0)
#define SYSTEM_ENVIRONMENT_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A0989F0)
#define SYSTEM_ENVIRONMENT_INTERNALGETENVIRONMENTVARIABLE_NATIVE_OFFSET UNITYSDK_OFFSET(0x1A0990B0)
#define SYSTEM_ENVIRONMENT_INTERNALGETENVIRONMENTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A0990C0)
#define SYSTEM_ENVIRONMENT_INTERNALGETHOME_OFFSET UNITYSDK_OFFSET(0x1A099D40)
#define SYSTEM_ENVIRONMENT_INTERNALSETENVIRONMENTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A099F10)
#define SYSTEM_ENVIRONMENT_READXDGUSERDIR_OFFSET UNITYSDK_OFFSET(0x1A099830)
#define SYSTEM_ENVIRONMENT_SETENVIRONMENTVARIABLE_OFFSET UNITYSDK_OFFSET(0x1A099D50)
#define SYSTEM_ENVIRONMENT_SET_EXITCODE_OFFSET UNITYSDK_OFFSET(0x1A098580)
#define SYSTEM_ENVIRONMENT_UNIXGETFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x1A099430)

namespace System
{
	inline static constexpr unsigned int Environment_TypeDefinitionIndex = 358;

	class Environment : public ::System::Object
	{
	public:
		static ::System::OperatingSystem** StaticGet_os()
		{
			return (::System::OperatingSystem**)Il2CppClass::FromTypeDefinitionIndex(Environment_TypeDefinitionIndex)->GetStaticField(0xD00);
		}
		static ::System::String** StaticGet_nl()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Environment_TypeDefinitionIndex)->GetStaticField(0xD08);
		}
		// static const ::System::Int32 mono_corlib_version = 0x3EA68361; // 0x0

		static ::System::String* GetResourceString(::System::String* key)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETRESOURCESTRING_OFFSET))(key);
		}

		static ::System::String* GetResourceString_1(::System::String* key, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETRESOURCESTRING_1_OFFSET))(key, values);
		}

		static ::System::String* GetResourceStringEncodingName(::System::Int32 codePage)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETRESOURCESTRINGENCODINGNAME_OFFSET))(codePage);
		}

		static ::System::String* get_CommandLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_COMMANDLINE_OFFSET))();
		}

		static ::System::String* get_CurrentDirectory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_CURRENTDIRECTORY_OFFSET))();
		}

		static ::System::Int32 get_CurrentManagedThreadId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_CURRENTMANAGEDTHREADID_OFFSET))();
		}

		static ::System::Int32 get_ExitCode()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_EXITCODE_OFFSET))();
		}

		static ::System::Void set_ExitCode(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_SET_EXITCODE_OFFSET))(value);
		}

		static ::System::Boolean get_HasShutdownStarted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_HASSHUTDOWNSTARTED_OFFSET))();
		}

		static ::System::String* get_MachineName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_MACHINENAME_OFFSET))();
		}

		static ::System::String* GetNewLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETNEWLINE_OFFSET))();
		}

		static ::System::String* get_NewLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_NEWLINE_OFFSET))();
		}

		static ::System::PlatformID get_Platform()
		{
			return ((::System::PlatformID(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_PLATFORM_OFFSET))();
		}

		static ::System::String* GetOSVersionString()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETOSVERSIONSTRING_OFFSET))();
		}

		static ::System::OperatingSystem* get_OSVersion()
		{
			return ((::System::OperatingSystem*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_OSVERSION_OFFSET))();
		}

		static ::System::Version* CreateVersionFromString(::System::String* info)
		{
			return ((::System::Version*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_CREATEVERSIONFROMSTRING_OFFSET))(info);
		}

		static ::System::String* get_StackTrace()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_STACKTRACE_OFFSET))();
		}

		static ::System::Int32 get_TickCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_TICKCOUNT_OFFSET))();
		}

		static ::System::String* get_UserDomainName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_USERDOMAINNAME_OFFSET))();
		}

		static ::System::String* get_UserName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_USERNAME_OFFSET))();
		}

		static ::System::Void Exit(::System::Int32 exitCode)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_EXIT_OFFSET))(exitCode);
		}

		static ::System::String* ExpandEnvironmentVariables(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_EXPANDENVIRONMENTVARIABLES_OFFSET))(name);
		}

		static ::Il2CppArray<::System::String*>* GetCommandLineArgs()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETCOMMANDLINEARGS_OFFSET))();
		}

		static ::System::String* internalGetEnvironmentVariable_native(::System::IntPtr variable)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_INTERNALGETENVIRONMENTVARIABLE_NATIVE_OFFSET))(variable);
		}

		static ::System::String* internalGetEnvironmentVariable(::System::String* variable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_INTERNALGETENVIRONMENTVARIABLE_OFFSET))(variable);
		}

		static ::System::String* GetEnvironmentVariable(::System::String* variable)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLE_OFFSET))(variable);
		}

		static ::System::Collections::Hashtable* GetEnvironmentVariablesNoCase()
		{
			return ((::System::Collections::Hashtable*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLESNOCASE_OFFSET))();
		}

		static ::System::Collections::IDictionary* GetEnvironmentVariables()
		{
			return ((::System::Collections::IDictionary*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLES_OFFSET))();
		}

		static ::System::String* GetFolderPath(::System::Environment_SpecialFolder folder)
		{
			return ((::System::String*(*)(::System::Environment_SpecialFolder))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETFOLDERPATH_OFFSET))(folder);
		}

		static ::System::String* GetWindowsFolderPath(::System::Int32 folder)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETWINDOWSFOLDERPATH_OFFSET))(folder);
		}

		static ::System::String* GetFolderPath_1(::System::Environment_SpecialFolder folder, ::System::Environment_SpecialFolderOption option)
		{
			return ((::System::String*(*)(::System::Environment_SpecialFolder, ::System::Environment_SpecialFolderOption))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETFOLDERPATH_1_OFFSET))(folder, option);
		}

		static ::System::String* ReadXdgUserDir(::System::String* config_dir, ::System::String* home_dir, ::System::String* key, ::System::String* fallback)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_READXDGUSERDIR_OFFSET))(config_dir, home_dir, key, fallback);
		}

		static ::System::String* UnixGetFolderPath(::System::Environment_SpecialFolder folder, ::System::Environment_SpecialFolderOption option)
		{
			return ((::System::String*(*)(::System::Environment_SpecialFolder, ::System::Environment_SpecialFolderOption))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_UNIXGETFOLDERPATH_OFFSET))(folder, option);
		}

		static ::System::Void SetEnvironmentVariable(::System::String* variable, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_SETENVIRONMENTVARIABLE_OFFSET))(variable, value);
		}

		static ::System::Void InternalSetEnvironmentVariable(::System::String* variable, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_INTERNALSETENVIRONMENTVARIABLE_OFFSET))(variable, value);
		}

		static ::System::Void FailFast(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_FAILFAST_OFFSET))(message);
		}

		static ::System::Void FailFast_1(::System::String* message, ::System::Exception* exception)
		{
			return ((::System::Void(*)(::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_FAILFAST_1_OFFSET))(message, exception);
		}

		static ::System::Boolean get_Is64BitProcess()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_IS64BITPROCESS_OFFSET))();
		}

		static ::System::Int32 get_ProcessorCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_PROCESSORCOUNT_OFFSET))();
		}

		static ::System::Boolean get_IsRunningOnWindows()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_ISRUNNINGONWINDOWS_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* GetEnvironmentVariableNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLENAMES_OFFSET))();
		}

		static ::System::String* GetMachineConfigPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETMACHINECONFIGPATH_OFFSET))();
		}

		static ::System::String* internalGetHome()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_INTERNALGETHOME_OFFSET))();
		}

		static ::System::Int32 GetPageSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETPAGESIZE_OFFSET))();
		}

		static ::System::Boolean get_IsUnix()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_ISUNIX_OFFSET))();
		}

		static ::System::String* GetStackTrace(::System::Exception* e, ::System::Boolean needFileInfo)
		{
			return ((::System::String*(*)(::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETSTACKTRACE_OFFSET))(e, needFileInfo);
		}
	};
}
