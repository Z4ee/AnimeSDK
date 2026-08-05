#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"

namespace System { class String; }
namespace System::Diagnostics { class FileVersionInfo; }

#define SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_BASEADDRESS_OFFSET UNITYSDK_OFFSET(0x1D232FF0)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_ENTRYPOINTADDRESS_OFFSET UNITYSDK_OFFSET(0x1D233000)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1D233010)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_FILEVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x1D233020)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_MODULEMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D233030)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_MODULENAME_OFFSET UNITYSDK_OFFSET(0x1D233040)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D233050)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D233060)
#define SYSTEM_DIAGNOSTICS_PROCESSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D232F60)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessModule_TypeDefinitionIndex = 2796;

	class ProcessModule : public ::System::ComponentModel::Component
	{
	public:
		::System::String* modulename; // 0x28
		::System::Diagnostics::FileVersionInfo* version_info; // 0x30
		::System::String* filename; // 0x38
		::System::Int32 memory_size; // 0x40
		::System::IntPtr entryaddr; // 0x48
		::System::IntPtr baseaddr; // 0x50

		::System::Void _ctor(::System::IntPtr baseaddr, ::System::IntPtr entryaddr, ::System::String* filename, ::System::Diagnostics::FileVersionInfo* version_info, ::System::Int32 memory_size, ::System::String* modulename)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::String*, ::System::Diagnostics::FileVersionInfo*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULE__CTOR_OFFSET))(this, baseaddr, entryaddr, filename, version_info, memory_size, modulename);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULE__CTOR_1_OFFSET))(this);
		}

		::System::IntPtr get_BaseAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_BASEADDRESS_OFFSET))(this);
		}

		::System::IntPtr get_EntryPointAddress()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_ENTRYPOINTADDRESS_OFFSET))(this);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_FILENAME_OFFSET))(this);
		}

		::System::Diagnostics::FileVersionInfo* get_FileVersionInfo()
		{
			return ((::System::Diagnostics::FileVersionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_FILEVERSIONINFO_OFFSET))(this);
		}

		::System::Int32 get_ModuleMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_MODULEMEMORYSIZE_OFFSET))(this);
		}

		::System::String* get_ModuleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULE_GET_MODULENAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSMODULE_TOSTRING_OFFSET))(this);
		}
	};
}
