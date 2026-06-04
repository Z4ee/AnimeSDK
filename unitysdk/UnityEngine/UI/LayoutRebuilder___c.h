#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class LayoutRebuilder; }

#define UNITYENGINE_UI_LAYOUTREBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3C5420)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C5450)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_0_OFFSET UNITYSDK_OFFSET(0x1B3C54E0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_1_OFFSET UNITYSDK_OFFSET(0x1B3C55D0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_2_OFFSET UNITYSDK_OFFSET(0x1B3C56C0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_3_OFFSET UNITYSDK_OFFSET(0x1B3C57B0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__STRIPDISABLEDBEHAVIOURSFROMLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0x1B3C5490)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B3C5460)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutRebuilder___c_TypeDefinitionIndex = 5941;

	class LayoutRebuilder___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_1()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x46D90);
		}
		static ::UnityEngine::UI::LayoutRebuilder___c** StaticGet___9()
		{
			return (::UnityEngine::UI::LayoutRebuilder___c**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x46D98);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_2()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x46DA0);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_3()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x46DA8);
		}
		static ::System::Predicate_1<::UnityEngine::Component*>** StaticGet___9__11_0()
		{
			return (::System::Predicate_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x46DB0);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x46DB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__6_0(::UnityEngine::UI::LayoutRebuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutRebuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C___CCTOR_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _StripDisabledBehavioursFromList_b__11_0(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__STRIPDISABLEDBEHAVIOURSFROMLIST_B__11_0_OFFSET))(this, a1);
		}

		::System::Void _Rebuild_b__13_0(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_0_OFFSET))(this, a1);
		}

		::System::Void _Rebuild_b__13_1(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_1_OFFSET))(this, a1);
		}

		::System::Void _Rebuild_b__13_2(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_2_OFFSET))(this, a1);
		}

		::System::Void _Rebuild_b__13_3(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_3_OFFSET))(this, a1);
		}
	};
}
