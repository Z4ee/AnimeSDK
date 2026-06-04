#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1875B6B0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1875B6E0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1875B6A0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1875B5B0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoProperty_GetterAdapter_TypeDefinitionIndex = 630;

	class MonoProperty_GetterAdapter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
