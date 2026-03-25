#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/UnicodeCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexCharClass_LowerCaseMapping.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class RegexCharClass_SingleRange; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORYFROMNAME_OFFSET UNITYSDK_OFFSET(0x1874D780)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x1874DC80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHARCLASS_OFFSET UNITYSDK_OFFSET(0x1874D3F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHAR_OFFSET UNITYSDK_OFFSET(0x1874D350)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDDIGIT_OFFSET UNITYSDK_OFFSET(0x1874E100)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASERANGE_OFFSET UNITYSDK_OFFSET(0x1874DE10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASE_OFFSET UNITYSDK_OFFSET(0x1874DCA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1874D360)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSET_OFFSET UNITYSDK_OFFSET(0x1874D570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSPACE_OFFSET UNITYSDK_OFFSET(0x1874E080)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1874D770)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDWORD_OFFSET UNITYSDK_OFFSET(0x1874E000)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CANONICALIZE_OFFSET UNITYSDK_OFFSET(0x1874F0A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORYGROUP_OFFSET UNITYSDK_OFFSET(0x1874EA80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORY_OFFSET UNITYSDK_OFFSET(0x1874E930)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1874E830)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1874E640)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASS_OFFSET UNITYSDK_OFFSET(0x1874E5F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GETRANGEAT_OFFSET UNITYSDK_OFFSET(0x1874D540)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GET_CANMERGE_OFFSET UNITYSDK_OFFSET(0x1874D320)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISECMAWORDCHAR_OFFSET UNITYSDK_OFFSET(0x1874E5E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1874E370)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISMERGEABLE_OFFSET UNITYSDK_OFFSET(0x1874E1D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISNEGATED_OFFSET UNITYSDK_OFFSET(0x1874E290)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETONINVERSE_OFFSET UNITYSDK_OFFSET(0x1874E4E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETON_OFFSET UNITYSDK_OFFSET(0x1874E3E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1874E2E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISWORDCHAR_OFFSET UNITYSDK_OFFSET(0x1874E600)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_NEGATECATEGORY_OFFSET UNITYSDK_OFFSET(0x1874D0D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSERECURSIVE_OFFSET UNITYSDK_OFFSET(0x1874EBE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSE_OFFSET UNITYSDK_OFFSET(0x1874EBD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_RANGECOUNT_OFFSET UNITYSDK_OFFSET(0x1874D520)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SETFROMPROPERTY_OFFSET UNITYSDK_OFFSET(0x1874D970)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SET_NEGATE_OFFSET UNITYSDK_OFFSET(0x1874D340)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLETONCHAR_OFFSET UNITYSDK_OFFSET(0x1874E180)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_TOSTRINGCLASS_OFFSET UNITYSDK_OFFSET(0x1874EEB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x187464E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1874D300)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1874D200)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCharClass_TypeDefinitionIndex = 2494;

	class RegexCharClass : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NotSpace()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCD70);
		}
		static ::System::String** StaticGet_NotWord()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCD78);
		}
		static ::System::String** StaticGet_NotSpaceClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCD80);
		}
		static ::System::String** StaticGet_WordClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCD88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__propTable()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCD90);
		}
		static ::System::String** StaticGet_SpaceClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCD98);
		}
		static ::System::String** StaticGet_NotDigitClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCDA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__definedCategories()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCDA8);
		}
		static ::Il2CppArray<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping>** StaticGet__lcTable()
		{
			return (::Il2CppArray<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping>**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCDB0);
		}
		static ::System::String** StaticGet_NotWordClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCDB8);
		}
		static ::System::String** StaticGet_DigitClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCDC0);
		}
		static ::System::String** StaticGet_InternalRegexIgnoreCase()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCDC8);
		}
		static ::System::String** StaticGet_Word()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCDD0);
		}
		static ::System::String** StaticGet_Space()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0xCDD8);
		}
		::System::Text::StringBuilder* _categories; // 0x10
		::System::Text::RegularExpressions::RegexCharClass* _subtractor; // 0x18
		::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange*>* _rangelist; // 0x20
		::System::Boolean _negate; // 0x28
		::System::Boolean _canonical; // 0x29

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean negate, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange*>* ranges, ::System::Text::StringBuilder* categories, ::System::Text::RegularExpressions::RegexCharClass* subtraction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange*>*, ::System::Text::StringBuilder*, ::System::Text::RegularExpressions::RegexCharClass*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS__CTOR_1_OFFSET))(this, negate, ranges, categories, subtraction);
		}

		::System::Boolean get_CanMerge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GET_CANMERGE_OFFSET))(this);
		}

		::System::Void set_Negate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SET_NEGATE_OFFSET))(this, value);
		}

		::System::Void AddChar(::System::Char c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHAR_OFFSET))(this, c);
		}

		::System::Void AddCharClass(::System::Text::RegularExpressions::RegexCharClass* cc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexCharClass*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHARCLASS_OFFSET))(this, cc);
		}

		::System::Void AddSet(::System::String* set)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSET_OFFSET))(this, set);
		}

		::System::Void AddSubtraction(::System::Text::RegularExpressions::RegexCharClass* sub)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexCharClass*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSUBTRACTION_OFFSET))(this, sub);
		}

		::System::Void AddRange(::System::Char first, ::System::Char last)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDRANGE_OFFSET))(this, first, last);
		}

		::System::Void AddCategoryFromName(::System::String* categoryName, ::System::Boolean invert, ::System::Boolean caseInsensitive, ::System::String* pattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORYFROMNAME_OFFSET))(this, categoryName, invert, caseInsensitive, pattern);
		}

		::System::Void AddCategory(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORY_OFFSET))(this, category);
		}

		::System::Void AddLowercase(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASE_OFFSET))(this, culture);
		}

		::System::Void AddLowercaseRange(::System::Char chMin, ::System::Char chMax, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASERANGE_OFFSET))(this, chMin, chMax, culture);
		}

		::System::Void AddWord(::System::Boolean ecma, ::System::Boolean negate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDWORD_OFFSET))(this, ecma, negate);
		}

		::System::Void AddSpace(::System::Boolean ecma, ::System::Boolean negate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSPACE_OFFSET))(this, ecma, negate);
		}

		::System::Void AddDigit(::System::Boolean ecma, ::System::Boolean negate, ::System::String* pattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDDIGIT_OFFSET))(this, ecma, negate, pattern);
		}

		static ::System::Char SingletonChar(::System::String* set)
		{
			return ((::System::Char(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLETONCHAR_OFFSET))(set);
		}

		static ::System::Boolean IsMergeable(::System::String* charClass)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISMERGEABLE_OFFSET))(charClass);
		}

		static ::System::Boolean IsEmpty(::System::String* charClass)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISEMPTY_OFFSET))(charClass);
		}

		static ::System::Boolean IsSingleton(::System::String* set)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETON_OFFSET))(set);
		}

		static ::System::Boolean IsSingletonInverse(::System::String* set)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETONINVERSE_OFFSET))(set);
		}

		static ::System::Boolean IsSubtraction(::System::String* charClass)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSUBTRACTION_OFFSET))(charClass);
		}

		static ::System::Boolean IsNegated(::System::String* set)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISNEGATED_OFFSET))(set);
		}

		static ::System::Boolean IsECMAWordChar(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISECMAWORDCHAR_OFFSET))(ch);
		}

		static ::System::Boolean IsWordChar(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISWORDCHAR_OFFSET))(ch);
		}

		static ::System::Boolean CharInClass(::System::Char ch, ::System::String* set)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASS_OFFSET))(ch, set);
		}

		static ::System::Boolean CharInClassRecursive(::System::Char ch, ::System::String* set, ::System::Int32 start)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSRECURSIVE_OFFSET))(ch, set, start);
		}

		static ::System::Boolean CharInClassInternal(::System::Char ch, ::System::String* set, ::System::Int32 start, ::System::Int32 mySetLength, ::System::Int32 myCategoryLength)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSINTERNAL_OFFSET))(ch, set, start, mySetLength, myCategoryLength);
		}

		static ::System::Boolean CharInCategory(::System::Char ch, ::System::String* set, ::System::Int32 start, ::System::Int32 mySetLength, ::System::Int32 myCategoryLength)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORY_OFFSET))(ch, set, start, mySetLength, myCategoryLength);
		}

		static ::System::Boolean CharInCategoryGroup(::System::Char ch, ::System::Globalization::UnicodeCategory chcategory, ::System::String* category, ::System::Int32& i)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Globalization::UnicodeCategory, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORYGROUP_OFFSET))(ch, chcategory, category, i);
		}

		static ::System::String* NegateCategory(::System::String* category)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_NEGATECATEGORY_OFFSET))(category);
		}

		static ::System::Text::RegularExpressions::RegexCharClass* Parse(::System::String* charClass)
		{
			return ((::System::Text::RegularExpressions::RegexCharClass*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSE_OFFSET))(charClass);
		}

		static ::System::Text::RegularExpressions::RegexCharClass* ParseRecursive(::System::String* charClass, ::System::Int32 start)
		{
			return ((::System::Text::RegularExpressions::RegexCharClass*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSERECURSIVE_OFFSET))(charClass, start);
		}

		::System::Int32 RangeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_RANGECOUNT_OFFSET))(this);
		}

		::System::String* ToStringClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_TOSTRINGCLASS_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexCharClass_SingleRange* GetRangeAt(::System::Int32 i)
		{
			return ((::System::Text::RegularExpressions::RegexCharClass_SingleRange*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GETRANGEAT_OFFSET))(this, i);
		}

		::System::Void Canonicalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CANONICALIZE_OFFSET))(this);
		}

		static ::System::String* SetFromProperty(::System::String* capname, ::System::Boolean invert, ::System::String* pattern)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SETFROMPROPERTY_OFFSET))(capname, invert, pattern);
		}
	};
}
