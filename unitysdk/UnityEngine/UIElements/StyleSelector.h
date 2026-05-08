#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleSelectorPart.h"
#include "unitysdk/UnityEngine/UIElements/StyleSelectorRelationship.h"

namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_GET_PARTS_OFFSET UNITYSDK_OFFSET(0x197B9370)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197B95D0)
#define UNITYENGINE_UIELEMENTS_STYLESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x197BA2F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleSelector_TypeDefinitionIndex = 25094;

	class StyleSelector : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIElements::StyleSelectorPart>* m_Parts; // 0x10
		::UnityEngine::UIElements::StyleSelectorRelationship m_PreviousRelationship; // 0x18
		::System::Int32 pseudoStateMask; // 0x1C
		::System::Int32 negatedPseudoStateMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::UIElements::StyleSelectorPart>* get_parts()
		{
			return ((::Il2CppArray<::UnityEngine::UIElements::StyleSelectorPart>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_GET_PARTS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESELECTOR_TOSTRING_OFFSET))(this);
		}
	};
}
