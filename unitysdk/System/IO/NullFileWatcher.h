#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class FileSystemWatcher; }
namespace System::IO { class IFileWatcher; }

#define SYSTEM_IO_NULLFILEWATCHER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B4032A0)
#define SYSTEM_IO_NULLFILEWATCHER_STARTDISPATCHING_OFFSET UNITYSDK_OFFSET(0x1B403280)
#define SYSTEM_IO_NULLFILEWATCHER_STOPDISPATCHING_OFFSET UNITYSDK_OFFSET(0x1B403290)
#define SYSTEM_IO_NULLFILEWATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B403320)

namespace System::IO
{
	inline static constexpr unsigned int NullFileWatcher_TypeDefinitionIndex = 3231;

	class NullFileWatcher : public ::System::Object
	{
	public:
		static ::System::IO::IFileWatcher** StaticGet_instance()
		{
			return (::System::IO::IFileWatcher**)Il2CppClass::FromTypeDefinitionIndex(NullFileWatcher_TypeDefinitionIndex)->GetStaticField(0x3770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_NULLFILEWATCHER__CTOR_OFFSET))(this);
		}

		::System::Void StartDispatching(::System::IO::FileSystemWatcher* fsw)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemWatcher*))((::PBYTE)hIl2Cpp + SYSTEM_IO_NULLFILEWATCHER_STARTDISPATCHING_OFFSET))(this, fsw);
		}

		::System::Void StopDispatching(::System::IO::FileSystemWatcher* fsw)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemWatcher*))((::PBYTE)hIl2Cpp + SYSTEM_IO_NULLFILEWATCHER_STOPDISPATCHING_OFFSET))(this, fsw);
		}

		static ::System::Boolean GetInstance(::System::IO::IFileWatcher*& watcher)
		{
			return ((::System::Boolean(*)(::System::IO::IFileWatcher*&))((::PBYTE)hIl2Cpp + SYSTEM_IO_NULLFILEWATCHER_GETINSTANCE_OFFSET))(watcher);
		}
	};
}
