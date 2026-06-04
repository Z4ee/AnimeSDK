#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x389A2F0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x389A2A0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x389A390)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x389A210)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B3636A0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B3636F0)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x389A430)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x389A270)
#define UNITYENGINE_UIELEMENTS_STYLECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x389A240)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleColor_TypeDefinitionIndex = 6253;

	struct alignas(4) StyleColor
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x10
		::UnityEngine::Color m_Value; // 0x14
		::System::Int32 m_Specificity; // 0x24

		::System::Void _ctor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::Color a1, ::UnityEngine::UIElements::StyleKeyword a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::UIElements::StyleKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR__CTOR_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color get_value()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleKeyword get_keyword()
		{
			return ((::UnityEngine::UIElements::StyleKeyword(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_GET_KEYWORD_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleColor a1, ::UnityEngine::UIElements::StyleColor a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleColor, ::UnityEngine::UIElements::StyleColor))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::UIElements::StyleColor op_Implicit(::UnityEngine::Color a1)
		{
			return ((::UnityEngine::UIElements::StyleColor(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleColor a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleColor))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECOLOR_TOSTRING_OFFSET))(this);
		}
	};
}
