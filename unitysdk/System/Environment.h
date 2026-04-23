#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Contracts/ContractFailureKind.h"
#include "unitysdk/System/EnvironmentVariableTarget.h"
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
namespace System::Globalization { class CultureInfo; }

#define SYSTEM_ENVIRONMENT_CREATEVERSIONFROMSTRING_OFFSET UNITYSDK_OFFSET(0x17912DB0)
#define SYSTEM_ENVIRONMENT_EXIT_OFFSET UNITYSDK_OFFSET(0x17913120)
#define SYSTEM_ENVIRONMENT_EXPANDENVIRONMENTVARIABLES_OFFSET UNITYSDK_OFFSET(0x17913160)
#define SYSTEM_ENVIRONMENT_FAILFAST_1_OFFSET UNITYSDK_OFFSET(0x17914940)
#define SYSTEM_ENVIRONMENT_FAILFAST_2_OFFSET UNITYSDK_OFFSET(0x17914990)
#define SYSTEM_ENVIRONMENT_FAILFAST_OFFSET UNITYSDK_OFFSET(0x179148F0)
#define SYSTEM_ENVIRONMENT_GETBUNDLEDMACHINECONFIG_OFFSET UNITYSDK_OFFSET(0x17914AE0)
#define SYSTEM_ENVIRONMENT_GETCOMMANDLINEARGS_OFFSET UNITYSDK_OFFSET(0x17912CB0)
#define SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLENAMES_OFFSET UNITYSDK_OFFSET(0x179138C0)
#define SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLESNOCASE_OFFSET UNITYSDK_OFFSET(0x179135B0)
#define SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLES_1_OFFSET UNITYSDK_OFFSET(0x179146C0)
#define SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLES_OFFSET UNITYSDK_OFFSET(0x17913920)
#define SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x17914610)
#define SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLE_OFFSET UNITYSDK_OFFSET(0x179134F0)
#define SYSTEM_ENVIRONMENT_GETFOLDERPATH_1_OFFSET UNITYSDK_OFFSET(0x17913AF0)
#define SYSTEM_ENVIRONMENT_GETFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x17913040)
#define SYSTEM_ENVIRONMENT_GETIS64BITOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x17914A60)
#define SYSTEM_ENVIRONMENT_GETLOGICALDRIVESINTERNAL_OFFSET UNITYSDK_OFFSET(0x179145B0)
#define SYSTEM_ENVIRONMENT_GETLOGICALDRIVES_OFFSET UNITYSDK_OFFSET(0x17914550)
#define SYSTEM_ENVIRONMENT_GETMACHINECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x17914AC0)
#define SYSTEM_ENVIRONMENT_GETNEWLINE_OFFSET UNITYSDK_OFFSET(0x17912D50)
#define SYSTEM_ENVIRONMENT_GETOSVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0x17912DA0)
#define SYSTEM_ENVIRONMENT_GETPAGESIZE_OFFSET UNITYSDK_OFFSET(0x17914A90)
#define SYSTEM_ENVIRONMENT_GETRESOURCESTRINGENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x17912810)
#define SYSTEM_ENVIRONMENT_GETRESOURCESTRING_1_OFFSET UNITYSDK_OFFSET(0x17912740)
#define SYSTEM_ENVIRONMENT_GETRESOURCESTRING_2_OFFSET UNITYSDK_OFFSET(0x178E7250)
#define SYSTEM_ENVIRONMENT_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x178E51B0)
#define SYSTEM_ENVIRONMENT_GETRUNTIMERESOURCESTRING_1_OFFSET UNITYSDK_OFFSET(0x17912760)
#define SYSTEM_ENVIRONMENT_GETRUNTIMERESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x17912750)
#define SYSTEM_ENVIRONMENT_GETSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x17914B30)
#define SYSTEM_ENVIRONMENT_GETWINDOWSFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x17913B00)
#define SYSTEM_ENVIRONMENT_GET_BUNDLED_MACHINE_CONFIG_OFFSET UNITYSDK_OFFSET(0x17914AD0)
#define SYSTEM_ENVIRONMENT_GET_COMMANDLINE_OFFSET UNITYSDK_OFFSET(0x17912920)
#define SYSTEM_ENVIRONMENT_GET_CURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17912CC0)
#define SYSTEM_ENVIRONMENT_GET_CURRENTMANAGEDTHREADID_OFFSET UNITYSDK_OFFSET(0x178E22B0)
#define SYSTEM_ENVIRONMENT_GET_EXITCODE_OFFSET UNITYSDK_OFFSET(0x17912D10)
#define SYSTEM_ENVIRONMENT_GET_HASSHUTDOWNSTARTED_OFFSET UNITYSDK_OFFSET(0x17912D30)
#define SYSTEM_ENVIRONMENT_GET_IS64BITOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x17914A70)
#define SYSTEM_ENVIRONMENT_GET_IS64BITPROCESS_OFFSET UNITYSDK_OFFSET(0x17914AA0)
#define SYSTEM_ENVIRONMENT_GET_ISCLRHOSTED_OFFSET UNITYSDK_OFFSET(0x17914B10)
#define SYSTEM_ENVIRONMENT_GET_ISMACOS_OFFSET UNITYSDK_OFFSET(0x17914B00)
#define SYSTEM_ENVIRONMENT_GET_ISRUNNINGONWINDOWS_OFFSET UNITYSDK_OFFSET(0x179135A0)
#define SYSTEM_ENVIRONMENT_GET_ISUNIX_OFFSET UNITYSDK_OFFSET(0x17914AF0)
#define SYSTEM_ENVIRONMENT_GET_ISWINDOWS8ORABOVE_OFFSET UNITYSDK_OFFSET(0x17912910)
#define SYSTEM_ENVIRONMENT_GET_ISWINRTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x17914B90)
#define SYSTEM_ENVIRONMENT_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x17912D40)
#define SYSTEM_ENVIRONMENT_GET_NEWLINE_OFFSET UNITYSDK_OFFSET(0x178DFEC0)
#define SYSTEM_ENVIRONMENT_GET_OSVERSION_OFFSET UNITYSDK_OFFSET(0x178F5320)
#define SYSTEM_ENVIRONMENT_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x17912D90)
#define SYSTEM_ENVIRONMENT_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x17914AB0)
#define SYSTEM_ENVIRONMENT_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x17912FF0)
#define SYSTEM_ENVIRONMENT_GET_SYSTEMDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17913030)
#define SYSTEM_ENVIRONMENT_GET_SYSTEMPAGESIZE_OFFSET UNITYSDK_OFFSET(0x17914A80)
#define SYSTEM_ENVIRONMENT_GET_TICKCOUNT_OFFSET UNITYSDK_OFFSET(0x178E1790)
#define SYSTEM_ENVIRONMENT_GET_USERDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x17913050)
#define SYSTEM_ENVIRONMENT_GET_USERINTERACTIVE_OFFSET UNITYSDK_OFFSET(0x17913060)
#define SYSTEM_ENVIRONMENT_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x17913070)
#define SYSTEM_ENVIRONMENT_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x17913080)
#define SYSTEM_ENVIRONMENT_GET_WORKINGSET_OFFSET UNITYSDK_OFFSET(0x17913110)
#define SYSTEM_ENVIRONMENT_INTERNALGETENVIRONMENTVARIABLE_NATIVE_OFFSET UNITYSDK_OFFSET(0x17913800)
#define SYSTEM_ENVIRONMENT_INTERNALGETENVIRONMENTVARIABLE_OFFSET UNITYSDK_OFFSET(0x17913810)
#define SYSTEM_ENVIRONMENT_INTERNALGETHOME_OFFSET UNITYSDK_OFFSET(0x17914540)
#define SYSTEM_ENVIRONMENT_INTERNALSETENVIRONMENTVARIABLE_OFFSET UNITYSDK_OFFSET(0x179148D0)
#define SYSTEM_ENVIRONMENT_READXDGUSERDIR_OFFSET UNITYSDK_OFFSET(0x17913F10)
#define SYSTEM_ENVIRONMENT_SETENVIRONMENTVARIABLE_1_OFFSET UNITYSDK_OFFSET(0x179148E0)
#define SYSTEM_ENVIRONMENT_SETENVIRONMENTVARIABLE_OFFSET UNITYSDK_OFFSET(0x17914730)
#define SYSTEM_ENVIRONMENT_SET_CURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17912D00)
#define SYSTEM_ENVIRONMENT_SET_EXITCODE_OFFSET UNITYSDK_OFFSET(0x17912D20)
#define SYSTEM_ENVIRONMENT_TRIGGERCODECONTRACTFAILURE_OFFSET UNITYSDK_OFFSET(0x17914B20)
#define SYSTEM_ENVIRONMENT_UNIXGETFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x17913B10)
#define SYSTEM_ENVIRONMENT__EXIT_OFFSET UNITYSDK_OFFSET(0x17913140)

