#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class ResolveEventArgs; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RESOLVEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D063270)
#define SYSTEM_RESOLVEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D0632B0)
#define SYSTEM_RESOLVEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D062CE0)
#define SYSTEM_RESOLVEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D062CC0)

namespace System
{
	inline static constexpr unsigned int ResolveEventHandler_TypeDefinitionIndex = 405;

	class ResolveEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Reflection::Assembly* Invoke(::System::Object* sender, ::System::ResolveEventArgs* args)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Object*, ::System::ResolveEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTHANDLER_INVOKE_OFFSET))(this, sender, args);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ResolveEventArgs* args, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ResolveEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, args, callback, object);
		}

		::System::Reflection::Assembly* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_RESOLVEEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
