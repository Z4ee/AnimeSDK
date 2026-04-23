#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x179A9F60)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x179A9F90)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x179A9A00)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x179A99E0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoProperty_GetterAdapter_TypeDefinitionIndex = 631;

	class MonoProperty_GetterAdapter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::Object* _this)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_INVOKE_OFFSET))(this, _this);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* _this, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_BEGININVOKE_OFFSET))(this, _this, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETTERADAPTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