namespace System
{
	inline static constexpr unsigned int Environment_TypeDefinitionIndex = 369;

	class Environment : public ::System::Object
	{
	public:
		static ::System::OperatingSystem** StaticGet_os()
		{
			return (::System::OperatingSystem**)Il2CppClass::FromTypeDefinitionIndex(Environment_TypeDefinitionIndex)->GetStaticField(0x6800);
		}
		static ::System::String** StaticGet_nl()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Environment_TypeDefinitionIndex)->GetStaticField(0x6808);
		}
		static ::System::PlatformID* StaticGet__Platform_k__BackingField()
		{
			return (::System::PlatformID*)Il2CppClass::FromTypeDefinitionIndex(Environment_TypeDefinitionIndex)->GetStaticField(0x30B0);
		}
		// static const ::System::Int32 mono_corlib_version = 0x3EA68361; // 0x0

		static ::System::String* GetResourceString(::System::String* key)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETRESOURCESTRING_OFFSET))(key);
		}

		static ::System::String* GetResourceString_1(::System::String* key, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::String*(*)(::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETRESOURCESTRING_1_OFFSET))(key, culture);
		}

		static ::System::String* GetResourceString_2(::System::String* key, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETRESOURCESTRING_2_OFFSET))(key, values);
		}

		static ::System::String* GetRuntimeResourceString(::System::String* key)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETRUNTIMERESOURCESTRING_OFFSET))(key);
		}

		static ::System::String* GetRuntimeResourceString_1(::System::String* key, ::Il2CppArray<::System::Object*>* values)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETRUNTIMERESOURCESTRING_1_OFFSET))(key, values);
		}

		static ::System::String* GetResourceStringEncodingName(::System::Int32 codePage)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETRESOURCESTRINGENCODINGNAME_OFFSET))(codePage);
		}

		static ::System::Boolean get_IsWindows8OrAbove()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_ISWINDOWS8ORABOVE_OFFSET))();
		}

		static ::System::String* get_CommandLine()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_COMMANDLINE_OFFSET))();
		}

		static ::System::String* get_CurrentDirectory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_CURRENTDIRECTORY_OFFSET))();
		}

		static ::System::Void set_CurrentDirectory(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_SET_CURRENTDIRECTORY_OFFSET))(value);
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

		static ::System::String* get_SystemDirectory()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_SYSTEMDIRECTORY_OFFSET))();
		}

		static ::System::Int32 get_TickCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_TICKCOUNT_OFFSET))();
		}

		static ::System::String* get_UserDomainName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_USERDOMAINNAME_OFFSET))();
		}

		static ::System::Boolean get_UserInteractive()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_USERINTERACTIVE_OFFSET))();
		}

		static ::System::String* get_UserName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_USERNAME_OFFSET))();
		}

		static ::System::Version* get_Version()
		{
			return ((::System::Version*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_VERSION_OFFSET))();
		}

		static ::System::Int64 get_WorkingSet()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_WORKINGSET_OFFSET))();
		}

		static ::System::Void Exit(::System::Int32 exitCode)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_EXIT_OFFSET))(exitCode);
		}

		static ::System::Void _Exit(::System::Int32 exitCode)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT__EXIT_OFFSET))(exitCode);
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

		static ::Il2CppArray<::System::String*>* GetLogicalDrives()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETLOGICALDRIVES_OFFSET))();
		}

		static ::System::String* GetEnvironmentVariable_1(::System::String* variable, ::System::EnvironmentVariableTarget target)
		{
			return ((::System::String*(*)(::System::String*, ::System::EnvironmentVariableTarget))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLE_1_OFFSET))(variable, target);
		}

		static ::System::Collections::IDictionary* GetEnvironmentVariables_1(::System::EnvironmentVariableTarget target)
		{
			return ((::System::Collections::IDictionary*(*)(::System::EnvironmentVariableTarget))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETENVIRONMENTVARIABLES_1_OFFSET))(target);
		}

		static ::System::Void SetEnvironmentVariable(::System::String* variable, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_SETENVIRONMENTVARIABLE_OFFSET))(variable, value);
		}

		static ::System::Void SetEnvironmentVariable_1(::System::String* variable, ::System::String* value, ::System::EnvironmentVariableTarget target)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::EnvironmentVariableTarget))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_SETENVIRONMENTVARIABLE_1_OFFSET))(variable, value, target);
		}

		static ::System::Void InternalSetEnvironmentVariable(::System::String* variable, ::System::String* value)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_INTERNALSETENVIRONMENTVARIABLE_OFFSET))(variable, value);
		}

		static ::System::Void FailFast(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_FAILFAST_OFFSET))(message);
		}

		static ::System::Void FailFast_1(::System::String* message, ::System::UInt32 exitCode)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_FAILFAST_1_OFFSET))(message, exitCode);
		}

		static ::System::Void FailFast_2(::System::String* message, ::System::Exception* exception)
		{
			return ((::System::Void(*)(::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_FAILFAST_2_OFFSET))(message, exception);
		}

		static ::System::Boolean GetIs64BitOperatingSystem()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETIS64BITOPERATINGSYSTEM_OFFSET))();
		}

		static ::System::Boolean get_Is64BitOperatingSystem()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_IS64BITOPERATINGSYSTEM_OFFSET))();
		}

		static ::System::Int32 get_SystemPageSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_SYSTEMPAGESIZE_OFFSET))();
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

		static ::Il2CppArray<::System::String*>* GetLogicalDrivesInternal()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETLOGICALDRIVESINTERNAL_OFFSET))();
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

		static ::System::String* get_bundled_machine_config()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_BUNDLED_MACHINE_CONFIG_OFFSET))();
		}

		static ::System::String* GetBundledMachineConfig()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETBUNDLEDMACHINECONFIG_OFFSET))();
		}

		static ::System::Boolean get_IsUnix()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_ISUNIX_OFFSET))();
		}

		static ::System::Boolean get_IsMacOS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_ISMACOS_OFFSET))();
		}

		static ::System::Boolean get_IsCLRHosted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_ISCLRHOSTED_OFFSET))();
		}

		static ::System::Void TriggerCodeContractFailure(::System::Diagnostics::Contracts::ContractFailureKind failureKind, ::System::String* message, ::System::String* condition, ::System::String* exceptionAsString)
		{
			return ((::System::Void(*)(::System::Diagnostics::Contracts::ContractFailureKind, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_TRIGGERCODECONTRACTFAILURE_OFFSET))(failureKind, message, condition, exceptionAsString);
		}

		static ::System::String* GetStackTrace(::System::Exception* e, ::System::Boolean needFileInfo)
		{
			return ((::System::String*(*)(::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GETSTACKTRACE_OFFSET))(e, needFileInfo);
		}

		static ::System::Boolean get_IsWinRTSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_ENVIRONMENT_GET_ISWINRTSUPPORTED_OFFSET))();
		}
	};
}
