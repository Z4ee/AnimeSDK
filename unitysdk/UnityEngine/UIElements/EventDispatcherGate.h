#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::UIElements { class EventDispatcher; }

#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3BD5530)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BD55F0)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x38F1E10)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BD5600)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x3BD54C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatcherGate_TypeDefinitionIndex = 5863;

	struct alignas(8) EventDispatcherGate
	{
		::UnityEngine::UIElements::EventDispatcher* m_Dispatcher; // 0x10

		::System::Void _ctor(::UnityEngine::UIElements::EventDispatcher* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventDispatcher*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::EventDispatcherGate a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventDispatcherGate))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
