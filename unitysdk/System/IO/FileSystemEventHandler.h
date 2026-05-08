#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class FileSystemEventArgs; }

#define SYSTEM_IO_FILESYSTEMEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AA9A430)
#define SYSTEM_IO_FILESYSTEMEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AA9A470)
#define SYSTEM_IO_FILESYSTEMEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AA99EB0)
#define SYSTEM_IO_FILESYSTEMEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA99EA0)

namespace System::IO
{
	inline static constexpr unsigned int FileSystemEventHandler_TypeDefinitionIndex = 3224;

	class FileSystemEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::IO::FileSystemEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IO::FileSystemEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::IO::FileSystemEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::IO::FileSystemEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESYSTEMEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
