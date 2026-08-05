#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEventBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { class BaseInvokableCall; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_EVENTS_UNITYEVENT_ADDLISTENER_OFFSET UNITYSDK_OFFSET(0x1EE1E350)
#define UNITYENGINE_EVENTS_UNITYEVENT_FINDMETHOD_IMPL_OFFSET UNITYSDK_OFFSET(0x1EE1E520)
#define UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x1EE1E420)
#define UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_OFFSET UNITYSDK_OFFSET(0x1EE1E570)
#define UNITYENGINE_EVENTS_UNITYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EE1E5D0)
#define UNITYENGINE_EVENTS_UNITYEVENT_REMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1EE1E4D0)
#define UNITYENGINE_EVENTS_UNITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE1E340)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int UnityEvent_TypeDefinitionIndex = 5499;

	class UnityEvent : public ::UnityEngine::Events::UnityEventBase
	{
	public:
		::Il2CppArray<::System::Object*>* m_InvokeArray; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT__CTOR_OFFSET))(this);
		}

		::System::Void AddListener(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_ADDLISTENER_OFFSET))(this, call);
		}

		::System::Void RemoveListener(::UnityEngine::Events::UnityAction* call)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_REMOVELISTENER_OFFSET))(this, call);
		}

		::System::Reflection::MethodInfo* FindMethod_Impl(::System::String* name, ::System::Object* targetObj)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_FINDMETHOD_IMPL_OFFSET))(this, name, targetObj);
		}

		::UnityEngine::Events::BaseInvokableCall* GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction)
		{
			return ((::UnityEngine::Events::BaseInvokableCall*(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_OFFSET))(this, target, theFunction);
		}

		static ::UnityEngine::Events::BaseInvokableCall* GetDelegate_1(::UnityEngine::Events::UnityAction* action)
		{
			return ((::UnityEngine::Events::BaseInvokableCall*(*)(::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_GETDELEGATE_1_OFFSET))(action);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_UNITYEVENT_INVOKE_OFFSET))(this);
		}
	};
}
