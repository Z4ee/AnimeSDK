#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleKeyword.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Font; }

#define UNITYENGINE_UIELEMENTS_STYLEFONT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BD2E80)
#define UNITYENGINE_UIELEMENTS_STYLEFONT_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BD2E20)
#define UNITYENGINE_UIELEMENTS_STYLEFONT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BD2F10)
#define UNITYENGINE_UIELEMENTS_STYLEFONT_GET_KEYWORD_OFFSET UNITYSDK_OFFSET(0x5F00)
#define UNITYENGINE_UIELEMENTS_STYLEFONT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3BD2E10)
#define UNITYENGINE_UIELEMENTS_STYLEFONT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EDF7C20)
#define UNITYENGINE_UIELEMENTS_STYLEFONT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BD2F20)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int StyleFont_TypeDefinitionIndex = 5994;

	struct alignas(8) StyleFont
	{
		::UnityEngine::UIElements::StyleKeyword m_Keyword; // 0x10
		::UnityEngine::Font* m_Value; // 0x18
		::System::Int32 m_Specificity; // 0x20

		::UnityEngine::Font* get_value()
		{
			return ((::UnityEngine::Font*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFONT_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::StyleKeyword get_keyword()
		{
			return ((::UnityEngine::UIElements::StyleKeyword(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFONT_GET_KEYWORD_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleFont a1, ::UnityEngine::UIElements::StyleFont a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleFont, ::UnityEngine::UIElements::StyleFont))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFONT_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleFont a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleFont))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFONT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFONT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFONT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLEFONT_TOSTRING_OFFSET))(this);
		}
	};
}
