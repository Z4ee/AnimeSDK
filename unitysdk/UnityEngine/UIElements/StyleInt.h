#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2129210)
#define UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x21291F0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2129270)
#define UNITYENGINE_UIELEMENTS_STYLEINT_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_GET_SPECIFICITY_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_UIELEMENTS_STYLEINT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15B0ED0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18ADCEF0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18ADCF10)
#define UNITYENGINE_UIELEMENTS_STYLEINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2129290)
#define UNITYENGINE_UIELEMENTS_STYLEINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B0EE0)
#define UNITYENGINE_UIELEMENTS_STYLEINT__CTOR_OFFSET UNITYSDK_OFFSET(0x21291D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleInt_TypeDefinitionIndex = 5968;

	struct alignas(4) StyleInt
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x10
		::System::Int32 m_Value; // 0x14
		::System::Int32 m_Specificity; // 0x18

		::System::Void _ctor(::System::Int32 v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT__CTOR_OFFSET))(this, v);
		}

		::System::Void _ctor_1(::System::Int32 v, ::UnityEngine::UIElements::StyleKeyword keyword)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UIElements::StyleKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT__CTOR_1_OFFSET))(this, v, keyword);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_specificity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_GET_SPECIFICITY_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleKeyword get_keyword()
		{
			return ((::UnityEngine::UIElements::StyleKeyword(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_GET_KEYWORD_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleInt lhs, ::UnityEngine::UIElements::StyleInt rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleInt, ::UnityEngine::UIElements::StyleInt))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::UIElements::StyleInt op_Implicit(::System::Int32 v)
		{
			return ((::UnityEngine::UIElements::StyleInt(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_OP_IMPLICIT_OFFSET))(v);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleInt other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleInt))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_TOSTRING_OFFSET))(this);
		}
	};
}
