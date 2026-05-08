#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Globalization { class TextElementEnumerator; }

#define SYSTEM_GLOBALIZATION_STRINGINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AC48D80)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETCURRENTTEXTELEMENTLEN_OFFSET UNITYSDK_OFFSET(0x1AC49520)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AC48E40)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETNEXTTEXTELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1AC493E0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETNEXTTEXTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AC493D0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETTEXTELEMENTENUMERATOR_1_OFFSET UNITYSDK_OFFSET(0x1AC49700)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GETTEXTELEMENTENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AC496F0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GET_INDEXES_OFFSET UNITYSDK_OFFSET(0x1AC48ED0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GET_LENGTHINTEXTELEMENTS_OFFSET UNITYSDK_OFFSET(0x1AC49090)
#define SYSTEM_GLOBALIZATION_STRINGINFO_GET_STRING_OFFSET UNITYSDK_OFFSET(0x1AC49080)
#define SYSTEM_GLOBALIZATION_STRINGINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1AC48D50)
#define SYSTEM_GLOBALIZATION_STRINGINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1AC48D40)
#define SYSTEM_GLOBALIZATION_STRINGINFO_PARSECOMBININGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1AC48F20)
#define SYSTEM_GLOBALIZATION_STRINGINFO_SET_STRING_OFFSET UNITYSDK_OFFSET(0x1AC48CC0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_SUBSTRINGBYTEXTELEMENTS_1_OFFSET UNITYSDK_OFFSET(0x1AC491D0)
#define SYSTEM_GLOBALIZATION_STRINGINFO_SUBSTRINGBYTEXTELEMENTS_OFFSET UNITYSDK_OFFSET(0x1AC490E0)
#define SYSTEM_GLOBALIZATION_STRINGINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AC48C40)
#define SYSTEM_GLOBALIZATION_STRINGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC48B90)

namespace System::Globalization
{
	inline static constexpr unsigned int StringInfo_TypeDefinitionIndex = 745;

	class StringInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_indexes; // 0x10
		::System::String* m_str; // 0x18

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
