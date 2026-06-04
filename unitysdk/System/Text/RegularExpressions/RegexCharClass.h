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

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORYFROMNAME_OFFSET UNITYSDK_OFFSET(0x1AFEA220)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORY_OFFSET UNITYSDK_OFFSET(0x1AFEA740)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHARCLASS_OFFSET UNITYSDK_OFFSET(0x1AFE9CA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHAR_OFFSET UNITYSDK_OFFSET(0x1AFE9B90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDDIGIT_OFFSET UNITYSDK_OFFSET(0x1AFEABE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASERANGE_OFFSET UNITYSDK_OFFSET(0x1AFEA910)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASE_OFFSET UNITYSDK_OFFSET(0x1AFEA760)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1AFE9BA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSET_OFFSET UNITYSDK_OFFSET(0x1AFE9F20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSPACE_OFFSET UNITYSDK_OFFSET(0x1AFEAB60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1AFEA210)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDWORD_OFFSET UNITYSDK_OFFSET(0x1AFEAAE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CANONICALIZE_OFFSET UNITYSDK_OFFSET(0x1AFEC120)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORYGROUP_OFFSET UNITYSDK_OFFSET(0x1AFEB5D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORY_OFFSET UNITYSDK_OFFSET(0x1AFEB410)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFEB310)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1AFEB120)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASS_OFFSET UNITYSDK_OFFSET(0x1AFEB0D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GETRANGEAT_OFFSET UNITYSDK_OFFSET(0x1AFE9ED0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GET_CANMERGE_OFFSET UNITYSDK_OFFSET(0x1AFE9B60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISECMAWORDCHAR_OFFSET UNITYSDK_OFFSET(0x1AFEB0C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1AFEAE50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISMERGEABLE_OFFSET UNITYSDK_OFFSET(0x1AFEACB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISNEGATED_OFFSET UNITYSDK_OFFSET(0x1AFEAD70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETONINVERSE_OFFSET UNITYSDK_OFFSET(0x1AFEAFC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETON_OFFSET UNITYSDK_OFFSET(0x1AFEAEC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1AFEADC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISWORDCHAR_OFFSET UNITYSDK_OFFSET(0x1AFEB0E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_NEGATECATEGORY_OFFSET UNITYSDK_OFFSET(0x1AFE9790)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSERECURSIVE_OFFSET UNITYSDK_OFFSET(0x1AFEB730)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSE_OFFSET UNITYSDK_OFFSET(0x1AFEB720)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_RANGECOUNT_OFFSET UNITYSDK_OFFSET(0x1AFE9EB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SETFROMPROPERTY_OFFSET UNITYSDK_OFFSET(0x1AFEA460)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SET_NEGATE_OFFSET UNITYSDK_OFFSET(0x1AFE9B80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLETONCHAR_OFFSET UNITYSDK_OFFSET(0x1AFEAC60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_TOSTRINGCLASS_OFFSET UNITYSDK_OFFSET(0x1AFEBA80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFE4730)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFE9B40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE9A40)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCharClass_TypeDefinitionIndex = 2495;

	class RegexCharClass : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NotDigitClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x275B0);
		}
		static ::Il2CppArray<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping>** StaticGet__lcTable()
		{
			return (::Il2CppArray<::System::Text::RegularExpressions::RegexCharClass_LowerCaseMapping>**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x275B8);
		}
		static ::System::String** StaticGet_SpaceClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x275C0);
		}
		static ::System::String** StaticGet_WordClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x275C8);
		}
		static ::System::String** StaticGet_NotSpace()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x275D0);
		}
		static ::System::String** StaticGet_DigitClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x275D8);
		}
		static ::System::String** StaticGet_NotWord()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x275E0);
		}
		static ::System::String** StaticGet_NotSpaceClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x275E8);
		}
		static ::System::String** StaticGet_NotWordClass()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x275F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__propTable()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x275F8);
		}
		static ::System::String** StaticGet_InternalRegexIgnoreCase()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x27600);
		}
		static ::System::String** StaticGet_Word()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x27608);
		}
		static ::System::String** StaticGet_Space()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x27610);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__definedCategories()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RegexCharClass_TypeDefinitionIndex)->GetStaticField(0x27618);
		}
		::System::Text::RegularExpressions::RegexCharClass* _subtractor; // 0x10
		::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange*>* _rangelist; // 0x18
		::System::Text::StringBuilder* _categories; // 0x20
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

		::System::Void _ctor_1(::System::Boolean a1, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange*>* a2, ::System::Text::StringBuilder* a3, ::System::Text::RegularExpressions::RegexCharClass* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexCharClass_SingleRange*>*, ::System::Text::StringBuilder*, ::System::Text::RegularExpressions::RegexCharClass*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_CanMerge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GET_CANMERGE_OFFSET))(this);
		}

		::System::Void set_Negate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SET_NEGATE_OFFSET))(this, a1);
		}

		::System::Void AddChar(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHAR_OFFSET))(this, a1);
		}

		::System::Void AddCharClass(::System::Text::RegularExpressions::RegexCharClass* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexCharClass*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCHARCLASS_OFFSET))(this, a1);
		}

		::System::Void AddSet(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSET_OFFSET))(this, a1);
		}

		::System::Void AddSubtraction(::System::Text::RegularExpressions::RegexCharClass* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexCharClass*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSUBTRACTION_OFFSET))(this, a1);
		}

		::System::Void AddRange(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDRANGE_OFFSET))(this, a1, a2);
		}

		::System::Void AddCategoryFromName(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORYFROMNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddCategory(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDCATEGORY_OFFSET))(this, a1);
		}

		::System::Void AddLowercase(::System::Globalization::CultureInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASE_OFFSET))(this, a1);
		}

		::System::Void AddLowercaseRange(::System::Char a1, ::System::Char a2, ::System::Globalization::CultureInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDLOWERCASERANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddWord(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDWORD_OFFSET))(this, a1, a2);
		}

		::System::Void AddSpace(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDSPACE_OFFSET))(this, a1, a2);
		}

		::System::Void AddDigit(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ADDDIGIT_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Char SingletonChar(::System::String* a1)
		{
			return ((::System::Char(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SINGLETONCHAR_OFFSET))(a1);
		}

		static ::System::Boolean IsMergeable(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISMERGEABLE_OFFSET))(a1);
		}

		static ::System::Boolean IsEmpty(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISEMPTY_OFFSET))(a1);
		}

		static ::System::Boolean IsSingleton(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETON_OFFSET))(a1);
		}

		static ::System::Boolean IsSingletonInverse(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSINGLETONINVERSE_OFFSET))(a1);
		}

		static ::System::Boolean IsSubtraction(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISSUBTRACTION_OFFSET))(a1);
		}

		static ::System::Boolean IsNegated(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISNEGATED_OFFSET))(a1);
		}

		static ::System::Boolean IsECMAWordChar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISECMAWORDCHAR_OFFSET))(a1);
		}

		static ::System::Boolean IsWordChar(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_ISWORDCHAR_OFFSET))(a1);
		}

		static ::System::Boolean CharInClass(::System::Char a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASS_OFFSET))(a1, a2);
		}

		static ::System::Boolean CharInClassRecursive(::System::Char a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSRECURSIVE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CharInClassInternal(::System::Char a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCLASSINTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean CharInCategory(::System::Char a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean CharInCategoryGroup(::System::Char a1, ::System::Globalization::UnicodeCategory a2, ::System::String* a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Globalization::UnicodeCategory, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CHARINCATEGORYGROUP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* NegateCategory(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_NEGATECATEGORY_OFFSET))(a1);
		}

		static ::System::Text::RegularExpressions::RegexCharClass* Parse(::System::String* a1)
		{
			return ((::System::Text::RegularExpressions::RegexCharClass*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSE_OFFSET))(a1);
		}

		static ::System::Text::RegularExpressions::RegexCharClass* ParseRecursive(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Text::RegularExpressions::RegexCharClass*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_PARSERECURSIVE_OFFSET))(a1, a2);
		}

		::System::Int32 RangeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_RANGECOUNT_OFFSET))(this);
		}

		::System::String* ToStringClass()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_TOSTRINGCLASS_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexCharClass_SingleRange* GetRangeAt(::System::Int32 a1)
		{
			return ((::System::Text::RegularExpressions::RegexCharClass_SingleRange*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_GETRANGEAT_OFFSET))(this, a1);
		}

		::System::Void Canonicalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_CANONICALIZE_OFFSET))(this);
		}

		static ::System::String* SetFromProperty(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCHARCLASS_SETFROMPROPERTY_OFFSET))(a1, a2, a3);
		}
	};
}
