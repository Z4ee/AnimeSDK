#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class LayoutRebuilder; }

#define UNITYENGINE_UI_LAYOUTREBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B3D560)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3D590)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_0_OFFSET UNITYSDK_OFFSET(0x18B3D620)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_1_OFFSET UNITYSDK_OFFSET(0x18B3D6F0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_2_OFFSET UNITYSDK_OFFSET(0x18B3D7C0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__REBUILD_B__13_3_OFFSET UNITYSDK_OFFSET(0x18B3D890)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C__STRIPDISABLEDBEHAVIOURSFROMLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0x18B3D5D0)
#define UNITYENGINE_UI_LAYOUTREBUILDER___C___CCTOR_B__6_0_OFFSET UNITYSDK_OFFSET(0x18B3D5A0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutRebuilder___c_TypeDefinitionIndex = 5652;

	class LayoutRebuilder___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x5C30);
		}
		static ::System::Predicate_1<::UnityEngine::Component*>** StaticGet___9__11_0()
		{
			return (::System::Predicate_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x5C38);
		}
		static ::UnityEngine::UI::LayoutRebuilder___c** StaticGet___9()
		{
			return (::UnityEngine::UI::LayoutRebuilder___c**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x5C40);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_1()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x5C48);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_2()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x5C50);
		}
		static ::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>** StaticGet___9__13_3()
		{
			return (::UnityEngine::Events::UnityAction_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(LayoutRebuilder___c_TypeDefinitionIndex)->GetStaticField(0x5C58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__6_0(::UnityEngine::UI::LayoutRebuilder* x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutRebuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C___CCTOR_B__6_0_OFFSET))(this, x);
		}

		::System::Boolean _StripDisabledBehavioursFromList_b__11_0(::UnityEngine::Component* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTREBUILDER___C__STRIPDISABLEDBEHAVIOURSFROMLIST_B__11_0_OFFSET))(this, e);
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
