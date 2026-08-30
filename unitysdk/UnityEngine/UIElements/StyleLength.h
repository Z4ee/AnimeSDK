#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/Length.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BD5EC0)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BD5E90)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BD5F30)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x19050)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3BD5E70)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D61BE20)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BD5F70)
#define UNITYENGINE_UIELEMENTS_STYLELENGTH__CTOR_OFFSET UNITYSDK_OFFSET(0x3BD5E80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleLength_TypeDefinitionIndex = 5996;

	struct alignas(4) StyleLength
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x10
		::UnityEngine::UIElements::Length m_Value; // 0x14
		::System::Int32 m_Specificity; // 0x1C

		::System::Void _ctor(::UnityEngine::UIElements::Length a1, ::UnityEngine::UIElements::StyleKeyword a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::StyleKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::UIElements::Length get_value()
		{
			return ((::UnityEngine::UIElements::Length(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleKeyword get_keyword()
		{
			return ((::UnityEngine::UIElements::StyleKeyword(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_GET_KEYWORD_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleLength a1, ::UnityEngine::UIElements::StyleLength a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleLength, ::UnityEngine::UIElements::StyleLength))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleLength a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleLength))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLELENGTH_TOSTRING_OFFSET))(this);
		}
	};
}
