#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class IOAsyncResult; }
namespace System { class Object; }

#define SYSTEM_IOASYNCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF6B20)
#define SYSTEM_IOASYNCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF6B50)
#define SYSTEM_IOASYNCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF6620)
#define SYSTEM_IOASYNCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF6600)

namespace System
{
	inline static constexpr unsigned int IOAsyncCallback_TypeDefinitionIndex = 2698;

	class IOAsyncCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IOAsyncResult* ioares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCCALLBACK_INVOKE_OFFSET))(this, ioares);
		}

		::System::IAsyncResult* BeginInvoke(::System::IOAsyncResult* ioares, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IOAsyncResult*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCCALLBACK_BEGININVOKE_OFFSET))(this, ioares, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
