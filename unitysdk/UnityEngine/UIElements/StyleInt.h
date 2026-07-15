#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A435F0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A435D0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A43650)
#define UNITYENGINE_UIELEMENTS_STYLEINT_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x167710)
#define UNITYENGINE_UIELEMENTS_STYLEINT_GET_SPECIFICITY_OFFSET UNITYSDK_OFFSET(0x676EB0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x38CBDF0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA42CB0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BA42CD0)
#define UNITYENGINE_UIELEMENTS_STYLEINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A43670)
#define UNITYENGINE_UIELEMENTS_STYLEINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x38CBE00)
#define UNITYENGINE_UIELEMENTS_STYLEINT__CTOR_OFFSET UNITYSDK_OFFSET(0x3A435B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleInt_TypeDefinitionIndex = 6262;

	struct alignas(4) StyleInt
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x10
		::System::Int32 m_Value; // 0x14
		::System::Int32 m_Specificity; // 0x18

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::UnityEngine::UIElements::StyleKeyword a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UIElements::StyleKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT__CTOR_1_OFFSET))(this, a1, a2);
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

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleInt a1, ::UnityEngine::UIElements::StyleInt a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleInt, ::UnityEngine::UIElements::StyleInt))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::UIElements::StyleInt op_Implicit(::System::Int32 a1)
		{
			return ((::UnityEngine::UIElements::StyleInt(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleInt a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleInt))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEINT_EQUALS_1_OFFSET))(this, a1);
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
