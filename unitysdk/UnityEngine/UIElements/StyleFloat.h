#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x97F470)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x97F450)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97F4E0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x97F400)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D007CF0)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D007D10)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97F520)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x97F430)
#define UNITYENGINE_UIELEMENTS_STYLEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x97F410)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleFloat_TypeDefinitionIndex = 28187;

	struct alignas(4) StyleFloat
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x10
		::System::Single m_Value; // 0x14
		::System::Int32 m_Specificity; // 0x18

		::System::Void _ctor(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT__CTOR_OFFSET))(this, v);
		}

		::System::Void _ctor_1(::System::Single v, ::UnityEngine::UIElements::StyleKeyword keyword)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::UIElements::StyleKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT__CTOR_1_OFFSET))(this, v, keyword);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleKeyword get_keyword()
		{
			return ((::UnityEngine::UIElements::StyleKeyword(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_GET_KEYWORD_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleFloat lhs, ::UnityEngine::UIElements::StyleFloat rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleFloat, ::UnityEngine::UIElements::StyleFloat))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::UIElements::StyleFloat op_Implicit(::System::Single v)
		{
			return ((::UnityEngine::UIElements::StyleFloat(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_OP_IMPLICIT_OFFSET))(v);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleFloat other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleFloat))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFLOAT_EQUALS_1_OFFSET))(this, obj);
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
