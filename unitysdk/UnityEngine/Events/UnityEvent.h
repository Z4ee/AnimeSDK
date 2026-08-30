#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEventBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { class BaseInvokableCall; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_EVENTS_UNITYEVENT_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1DED8F40)
#define UNITYENGINE_EVENTS_UNITYEVENT_FINDMETHOD_IMPL_OFFSET UNITYSDK_OFFSET(0x1DED9200)
#define UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x1DED9030)
#define UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1DED9640)
#define UNITYENGINE_EVENTS_UNITYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DED9680)
#define UNITYENGINE_EVENTS_UNITYEVENT_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1DED9130)
#define UNITYENGINE_EVENTS_UNITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DED8E60)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEvent_TypeDefinitionIndex = 4488;

	class UnityEvent : public ::UnityEngine::Events::UnityEventBase
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT__CTOR_OFFSET))(this);
		}

		::System::Void AddListener(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_ADDLISTENER_OFFSET))(this, a1);
		}

		::System::Void RemoveListener(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_REMOVELISTENER_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* FindMethod_Impl(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_FINDMETHOD_IMPL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::UnityEngine::Events::BaseInvokableCall*(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Events::BaseInvokableCall* GetDelegate_1(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::UnityEngine::Events::BaseInvokableCall*(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_1_OFFSET))(a1);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_INVOKE_OFFSET))(this);
		}
	};
}
