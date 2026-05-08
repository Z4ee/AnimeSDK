#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Globalization { class CultureData; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_GLOBALIZATION_TEXTINFO_ADDNONLETTER_OFFSET UNITYSDK_OFFSET(0x195FE1A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ADDTITLECASELETTER_OFFSET UNITYSDK_OFFSET(0x195FDE20)
#define SYSTEM_GLOBALIZATION_TEXTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x195FC1F0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASEEX_OFFSET UNITYSDK_OFFSET(0x195FBE40)
#define SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x195FBC70)
#define SYSTEM_GLOBALIZATION_TEXTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x195FD870)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x195FBAE0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x195FE460)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_1_OFFSET UNITYSDK_OFFSET(0x195FBA20)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x195ED450)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195FD930)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETINVARIANTCASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x195FE470)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ANSICODEPAGE_OFFSET UNITYSDK_OFFSET(0x195FC130)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x195FC1D0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_EBCDICCODEPAGE_OFFSET UNITYSDK_OFFSET(0x195FC190)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_INVARIANT_OFFSET UNITYSDK_OFFSET(0x195FB830)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISASCIICASINGSAMEASINVARIANT_OFFSET UNITYSDK_OFFSET(0x195FC620)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x195FC1E0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISRIGHTTOLEFT_OFFSET UNITYSDK_OFFSET(0x195FE430)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_LCID_OFFSET UNITYSDK_OFFSET(0x195FC1B0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_LISTSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195FC4B0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_MACCODEPAGE_OFFSET UNITYSDK_OFFSET(0x195FC170)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_OEMCODEPAGE_OFFSET UNITYSDK_OFFSET(0x195FC150)
#define SYSTEM_GLOBALIZATION_TEXTINFO_INDEXOFSTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x195FBE50)
#define SYSTEM_GLOBALIZATION_TEXTINFO_INTERNALCOMPARESTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x195FBD40)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISASCII_OFFSET UNITYSDK_OFFSET(0x195FC610)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISLETTERCATEGORY_OFFSET UNITYSDK_OFFSET(0x195FE180)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISWORDSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195FE190)
#define SYSTEM_GLOBALIZATION_TEXTINFO_LASTINDEXOFSTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x195FBFD0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_1_OFFSET UNITYSDK_OFFSET(0x195FB9E0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x195FB920)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x195FB900)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x195FB9F0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_READONLY_OFFSET UNITYSDK_OFFSET(0x195FC2F0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SETREADONLYSTATE_OFFSET UNITYSDK_OFFSET(0x195FC4A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SET_LISTSEPARATOR_OFFSET UNITYSDK_OFFSET(0x195FC4F0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x195FE450)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x195FC750)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x195FC760)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET UNITYSDK_OFFSET(0x195FCEE0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_1_OFFSET UNITYSDK_OFFSET(0x195FCDB0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET UNITYSDK_OFFSET(0x195FC5C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195FD9C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOTITLECASE_OFFSET UNITYSDK_OFFSET(0x195FDA10)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x195FD000)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x195FD010)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET UNITYSDK_OFFSET(0x195FD7A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_1_OFFSET UNITYSDK_OFFSET(0x195FD670)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET UNITYSDK_OFFSET(0x195FCFB0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_VERIFYWRITABLE_OFFSET UNITYSDK_OFFSET(0x195FC430)
#define SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195FE540)
#define SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x195FB8D0)

namespace System::Globalization
{
	inline static constexpr unsigned int TextInfo_TypeDefinitionIndex = 749;

	class TextInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::TextInfo** StaticGet_s_Invariant()
		{
			return (::System::Globalization::TextInfo**)Il2CppClass::FromTypeDefinitionIndex(TextInfo_TypeDefinitionIndex)->GetStaticField(0xF20);
		}
		// static const ::System::Int32 wordSeparatorMask = 0x1FFCF800; // 0x0
		::System::String* m_textInfoName; // 0x10
		::System::String* m_listSeparator; // 0x18
		::System::String* m_cultureName; // 0x20
		::System::String* customCultureName; // 0x28
		::System::Globalization::CultureData* m_cultureData; // 0x30
		::System::Boolean m_isReadOnly; // 0x38
		::System::Boolean m_useUserOverride; // 0x39
		::System::Nullable_1<::System::Boolean> m_IsAsciiCasingSameAsInvariant; // 0x3A
		::System::Int32 m_win32LangID; // 0x3C
		::System::Int32 m_nDataItem; // 0x40

