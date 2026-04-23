#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class ResolveEventArgs; }
namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x179A4F20)
#define SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x179A4F60)
#define SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x179A4960)
#define SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179A4940)

namespace System::Reflection
{
	inline static constexpr unsigned int ModuleResolveEventHandler_TypeDefinitionIndex = 609;

	class ModuleResolveEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Reflection::Module* Invoke(::System::Object* sender, ::System::ResolveEventArgs* e)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::Object*, ::System::ResolveEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::System::ResolveEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::ResolveEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Reflection::Module* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULERESOLVEEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
