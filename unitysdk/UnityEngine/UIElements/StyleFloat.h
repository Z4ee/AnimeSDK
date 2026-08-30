#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BD2CE0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BD2CC0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BD2D50)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x5F00)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3BD2C70)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EDF7AB0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EDF7AD0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BD2D90)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BD2CA0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x3BD2C80)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleFloat_TypeDefinitionIndex = 5993;

	struct alignas(4) StyleFloat
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x10
		::System::Single m_Value; // 0x14
		::System::Int32 m_Specificity; // 0x18

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Single a1, ::UnityEngine::UIElements::StyleKeyword a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::UIElements::StyleKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleKeyword get_keyword()
		{
			return ((::UnityEngine::UIElements::StyleKeyword(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_KEYWORD_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleFloat a1, ::UnityEngine::UIElements::StyleFloat a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleFloat, ::UnityEngine::UIElements::StyleFloat))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::UIElements::StyleFloat op_Implicit(::System::Single a1)
		{
			return ((::UnityEngine::UIElements::StyleFloat(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleFloat a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleFloat))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_TOSTRING_OFFSET))(this);
		}
	};
}
