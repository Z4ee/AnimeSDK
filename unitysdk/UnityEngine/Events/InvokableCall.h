#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/BaseInvokableCall.h"

namespace System { class Object; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine::Events { class UnityAction; }

#define UNITYENGINE_EVENTS_INVOKABLECALL_ADD_DELEGATE_OFFSET UNITYSDK_OFFSET(0x1AAD43D0)
#define UNITYENGINE_EVENTS_INVOKABLECALL_FIND_OFFSET UNITYSDK_OFFSET(0x1AAD46E0)
#define UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_1_OFFSET UNITYSDK_OFFSET(0x1AAD46A0)
#define UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AAD4660)
#define UNITYENGINE_EVENTS_INVOKABLECALL_REMOVE_DELEGATE_OFFSET UNITYSDK_OFFSET(0x1AAD4450)
#define UNITYENGINE_EVENTS_INVOKABLECALL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AAD45E0)
#define UNITYENGINE_EVENTS_INVOKABLECALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD44D0)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int InvokableCall_TypeDefinitionIndex = 5483;

	class InvokableCall : public ::UnityEngine::Events::BaseInvokableCall
	{
	public:
		::UnityEngine::Events::UnityAction* Delegate; // 0x10

		::System::Void _ctor(::System::Object* target, ::System::Reflection::MethodInfo* theFunction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL__CTOR_OFFSET))(this, target, theFunction);
		}

		::System::Void _ctor_1(::UnityEngine::Events::UnityAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL__CTOR_1_OFFSET))(this, action);
		}

		::System::Void add_Delegate(::UnityEngine::Events::UnityAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_ADD_DELEGATE_OFFSET))(this, value);
		}

		::System::Void remove_Delegate(::UnityEngine::Events::UnityAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_REMOVE_DELEGATE_OFFSET))(this, value);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_OFFSET))(this, args);
		}

		::System::Void Invoke_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_INVOKE_1_OFFSET))(this);
		}

		::System::Boolean Find(::System::Object* targetObj, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_INVOKABLECALL_FIND_OFFSET))(this, targetObj, method);
		}
	};
}
