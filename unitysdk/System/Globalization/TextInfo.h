#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Globalization { class CultureData; }

#define SYSTEM_GLOBALIZATION_TEXTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x186F4AC0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASEEX_OFFSET UNITYSDK_OFFSET(0x186F4980)
#define SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x186F4770)
#define SYSTEM_GLOBALIZATION_TEXTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x186F5C80)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x186F44C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x186F5DE0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_1_OFFSET UNITYSDK_OFFSET(0x186F4430)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x186F43A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x186F5CF0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETINVARIANTCASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x186F5DF0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x186F4AB0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_INVARIANT_OFFSET UNITYSDK_OFFSET(0x186D7240)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISASCIICASINGSAMEASINVARIANT_OFFSET UNITYSDK_OFFSET(0x186F4C10)
#define SYSTEM_GLOBALIZATION_TEXTINFO_INDEXOFSTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x186F4990)
#define SYSTEM_GLOBALIZATION_TEXTINFO_INTERNALCOMPARESTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x186F47B0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISASCII_OFFSET UNITYSDK_OFFSET(0x186F4C00)
#define SYSTEM_GLOBALIZATION_TEXTINFO_LASTINDEXOFSTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x186F4A30)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_1_OFFSET UNITYSDK_OFFSET(0x186F4350)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x186F4290)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x186F4280)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x186F4360)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SETREADONLYSTATE_OFFSET UNITYSDK_OFFSET(0x186F4BA0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x186F5DD0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x186F4CC0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x186F4CD0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET UNITYSDK_OFFSET(0x186F53A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_1_OFFSET UNITYSDK_OFFSET(0x186F52A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET UNITYSDK_OFFSET(0x186F4BB0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186F5D80)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x186F54C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x186F54D0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET UNITYSDK_OFFSET(0x186F5BB0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_1_OFFSET UNITYSDK_OFFSET(0x186F5AB0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET UNITYSDK_OFFSET(0x186F5470)
#define SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186F6000)
#define SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x186D72C0)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfo_TypeDefinitionIndex = 763;

	class TextInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::TextInfo** StaticGet_s_Invariant()
		{
			return (::System::Globalization::TextInfo**)Il2CppClass::FromTypeDefinitionIndex(TextInfo_TypeDefinitionIndex)->GetStaticField(0x7000);
		}
		::System::Globalization::CultureData* m_cultureData; // 0x10
		::System::String* m_cultureName; // 0x18
		::System::String* m_textInfoName; // 0x20
		::System::String* customCultureName; // 0x28
		::System::String* m_listSeparator; // 0x30
		::System::Int32 m_nDataItem; // 0x38
		::System::Int32 m_win32LangID; // 0x3C
		::System::Nullable_1<::System::Boolean> m_IsAsciiCasingSameAsInvariant; // 0x40
		::System::Boolean m_useUserOverride; // 0x42
		::System::Boolean m_isReadOnly; // 0x43

		::System::Void _ctor(::System::Globalization::CultureData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureData*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_1_OFFSET))(this);
		}

		static ::System::Globalization::TextInfo* get_Invariant()
		{
			return ((::System::Globalization::TextInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_INVARIANT_OFFSET))();
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZING_OFFSET))(this, a1);
		}

		::System::Void OnDeserialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET))(this);
		}

		::System::Void OnDeserialized_1(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_1_OFFSET))(this, a1);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONSERIALIZING_OFFSET))(this, a1);
		}

		static ::System::Int32 GetHashCodeOrdinalIgnoreCase(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_OFFSET))(a1);
		}

		static ::System::Int32 GetHashCodeOrdinalIgnoreCase_1(::System::String* a1, ::System::Boolean a2, ::System::Int64 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CompareOrdinalIgnoreCase(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASE_OFFSET))(a1, a2);
		}

		static ::System::Int32 CompareOrdinalIgnoreCaseEx(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASEEX_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 IndexOfStringOrdinalIgnoreCase(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_INDEXOFSTRINGORDINALIGNORECASE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 LastIndexOfStringOrdinalIgnoreCase(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_LASTINDEXOFSTRINGORDINALIGNORECASE_OFFSET))(a1, a2, a3, a4);
		}

		::System::String* get_CultureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_CULTURENAME_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_CLONE_OFFSET))(this);
		}

		::System::Void SetReadOnlyState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_SETREADONLYSTATE_OFFSET))(this, a1);
		}

		::System::Char ToLower(::System::Char a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET))(this, a1);
		}

		::System::String* ToLower_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_1_OFFSET))(this, a1);
		}

		static ::System::Char ToLowerAsciiInvariant(::System::Char a1)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERASCIIINVARIANT_OFFSET))(a1);
		}

		::System::Char ToUpper(::System::Char a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET))(this, a1);
		}

		::System::String* ToUpper_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_1_OFFSET))(this, a1);
		}

		static ::System::Char ToUpperAsciiInvariant(::System::Char a1)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET))(a1);
		}

		static ::System::Boolean IsAscii(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ISASCII_OFFSET))(a1);
		}

		::System::Boolean get_IsAsciiCasingSameAsInvariant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISASCIICASINGSAMEASINVARIANT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		::System::Int32 GetCaseInsensitiveHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_OFFSET))(this, a1);
		}

		::System::Int32 GetCaseInsensitiveHashCode_1(::System::String* a1, ::System::Boolean a2, ::System::Int64 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetInvariantCaseInsensitiveHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETINVARIANTCASEINSENSITIVEHASHCODE_OFFSET))(this, a1);
		}

		::System::String* ToUpperInternal(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET))(this, a1);
		}

		::System::String* ToLowerInternal(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET))(this, a1);
		}

		::System::Char ToUpperInternal_1(::System::Char a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_1_OFFSET))(this, a1);
		}

		::System::Char ToLowerInternal_1(::System::Char a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_1_OFFSET))(this, a1);
		}

		static ::System::Int32 InternalCompareStringOrdinalIgnoreCase(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_INTERNALCOMPARESTRINGORDINALIGNORECASE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
