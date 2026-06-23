#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class ErrorEventArgs; }

#define SYSTEM_IO_ERROREVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C0149E0)
#define SYSTEM_IO_ERROREVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C014A20)
#define SYSTEM_IO_ERROREVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C014460)
#define SYSTEM_IO_ERROREVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C014440)

namespace System::IO
{
	inline static constexpr unsigned int ErrorEventHandler_TypeDefinitionIndex = 3220;

	class ErrorEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IO_ERROREVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::System::IO::ErrorEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IO::ErrorEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_IO_ERROREVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::IO::ErrorEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::IO::ErrorEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_ERROREVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_ERROREVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