		::System::Void _ctor(::System::Globalization::CultureData* cultureData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureData*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_OFFSET))(this, cultureData);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_1_OFFSET))(this);
		}

		static ::System::Globalization::TextInfo* get_Invariant()
		{
			return ((::System::Globalization::TextInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_INVARIANT_OFFSET))();
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZING_OFFSET))(this, ctx);
		}

		::System::Void OnDeserialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET))(this);
		}

		::System::Void OnDeserialized_1(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_1_OFFSET))(this, ctx);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ONSERIALIZING_OFFSET))(this, ctx);
		}

		static ::System::Int32 GetHashCodeOrdinalIgnoreCase(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_OFFSET))(s);
		}

		static ::System::Int32 GetHashCodeOrdinalIgnoreCase_1(::System::String* s, ::System::Boolean forceRandomizedHashing, ::System::Int64 additionalEntropy)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_1_OFFSET))(s, forceRandomizedHashing, additionalEntropy);
		}

		static ::System::Int32 CompareOrdinalIgnoreCase(::System::String* str1, ::System::String* str2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASE_OFFSET))(str1, str2);
		}

		static ::System::Int32 CompareOrdinalIgnoreCaseEx(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 lengthA, ::System::Int32 lengthB)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASEEX_OFFSET))(strA, indexA, strB, indexB, lengthA, lengthB);
		}

		static ::System::Int32 IndexOfStringOrdinalIgnoreCase(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_INDEXOFSTRINGORDINALIGNORECASE_OFFSET))(source, value, startIndex, count);
		}

		static ::System::Int32 LastIndexOfStringOrdinalIgnoreCase(::System::String* source, ::System::String* value, ::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_LASTINDEXOFSTRINGORDINALIGNORECASE_OFFSET))(source, value, startIndex, count);
		}

		::System::Int32 get_ANSICodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_ANSICODEPAGE_OFFSET))(this);
		}

		::System::Int32 get_OEMCodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_OEMCODEPAGE_OFFSET))(this);
		}

		::System::Int32 get_MacCodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_MACCODEPAGE_OFFSET))(this);
		}

		::System::Int32 get_EBCDICCodePage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_EBCDICCODEPAGE_OFFSET))(this);
		}

		::System::Int32 get_LCID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_LCID_OFFSET))(this);
		}

		::System::String* get_CultureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_CULTURENAME_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_CLONE_OFFSET))(this);
		}

		static ::System::Globalization::TextInfo* ReadOnly(::System::Globalization::TextInfo* textInfo)
		{
			return ((::System::Globalization::TextInfo*(*)(::System::Globalization::TextInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_READONLY_OFFSET))(textInfo);
		}

		::System::Void VerifyWritable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_VERIFYWRITABLE_OFFSET))(this);
		}

		::System::Void SetReadOnlyState(::System::Boolean readOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_SETREADONLYSTATE_OFFSET))(this, readOnly);
		}

		::System::String* get_ListSeparator()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_LISTSEPARATOR_OFFSET))(this);
		}

		::System::Void set_ListSeparator(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_SET_LISTSEPARATOR_OFFSET))(this, value);
		}

		::System::Char ToLower(::System::Char c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET))(this, c);
		}

		::System::String* ToLower_1(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_1_OFFSET))(this, str);
		}

		static ::System::Char ToLowerAsciiInvariant(::System::Char c)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERASCIIINVARIANT_OFFSET))(c);
		}

		::System::Char ToUpper(::System::Char c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET))(this, c);
		}

		::System::String* ToUpper_1(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_1_OFFSET))(this, str);
		}

		static ::System::Char ToUpperAsciiInvariant(::System::Char c)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET))(c);
		}

		static ::System::Boolean IsAscii(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ISASCII_OFFSET))(c);
		}

		::System::Boolean get_IsAsciiCasingSameAsInvariant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISASCIICASINGSAMEASINVARIANT_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOSTRING_OFFSET))(this);
		}

		::System::String* ToTitleCase(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOTITLECASE_OFFSET))(this, str);
		}

		static ::System::Int32 AddNonLetter(::System::Text::StringBuilder*& result, ::System::String*& input, ::System::Int32 inputIndex, ::System::Int32 charLen)
		{
			return ((::System::Int32(*)(::System::Text::StringBuilder*&, ::System::String*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ADDNONLETTER_OFFSET))(result, input, inputIndex, charLen);
		}

		::System::Int32 AddTitlecaseLetter(::System::Text::StringBuilder*& result, ::System::String*& input, ::System::Int32 inputIndex, ::System::Int32 charLen)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Text::StringBuilder*&, ::System::String*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ADDTITLECASELETTER_OFFSET))(this, result, input, inputIndex, charLen);
		}

		static ::System::Boolean IsWordSeparator(::System::Globalization::UnicodeCategory category)
		{
			return ((::System::Boolean(*)(::System::Globalization::UnicodeCategory))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ISWORDSEPARATOR_OFFSET))(category);
		}

		static ::System::Boolean IsLetterCategory(::System::Globalization::UnicodeCategory uc)
		{
			return ((::System::Boolean(*)(::System::Globalization::UnicodeCategory))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_ISLETTERCATEGORY_OFFSET))(uc);
		}

		::System::Boolean get_IsRightToLeft()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISRIGHTTOLEFT_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		::System::Int32 GetCaseInsensitiveHashCode(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_OFFSET))(this, str);
		}

		::System::Int32 GetCaseInsensitiveHashCode_1(::System::String* str, ::System::Boolean forceRandomizedHashing, ::System::Int64 additionalEntropy)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_1_OFFSET))(this, str, forceRandomizedHashing, additionalEntropy);
		}

		::System::Int32 GetInvariantCaseInsensitiveHashCode(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_GETINVARIANTCASEINSENSITIVEHASHCODE_OFFSET))(this, str);
		}

		::System::String* ToUpperInternal(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET))(this, str);
		}

		::System::String* ToLowerInternal(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET))(this, str);
		}

		::System::Char ToUpperInternal_1(::System::Char c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_1_OFFSET))(this, c);
		}

		::System::Char ToLowerInternal_1(::System::Char c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_1_OFFSET))(this, c);
		}

		static ::System::Int32 InternalCompareStringOrdinalIgnoreCase(::System::String* strA, ::System::Int32 indexA, ::System::String* strB, ::System::Int32 indexB, ::System::Int32 lenA, ::System::Int32 lenB)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TEXTINFO_INTERNALCOMPARESTRINGORDINALIGNORECASE_OFFSET))(strA, indexA, strB, indexB, lenA, lenB);
		}
	};
}
