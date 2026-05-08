#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleComplexSelector_PseudoStateData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UIElements { class StyleRule; }
namespace UnityEngine::UIElements { class StyleSelector; }

#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_CACHEPSEUDOSTATEMASKS_OFFSET UNITYSDK_OFFSET(0x197B8BF0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_SELECTORS_OFFSET UNITYSDK_OFFSET(0x197B8BE0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_SET_RULE_OFFSET UNITYSDK_OFFSET(0x197B8BD0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197B93A0)
#define UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x197B9550)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleComplexSelector_TypeDefinitionIndex = 25089;

	class StyleComplexSelector : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>** StaticGet_s_PseudoStates()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::UIElements::StyleComplexSelector_PseudoStateData>**)Il2CppClass::FromTypeDefinitionIndex(StyleComplexSelector_TypeDefinitionIndex)->GetStaticField(0x1E980);
		}
		::System::Int32 m_Specificity; // 0x10
		::UnityEngine::UIElements::StyleRule* _rule_k__BackingField; // 0x18
		::Il2CppArray<::UnityEngine::UIElements::StyleSelector*>* m_Selectors; // 0x20
		::System::Int32 ruleIndex; // 0x28
		::UnityEngine::UIElements::StyleComplexSelector* nextInTable; // 0x30
		::System::Int32 orderInStyleSheet; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Void set_rule(::UnityEngine::UIElements::StyleRule* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::StyleRule*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_SET_RULE_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::UIElements::StyleSelector*>* get_selectors()
		{
			return ((::Il2CppArray<::UnityEngine::UIElements::StyleSelector*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_GET_SELECTORS_OFFSET))(this);
		}

		::System::Void CachePseudoStateMasks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_CACHEPSEUDOSTATEMASKS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOMPLEXSELECTOR_TOSTRING_OFFSET))(this);
		}
	};
}
