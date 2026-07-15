#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A438F0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_EQUALS_OFFSET UNITYSDK_OFFSET(0x6766B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A42E60)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x3A43860)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3A43890)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x3A43840)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA4AF80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElement_Hierarchy_TypeDefinitionIndex = 6162;

	struct alignas(8) VisualElement_Hierarchy
	{
		::UnityEngine::UIElements::VisualElement* m_Owner; // 0x10

		::UnityEngine::UIElements::VisualElement* get_parent()
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_GET_PARENT_OFFSET))(this);
		}

		::System::Int32 get_childCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_GET_CHILDCOUNT_OFFSET))(this);
		}

		::UnityEngine::UIElements::VisualElement* get_Item(::System::Int32 a1)
		{
			return ((::UnityEngine::UIElements::VisualElement*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::VisualElement_Hierarchy a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::VisualElement_Hierarchy))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::VisualElement_Hierarchy a1, ::UnityEngine::UIElements::VisualElement_Hierarchy a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::VisualElement_Hierarchy, ::UnityEngine::UIElements::VisualElement_Hierarchy))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENT_HIERARCHY_OP_EQUALITY_OFFSET))(a1, a2);
		}
	};
}
