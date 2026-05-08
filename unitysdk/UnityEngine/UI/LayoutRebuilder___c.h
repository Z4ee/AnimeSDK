#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class LayoutRebuilder; }

#define UNITYENGINE_UI_LAYOUTREBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBCCD60)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCCDA0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_0_OFFSET UNITYSDK_OFFSET(0x1BBCCE80)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_1_OFFSET UNITYSDK_OFFSET(0x1BBCCF60)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_2_OFFSET UNITYSDK_OFFSET(0x1BBCD040)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_3_OFFSET UNITYSDK_OFFSET(0x1BBCD130)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__STRIPDISABLEDBEHAVIOURSFROMLIST_B__10_0_OFFSET UNITYSDK_OFFSET(0x1BBCCE10)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C___CCTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1BBCCDB0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutRebuilder___c_TypeDefinitionIndex = 8410;

	class LayoutRebuilder___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x7640);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_1()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x7648);
		}
		static ::System::Predicate_1<::UnityEngine::Component*>** StaticGet___9__10_0()
		{
			return (::System::Predicate_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x7650);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_3()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x7658);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_2()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x7660);
		}
		static ::UnityEngine::UI::LayoutRebuilder___c** StaticGet___9()
		{
			return (::UnityEngine::UI::LayoutRebuilder___c**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x7668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__5_0(::UnityEngine::UI::LayoutRebuilder* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutRebuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C___CCTOR_B__5_0_OFFSET))(this, x);
		}

		::System::Boolean _StripDisabledBehavioursFromList_b__10_0(::UnityEngine::Component* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__STRIPDISABLEDBEHAVIOURSFROMLIST_B__10_0_OFFSET))(this, e);
		}

		::System::Void _Rebuild_b__13_0(::UnityEngine::Component* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_0_OFFSET))(this, e);
		}

		::System::Void _Rebuild_b__13_1(::UnityEngine::Component* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_1_OFFSET))(this, e);
		}

		::System::Void _Rebuild_b__13_2(::UnityEngine::Component* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_2_OFFSET))(this, e);
		}

		::System::Void _Rebuild_b__13_3(::UnityEngine::Component* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_3_OFFSET))(this, e);
		}
	};
}
