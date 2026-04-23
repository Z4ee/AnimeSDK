#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }

#define UNITYENGINE_EVENTS_BASEINVOKABLECALL_ALLOWINVOKE_OFFSET UNITYSDK_OFFSET(0x1A440BD0)
#define UNITYENGINE_EVENTS_BASEINVOKABLECALL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A440B30)
#define UNITYENGINE_EVENTS_BASEINVOKABLECALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A440B20)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int BaseInvokableCall_TypeDefinitionIndex = 4286;

	class BaseInvokableCall : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* target, ::System::Reflection::MethodInfo* function)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL__CTOR_1_OFFSET))(this, target, function);
		}

		static ::System::Boolean AllowInvoke(::System::Delegate* delegate)
		{
			return ((::System::Boolean(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL_ALLOWINVOKE_OFFSET))(delegate);
		}
	};
}
