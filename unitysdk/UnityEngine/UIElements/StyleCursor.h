#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/Cursor.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLECURSOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9336A0)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x9335B0)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9336B0)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x933560)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BBF03F0)
#define UNITYENGINE_UIELEMENTS_STYLECURSOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9336F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleCursor_TypeDefinitionIndex = 27583;

	struct alignas(8) StyleCursor
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x10
		::UnityEngine::UIElements::Cursor m_Value; // 0x18
		::System::Int32 m_Specificity; // 0x30

		::UnityEngine::UIElements::Cursor get_value()
		{
			return ((::UnityEngine::UIElements::Cursor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleKeyword get_keyword()
		{
			return ((::UnityEngine::UIElements::StyleKeyword(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_GET_KEYWORD_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleCursor lhs, ::UnityEngine::UIElements::StyleCursor rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleCursor, ::UnityEngine::UIElements::StyleCursor))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleCursor other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleCursor))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLECURSOR_TOSTRING_OFFSET))(this);
		}
	};
}
