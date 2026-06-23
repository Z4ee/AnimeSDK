#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Globalization { class CultureData; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_GLOBALIZATION_TEXTINFO_ADDNONLETTER_OFFSET UNITYSDK_OFFSET(0x1BA21930)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ADDTITLECASELETTER_OFFSET UNITYSDK_OFFSET(0x1BA215B0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1BA1F980)
#define SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASEEX_OFFSET UNITYSDK_OFFSET(0x1BA1F5D0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_COMPAREORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1BA1F400)
#define SYSTEM_GLOBALIZATION_TEXTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BA21000)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_1_OFFSET UNITYSDK_OFFSET(0x1BA1F270)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETCASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BA21BF0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_1_OFFSET UNITYSDK_OFFSET(0x1BA1F1B0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODEORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1BA10BF0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BA210C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GETINVARIANTCASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BA21C00)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ANSICODEPAGE_OFFSET UNITYSDK_OFFSET(0x1BA1F8C0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_CULTURENAME_OFFSET UNITYSDK_OFFSET(0x1BA1F960)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_EBCDICCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1BA1F920)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_INVARIANT_OFFSET UNITYSDK_OFFSET(0x1BA1EFD0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISASCIICASINGSAMEASINVARIANT_OFFSET UNITYSDK_OFFSET(0x1BA1FDB0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1BA1F970)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_ISRIGHTTOLEFT_OFFSET UNITYSDK_OFFSET(0x1BA21BC0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_LCID_OFFSET UNITYSDK_OFFSET(0x1BA1F940)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_LISTSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1FC40)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_MACCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1BA1F900)
#define SYSTEM_GLOBALIZATION_TEXTINFO_GET_OEMCODEPAGE_OFFSET UNITYSDK_OFFSET(0x1BA1F8E0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_INDEXOFSTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1BA1F5E0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_INTERNALCOMPARESTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1BA1F4D0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISASCII_OFFSET UNITYSDK_OFFSET(0x1BA1FDA0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISLETTERCATEGORY_OFFSET UNITYSDK_OFFSET(0x1BA21910)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ISWORDSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA21920)
#define SYSTEM_GLOBALIZATION_TEXTINFO_LASTINDEXOFSTRINGORDINALIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1BA1F760)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_1_OFFSET UNITYSDK_OFFSET(0x1BA1F170)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BA1F0B0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BA1F0A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BA1F180)
#define SYSTEM_GLOBALIZATION_TEXTINFO_READONLY_OFFSET UNITYSDK_OFFSET(0x1BA1FA80)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SETREADONLYSTATE_OFFSET UNITYSDK_OFFSET(0x1BA1FC30)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SET_LISTSEPARATOR_OFFSET UNITYSDK_OFFSET(0x1BA1FC80)
#define SYSTEM_GLOBALIZATION_TEXTINFO_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1BA21BE0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x1BA1FEE0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1BA1FEF0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA20670)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_1_OFFSET UNITYSDK_OFFSET(0x1BA20540)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOLOWER_OFFSET UNITYSDK_OFFSET(0x1BA1FD50)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BA21150)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOTITLECASE_OFFSET UNITYSDK_OFFSET(0x1BA211A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERASCIIINVARIANT_OFFSET UNITYSDK_OFFSET(0x1BA20790)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1BA207A0)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA20F30)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_1_OFFSET UNITYSDK_OFFSET(0x1BA20E00)
#define SYSTEM_GLOBALIZATION_TEXTINFO_TOUPPER_OFFSET UNITYSDK_OFFSET(0x1BA20740)
#define SYSTEM_GLOBALIZATION_TEXTINFO_VERIFYWRITABLE_OFFSET UNITYSDK_OFFSET(0x1BA1FBC0)
#define SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BA21CD0)
#define SYSTEM_GLOBALIZATION_TEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1F070)

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
		::System::String* m_listSeparator; // 0x10
		::System::String* m_cultureName; // 0x18
		::System::Globalization::CultureData* m_cultureData; // 0x20
		::System::String* m_textInfoName; // 0x28
		::System::String* customCultureName; // 0x30
		::System::Int32 m_nDataItem; // 0x38
		::System::Int32 m_win32LangID; // 0x3C
		::System::Boolean m_useUserOverride; // 0x40
		::System::Nullable_1<::System::Boolean> m_IsAsciiCasingSameAsInvariant; // 0x41
		::System::Boolean m_isReadOnly; // 0x43

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
