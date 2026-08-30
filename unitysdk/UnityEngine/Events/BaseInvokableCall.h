#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }

#define UNITYENGINE_EVENTS_BASEINVOKABLECALL_ALLOWINVOKE_OFFSET UNITYSDK_OFFSET(0x1ED201D0)
#define UNITYENGINE_EVENTS_BASEINVOKABLECALL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED20130)
#define UNITYENGINE_EVENTS_BASEINVOKABLECALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED20120)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int BaseInvokableCall_TypeDefinitionIndex = 4475;

	class BaseInvokableCall : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL__CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean AllowInvoke(::System::Delegate* a1)
		{
			return ((::System::Boolean(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_BASEINVOKABLECALL_ALLOWINVOKE_OFFSET))(a1);
		}
	};
}
