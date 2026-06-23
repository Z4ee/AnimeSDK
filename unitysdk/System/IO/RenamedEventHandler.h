#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class RenamedEventArgs; }

#define SYSTEM_IO_RENAMEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF65A0)
#define SYSTEM_IO_RENAMEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF65E0)
#define SYSTEM_IO_RENAMEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF6020)
#define SYSTEM_IO_RENAMEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF6000)

namespace System::IO
{
	inline static constexpr unsigned int RenamedEventHandler_TypeDefinitionIndex = 3233;

	class RenamedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_RENAMEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::IO::RenamedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IO::RenamedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_RENAMEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::IO::RenamedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::IO::RenamedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_RENAMEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_RENAMEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
