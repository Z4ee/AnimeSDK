#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETLEFTSUBSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EEF20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EEF10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GETRIGHTSUBSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EEF50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1E9EEE90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E9EEEA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E9EEEB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9EEEE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9EEF80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EEE80)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Capture_TypeDefinitionIndex = 2503;

	class Capture : public ::System::Object
	{
	public:
		::System::String* _text; // 0x10
		::System::Int32 _index; // 0x18
		::System::Int32 _length; // 0x1C

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CAPTURE__CTOR_OFFSET))(this, a1, a2, a3);
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
