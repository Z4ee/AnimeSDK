#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class IEventSystemHandler; }

#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B378E30)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B378E60)
#define UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS___C___CCTOR_B__87_0_OFFSET UNITYSDK_OFFSET(0x1B378E70)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int ExecuteEvents___c_TypeDefinitionIndex = 6093;

	class ExecuteEvents___c : public ::System::Object
	{
	public:
		static ::UnityEngine::EventSystems::ExecuteEvents___c** StaticGet___9()
		{
			return (::UnityEngine::EventSystems::ExecuteEvents___c**)Il2CppClass::FromTypeDefinitionIndex(ExecuteEvents___c_TypeDefinitionIndex)->GetStaticField(0x44B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__87_0(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::IEventSystemHandler*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::IEventSystemHandler*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_EXECUTEEVENTS___C___CCTOR_B__87_0_OFFSET))(this, a1);
		}
	};
}
