#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Globalization { class TextElementEnumerator; }

#define SYSTEM_GLOBALIZATION_STRINGINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D0566F0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETCURRENTTEXTELEMENTLEN_OFFSET UNITYSDK_OFFSET(0x1D056E90)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D0567B0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETNEXTTEXTELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1D056D50)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETNEXTTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x1D056D40)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETTEXTELEMENTENUMERATOR_1_OFFSET UNITYSDK_OFFSET(0x1D057070)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETTEXTELEMENTENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D057060)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GET_INDEXES_OFFSET UNITYSDK_OFFSET(0x1D056840)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GET_LENGTHINTEXTELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D056A00)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GET_STRING_OFFSET UNITYSDK_OFFSET(0x1D0569F0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1D0566C0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1D0566B0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_PARSECOMBININGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1D056890)
#define SYSTEM_GLOBALIZATION_STRINGINFO_SET_STRING_OFFSET UNITYSDK_OFFSET(0x1D056630)
#define SYSTEM_GLOBALIZATION_STRINGINFO_SUBSTRINGBYTEXTELEMENTS_1_OFFSET UNITYSDK_OFFSET(0x1D056B40)
#define SYSTEM_GLOBALIZATION_STRINGINFO_SUBSTRINGBYTEXTELEMENTS_OFFSET UNITYSDK_OFFSET(0x1D056A50)
#define SYSTEM_GLOBALIZATION_STRINGINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D0565B0)
#define SYSTEM_GLOBALIZATION_STRINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D056500)

namespace System::Globalization
{
	inline static constexpr unsigned int StringInfo_TypeDefinitionIndex = 745;

	class StringInfo : public ::System::Object
	{
	public:
		::System::String* m_str; // 0x10
		::Il2CppArray<::System::Int32>* m_indexes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO__CTOR_1_OFFSET))(this, value);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_ONDESERIALIZED_OFFSET))(this, ctx);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_EQUALS_OFFSET))(this, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GETHASHCODE_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Indexes()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GET_INDEXES_OFFSET))(this);
		}

		::System::String* get_String()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GET_STRING_OFFSET))(this);
		}

		::System::Void set_String(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_SET_STRING_OFFSET))(this, value);
		}

		::System::Int32 get_LengthInTextElements()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GET_LENGTHINTEXTELEMENTS_OFFSET))(this);
		}

		::System::String* SubstringByTextElements(::System::Int32 startingTextElement)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_SUBSTRINGBYTEXTELEMENTS_OFFSET))(this, startingTextElement);
		}

		::System::String* SubstringByTextElements_1(::System::Int32 startingTextElement, ::System::Int32 lengthInTextElements)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_SUBSTRINGBYTEXTELEMENTS_1_OFFSET))(this, startingTextElement, lengthInTextElements);
		}

		static ::System::String* GetNextTextElement(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GETNEXTTEXTELEMENT_OFFSET))(str);
		}

		static ::System::Int32 GetCurrentTextElementLen(::System::String* str, ::System::Int32 index, ::System::Int32 len, ::System::Globalization::UnicodeCategory& ucCurrent, ::System::Int32& currentCharCount)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Globalization::UnicodeCategory&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GETCURRENTTEXTELEMENTLEN_OFFSET))(str, index, len, ucCurrent, currentCharCount);
		}

		static ::System::String* GetNextTextElement_1(::System::String* str, ::System::Int32 index)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GETNEXTTEXTELEMENT_1_OFFSET))(str, index);
		}

		static ::System::Globalization::TextElementEnumerator* GetTextElementEnumerator(::System::String* str)
		{
			return ((::System::Globalization::TextElementEnumerator*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GETTEXTELEMENTENUMERATOR_OFFSET))(str);
		}

		static ::System::Globalization::TextElementEnumerator* GetTextElementEnumerator_1(::System::String* str, ::System::Int32 index)
		{
			return ((::System::Globalization::TextElementEnumerator*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_GETTEXTELEMENTENUMERATOR_1_OFFSET))(str, index);
		}

		static ::Il2CppArray<::System::Int32>* ParseCombiningCharacters(::System::String* str)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_STRINGINFO_PARSECOMBININGCHARACTERS_OFFSET))(str);
		}
	};
}
