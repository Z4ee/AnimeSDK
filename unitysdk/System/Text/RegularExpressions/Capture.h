#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETLEFTSUBSTRING_OFFSET UNITYSDK_OFFSET(0x1A1788C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1A1788B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETRIGHTSUBSTRING_OFFSET UNITYSDK_OFFSET(0x1A1788F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A178830)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A178840)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A178850)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A178880)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A178920)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A178820)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Capture_TypeDefinitionIndex = 2492;

	class Capture : public ::System::Object
	{
	public:
		::System::String* _text; // 0x10
		::System::Int32 _index; // 0x18
		::System::Int32 _length; // 0x1C

		::System::Void _ctor(::System::String* text, ::System::Int32 i, ::System::Int32 l)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE__CTOR_OFFSET))(this, text, i, l);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE__CTOR_1_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_INDEX_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_LENGTH_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_VALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_TOSTRING_OFFSET))(this);
		}

		::System::String* GetOriginalString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETORIGINALSTRING_OFFSET))(this);
		}

		::System::String* GetLeftSubstring()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETLEFTSUBSTRING_OFFSET))(this);
		}

		::System::String* GetRightSubstring()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETRIGHTSUBSTRING_OFFSET))(this);
		}
	};
}
