#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/FileAction.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::IO { class DefaultWatcherData; }
namespace System::IO { class FileData; }
namespace System::IO { class FileSystemWatcher; }
namespace System::IO { class IFileWatcher; }
namespace System::Threading { class Thread; }

#define SYSTEM_IO_DEFAULTWATCHER_CREATEFILEDATA_OFFSET UNITYSDK_OFFSET(0x1A5736F0)
#define SYSTEM_IO_DEFAULTWATCHER_DISPATCHEVENTS_OFFSET UNITYSDK_OFFSET(0x1A572440)
#define SYSTEM_IO_DEFAULTWATCHER_DOFILES_OFFSET UNITYSDK_OFFSET(0x1A572040)
#define SYSTEM_IO_DEFAULTWATCHER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A570BB0)
#define SYSTEM_IO_DEFAULTWATCHER_ITERATEANDMODIFYFILESDATA_OFFSET UNITYSDK_OFFSET(0x1A572520)
#define SYSTEM_IO_DEFAULTWATCHER_MONITOR_OFFSET UNITYSDK_OFFSET(0x1A5716C0)
#define SYSTEM_IO_DEFAULTWATCHER_STARTDISPATCHING_OFFSET UNITYSDK_OFFSET(0x1A570C80)
#define SYSTEM_IO_DEFAULTWATCHER_STOPDISPATCHING_OFFSET UNITYSDK_OFFSET(0x1A571400)
#define SYSTEM_IO_DEFAULTWATCHER_UPDATEDATAANDDISPATCH_OFFSET UNITYSDK_OFFSET(0x1A571370)
#define SYSTEM_IO_DEFAULTWATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A573780)
#define SYSTEM_IO_DEFAULTWATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A570BA0)

namespace System::IO
{
	inline static constexpr unsigned int DefaultWatcher_TypeDefinitionIndex = 3219;

	class DefaultWatcher : public ::System::Object
	{
	public:
		static ::System::Threading::Thread** StaticGet_thread()
		{
			return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(DefaultWatcher_TypeDefinitionIndex)->GetStaticField(0x3060);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_NoStringsArray()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DefaultWatcher_TypeDefinitionIndex)->GetStaticField(0x3068);
		}
		static ::System::Collections::Hashtable** StaticGet_watches()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(DefaultWatcher_TypeDefinitionIndex)->GetStaticField(0x3070);
		}
		static ::System::IO::DefaultWatcher** StaticGet_instance()
		{
			return (::System::IO::DefaultWatcher**)Il2CppClass::FromTypeDefinitionIndex(DefaultWatcher_TypeDefinitionIndex)->GetStaticField(0x3078);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER__CCTOR_OFFSET))();
		}

		static ::System::Boolean GetInstance(::System::IO::IFileWatcher*& watcher)
		{
			return ((::System::Boolean(*)(::System::IO::IFileWatcher*&))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER_GETINSTANCE_OFFSET))(watcher);
		}

		::System::Void StartDispatching(::System::IO::FileSystemWatcher* fsw)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemWatcher*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER_STARTDISPATCHING_OFFSET))(this, fsw);
		}

		::System::Void StopDispatching(::System::IO::FileSystemWatcher* fsw)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::FileSystemWatcher*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER_STOPDISPATCHING_OFFSET))(this, fsw);
		}

		::System::Void Monitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER_MONITOR_OFFSET))(this);
		}

		::System::Boolean UpdateDataAndDispatch(::System::IO::DefaultWatcherData* data, ::System::Boolean dispatch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::DefaultWatcherData*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER_UPDATEDATAANDDISPATCH_OFFSET))(this, data, dispatch);
		}

		static ::System::Void DispatchEvents(::System::IO::FileSystemWatcher* fsw, ::System::IO::FileAction action, ::System::String* filename)
		{
			return ((::System::Void(*)(::System::IO::FileSystemWatcher*, ::System::IO::FileAction, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER_DISPATCHEVENTS_OFFSET))(fsw, action, filename);
		}

		::System::Void DoFiles(::System::IO::DefaultWatcherData* data, ::System::String* directory, ::System::Boolean dispatch)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::DefaultWatcherData*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER_DOFILES_OFFSET))(this, data, directory, dispatch);
		}

		::System::Void IterateAndModifyFilesData(::System::IO::DefaultWatcherData* data, ::System::String* directory, ::System::Boolean dispatch, ::Il2CppArray<::System::String*>* files)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::DefaultWatcherData*, ::System::String*, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER_ITERATEANDMODIFYFILESDATA_OFFSET))(this, data, directory, dispatch, files);
		}

		static ::System::IO::FileData* CreateFileData(::System::String* directory, ::System::String* filename)
		{
			return ((::System::IO::FileData*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_DEFAULTWATCHER_CREATEFILEDATA_OFFSET))(directory, filename);
		}
	};
}
