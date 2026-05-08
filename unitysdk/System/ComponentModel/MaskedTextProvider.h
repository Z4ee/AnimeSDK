#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/BitVector32.h"
#include "unitysdk/System/ComponentModel/MaskedTextProvider_CharType.h"
#include "unitysdk/System/ComponentModel/MaskedTextResultHint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class MaskedTextProvider_CharDescriptor; }
namespace System::Globalization { class CultureInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_1_OFFSET UNITYSDK_OFFSET(0x19A4A8F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_2_OFFSET UNITYSDK_OFFSET(0x19A4AB00)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_3_OFFSET UNITYSDK_OFFSET(0x19A4AB30)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_OFFSET UNITYSDK_OFFSET(0x19A4A8C0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x19A4AC80)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x19A4AC30)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CLONE_OFFSET UNITYSDK_OFFSET(0x19A48FA0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDASSIGNEDEDITPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x19A4A320)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDASSIGNEDEDITPOSITIONINRANGE_OFFSET UNITYSDK_OFFSET(0x19A4AD90)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDEDITPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x19A4AA20)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDEDITPOSITIONINRANGE_1_OFFSET UNITYSDK_OFFSET(0x19A4ADC0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDEDITPOSITIONINRANGE_OFFSET UNITYSDK_OFFSET(0x19A4AF60)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDNONEDITPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x19A4B060)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDNONEDITPOSITIONINRANGE_OFFSET UNITYSDK_OFFSET(0x19A4B0B0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDPOSITIONINRANGE_OFFSET UNITYSDK_OFFSET(0x19A4AF80)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDUNASSIGNEDEDITPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x19A4B0D0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDUNASSIGNEDEDITPOSITIONINRANGE_OFFSET UNITYSDK_OFFSET(0x19A4B110)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GETOPERATIONRESULTFROMHINT_OFFSET UNITYSDK_OFFSET(0x19A4B250)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ALLOWPROMPTASINPUT_OFFSET UNITYSDK_OFFSET(0x19A48F10)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ASCIIONLY_OFFSET UNITYSDK_OFFSET(0x19A49B70)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ASSIGNEDEDITPOSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19A48F70)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_AVAILABLEEDITPOSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19A48F80)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x19A4A010)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_DEFAULTPASSWORDCHAR_OFFSET UNITYSDK_OFFSET(0x19A4A020)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_EDITPOSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x19A48F90)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_EDITPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19A4A030)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_INCLUDELITERALS_OFFSET UNITYSDK_OFFSET(0x19A49E70)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_INCLUDEPROMPT_OFFSET UNITYSDK_OFFSET(0x19A49F40)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_INVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x19A4A240)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ISPASSWORD_OFFSET UNITYSDK_OFFSET(0x19A4A210)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19A4A820)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_LASTASSIGNEDPOSITION_OFFSET UNITYSDK_OFFSET(0x19A4A250)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19A4A380)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_MASKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x19A4A3B0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_MASKFULL_OFFSET UNITYSDK_OFFSET(0x19A4A3C0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_MASK_OFFSET UNITYSDK_OFFSET(0x19A4A3A0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_PASSWORDCHAR_OFFSET UNITYSDK_OFFSET(0x19A4A3D0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_PROMPTCHAR_OFFSET UNITYSDK_OFFSET(0x19A4A5C0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_RESETONPROMPT_OFFSET UNITYSDK_OFFSET(0x19A49D50)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_RESETONSPACE_OFFSET UNITYSDK_OFFSET(0x19A49DB0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_SKIPLITERALS_OFFSET UNITYSDK_OFFSET(0x19A49E10)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19A485B0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTATINT_OFFSET UNITYSDK_OFFSET(0x19A4B4E0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_1_OFFSET UNITYSDK_OFFSET(0x19A4B380)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_2_OFFSET UNITYSDK_OFFSET(0x19A4B350)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_3_OFFSET UNITYSDK_OFFSET(0x19A4B420)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_OFFSET UNITYSDK_OFFSET(0x19A4B260)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISACIIALPHANUMERIC_OFFSET UNITYSDK_OFFSET(0x19A4C530)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISALPHANUMERIC_OFFSET UNITYSDK_OFFSET(0x19A4C550)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISASCIILETTER_OFFSET UNITYSDK_OFFSET(0x19A4C580)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISASCII_OFFSET UNITYSDK_OFFSET(0x19A4C520)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISAVAILABLEPOSITION_OFFSET UNITYSDK_OFFSET(0x19A4C590)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISEDITPOSITION_1_OFFSET UNITYSDK_OFFSET(0x19A48EF0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISEDITPOSITION_OFFSET UNITYSDK_OFFSET(0x19A4A770)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISLITERALPOSITION_OFFSET UNITYSDK_OFFSET(0x19A4C640)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISPRINTABLECHAR_OFFSET UNITYSDK_OFFSET(0x19A48570)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISVALIDINPUTCHAR_OFFSET UNITYSDK_OFFSET(0x19A4C670)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISVALIDMASKCHAR_OFFSET UNITYSDK_OFFSET(0x19A4C6F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISVALIDPASSWORDCHAR_OFFSET UNITYSDK_OFFSET(0x19A4A540)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEATINT_OFFSET UNITYSDK_OFFSET(0x19A4C900)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEAT_1_OFFSET UNITYSDK_OFFSET(0x19A4C840)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEAT_2_OFFSET UNITYSDK_OFFSET(0x19A4C8A0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19A4C7F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x19A4C7A0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVE_OFFSET UNITYSDK_OFFSET(0x19A4C770)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x19A4CFD0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_2_OFFSET UNITYSDK_OFFSET(0x19A4D1F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_3_OFFSET UNITYSDK_OFFSET(0x19A4D720)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_4_OFFSET UNITYSDK_OFFSET(0x19A4D750)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_5_OFFSET UNITYSDK_OFFSET(0x19A4D370)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_OFFSET UNITYSDK_OFFSET(0x19A49D20)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_RESETCHAR_OFFSET UNITYSDK_OFFSET(0x19A4ACE0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_RESETSTRING_OFFSET UNITYSDK_OFFSET(0x19A4CD60)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SETCHAR_1_OFFSET UNITYSDK_OFFSET(0x19A4DA70)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SETCHAR_OFFSET UNITYSDK_OFFSET(0x19A4C2F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SETSTRING_OFFSET UNITYSDK_OFFSET(0x19A4C360)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_1_OFFSET UNITYSDK_OFFSET(0x19A4D880)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_INCLUDELITERALS_OFFSET UNITYSDK_OFFSET(0x19A49ED0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_INCLUDEPROMPT_OFFSET UNITYSDK_OFFSET(0x19A49FA0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_ISPASSWORD_OFFSET UNITYSDK_OFFSET(0x19A4A220)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_OFFSET UNITYSDK_OFFSET(0x19A4D850)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_PASSWORDCHAR_OFFSET UNITYSDK_OFFSET(0x19A4A3E0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_PROMPTCHAR_OFFSET UNITYSDK_OFFSET(0x19A4A5D0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_RESETONPROMPT_OFFSET UNITYSDK_OFFSET(0x19A49BD0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_RESETONSPACE_OFFSET UNITYSDK_OFFSET(0x19A49C40)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_SKIPLITERALS_OFFSET UNITYSDK_OFFSET(0x19A49CB0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTCHAR_OFFSET UNITYSDK_OFFSET(0x19A4BBC0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTESCAPECHAR_1_OFFSET UNITYSDK_OFFSET(0x19A4DBF0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTESCAPECHAR_OFFSET UNITYSDK_OFFSET(0x19A4D180)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTSETCHAR_OFFSET UNITYSDK_OFFSET(0x19A4AA70)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTSETSTRING_OFFSET UNITYSDK_OFFSET(0x19A4ABF0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTSTRING_OFFSET UNITYSDK_OFFSET(0x19A4B990)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TODISPLAYSTRING_OFFSET UNITYSDK_OFFSET(0x19A4DE00)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x19A4E6F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x19A4E810)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x19A4E910)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x19A4EA20)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x19A4EA60)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x19A4E150)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A4E030)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYCHAR_OFFSET UNITYSDK_OFFSET(0x19A4EA90)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYESCAPECHAR_OFFSET UNITYSDK_OFFSET(0x19A4EAE0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYSTRING_1_OFFSET UNITYSDK_OFFSET(0x19A4EBC0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYSTRING_OFFSET UNITYSDK_OFFSET(0x19A4EB80)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A4EC00)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A48480)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19A484B0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19A484E0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19A48510)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x19A48540)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x19A48080)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A48050)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MaskedTextProvider_TypeDefinitionIndex = 2945;

	class MaskedTextProvider : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_maskTextProviderType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x3680);
		}
		static ::System::Int32* StaticGet_RESET_ON_LITERALS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13C0);
		}
		static ::System::Int32* StaticGet_INCLUDE_PROMPT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13C4);
		}
		static ::System::Int32* StaticGet_ASCII_ONLY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13C8);
		}
		static ::System::Int32* StaticGet_INCLUDE_LITERALS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13CC);
		}
		static ::System::Int32* StaticGet_SKIP_SPACE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13D0);
		}
		static ::System::Int32* StaticGet_ALLOW_PROMPT_AS_INPUT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13D4);
		}
		static ::System::Int32* StaticGet_RESET_ON_PROMPT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13D8);
		}
		// static const ::System::Char spaceChar; // 0x0
		// static const ::System::Char defaultPromptChar; // 0x0
		// static const ::System::Char nullPasswordChar; // 0x0
		// static const ::System::Boolean defaultAllowPrompt; // 0x0
		// static const ::System::Int32 invalidIndex = 0xFFFFFFFF; // 0x0
		// static const ::System::Byte editAny = 0x0; // 0x0
		// static const ::System::Byte editUnassigned = 0x1; // 0x0
		// static const ::System::Byte editAssigned = 0x2; // 0x0
		// static const ::System::Boolean forward; // 0x0
		// static const ::System::Boolean backward; // 0x0
		::System::Globalization::CultureInfo* culture; // 0x10
		::System::Collections::Generic::List_1<::System::ComponentModel::MaskedTextProvider_CharDescriptor*>* stringDescriptor; // 0x18
		::System::String* mask; // 0x20
		::System::Text::StringBuilder* testString; // 0x28
		::System::Int32 requiredCharCount; // 0x30
		::System::Int32 requiredEditChars; // 0x34
		::System::Collections::Specialized::BitVector32 flagState; // 0x38
		::System::Int32 assignedCharCount; // 0x3C
		::System::Char promptChar; // 0x40
		::System::Char passwordChar; // 0x42
		::System::Int32 optionalEditChars; // 0x44

		::System::Void _ctor(::System::String* mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_OFFSET))(this, mask);
		}

		::System::Void _ctor_1(::System::String* mask, ::System::Boolean restrictToAscii)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_1_OFFSET))(this, mask, restrictToAscii);
		}

		::System::Void _ctor_2(::System::String* mask, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_2_OFFSET))(this, mask, culture);
		}

		::System::Void _ctor_3(::System::String* mask, ::System::Globalization::CultureInfo* culture, ::System::Boolean restrictToAscii)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_3_OFFSET))(this, mask, culture, restrictToAscii);
		}

		::System::Void _ctor_4(::System::String* mask, ::System::Char passwordChar, ::System::Boolean allowPromptAsInput)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_4_OFFSET))(this, mask, passwordChar, allowPromptAsInput);
		}

		::System::Void _ctor_5(::System::String* mask, ::System::Globalization::CultureInfo* culture, ::System::Char passwordChar, ::System::Boolean allowPromptAsInput)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_5_OFFSET))(this, mask, culture, passwordChar, allowPromptAsInput);
		}

		::System::Void _ctor_6(::System::String* mask, ::System::Globalization::CultureInfo* culture, ::System::Boolean allowPromptAsInput, ::System::Char promptChar, ::System::Char passwordChar, ::System::Boolean restrictToAscii)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Char, ::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_6_OFFSET))(this, mask, culture, allowPromptAsInput, promptChar, passwordChar, restrictToAscii);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INITIALIZE_OFFSET))(this);
		}

		::System::Boolean get_AllowPromptAsInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ALLOWPROMPTASINPUT_OFFSET))(this);
		}

		::System::Int32 get_AssignedEditPositionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ASSIGNEDEDITPOSITIONCOUNT_OFFSET))(this);
		}

		::System::Int32 get_AvailableEditPositionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_AVAILABLEEDITPOSITIONCOUNT_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CLONE_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_Culture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_CULTURE_OFFSET))(this);
		}

		static ::System::Char get_DefaultPasswordChar()
		{
			return ((::System::Char(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_DEFAULTPASSWORDCHAR_OFFSET))();
		}

		::System::Int32 get_EditPositionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_EDITPOSITIONCOUNT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* get_EditPositions()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_EDITPOSITIONS_OFFSET))(this);
		}

		::System::Boolean get_IncludeLiterals()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_INCLUDELITERALS_OFFSET))(this);
		}

		::System::Void set_IncludeLiterals(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_INCLUDELITERALS_OFFSET))(this, value);
		}

		::System::Boolean get_IncludePrompt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_INCLUDEPROMPT_OFFSET))(this);
		}

		::System::Void set_IncludePrompt(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_INCLUDEPROMPT_OFFSET))(this, value);
		}

		::System::Boolean get_AsciiOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ASCIIONLY_OFFSET))(this);
		}

		::System::Boolean get_IsPassword()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ISPASSWORD_OFFSET))(this);
		}

		::System::Void set_IsPassword(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_ISPASSWORD_OFFSET))(this, value);
		}

		static ::System::Int32 get_InvalidIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_INVALIDINDEX_OFFSET))();
		}

		::System::Int32 get_LastAssignedPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_LASTASSIGNEDPOSITION_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_LENGTH_OFFSET))(this);
		}

		::System::String* get_Mask()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_MASK_OFFSET))(this);
		}

		::System::Boolean get_MaskCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_MASKCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_MaskFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_MASKFULL_OFFSET))(this);
		}

		::System::Char get_PasswordChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_PASSWORDCHAR_OFFSET))(this);
		}

		::System::Void set_PasswordChar(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_PASSWORDCHAR_OFFSET))(this, value);
		}

		::System::Char get_PromptChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_PROMPTCHAR_OFFSET))(this);
		}

		::System::Void set_PromptChar(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_PROMPTCHAR_OFFSET))(this, value);
		}

		::System::Boolean get_ResetOnPrompt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_RESETONPROMPT_OFFSET))(this);
		}

		::System::Void set_ResetOnPrompt(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_RESETONPROMPT_OFFSET))(this, value);
		}

		::System::Boolean get_ResetOnSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_RESETONSPACE_OFFSET))(this);
		}

		::System::Void set_ResetOnSpace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_RESETONSPACE_OFFSET))(this, value);
		}

		::System::Boolean get_SkipLiterals()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_SKIPLITERALS_OFFSET))(this);
		}

		::System::Void set_SkipLiterals(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_SKIPLITERALS_OFFSET))(this, value);
		}

		::System::Char get_Item(::System::Int32 index)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ITEM_OFFSET))(this, index);
		}

		::System::Boolean Add(::System::Char input)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_OFFSET))(this, input);
		}

		::System::Boolean Add_1(::System::Char input, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_1_OFFSET))(this, input, testPosition, resultHint);
		}

		::System::Boolean Add_2(::System::String* input)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_2_OFFSET))(this, input);
		}

		::System::Boolean Add_3(::System::String* input, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_3_OFFSET))(this, input, testPosition, resultHint);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CLEAR_OFFSET))(this);
		}

		::System::Void Clear_1(::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CLEAR_1_OFFSET))(this, resultHint);
		}

		::System::Int32 FindAssignedEditPositionFrom(::System::Int32 position, ::System::Boolean direction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDASSIGNEDEDITPOSITIONFROM_OFFSET))(this, position, direction);
		}

		::System::Int32 FindAssignedEditPositionInRange(::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Boolean direction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDASSIGNEDEDITPOSITIONINRANGE_OFFSET))(this, startPosition, endPosition, direction);
		}

		::System::Int32 FindEditPositionFrom(::System::Int32 position, ::System::Boolean direction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDEDITPOSITIONFROM_OFFSET))(this, position, direction);
		}

		::System::Int32 FindEditPositionInRange(::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Boolean direction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDEDITPOSITIONINRANGE_OFFSET))(this, startPosition, endPosition, direction);
		}

		::System::Int32 FindEditPositionInRange_1(::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Boolean direction, ::System::Byte assignedStatus)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDEDITPOSITIONINRANGE_1_OFFSET))(this, startPosition, endPosition, direction, assignedStatus);
		}

		::System::Int32 FindNonEditPositionFrom(::System::Int32 position, ::System::Boolean direction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDNONEDITPOSITIONFROM_OFFSET))(this, position, direction);
		}

		::System::Int32 FindNonEditPositionInRange(::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Boolean direction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDNONEDITPOSITIONINRANGE_OFFSET))(this, startPosition, endPosition, direction);
		}

		::System::Int32 FindPositionInRange(::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Boolean direction, ::System::ComponentModel::MaskedTextProvider_CharType charTypeFlags)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::ComponentModel::MaskedTextProvider_CharType))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDPOSITIONINRANGE_OFFSET))(this, startPosition, endPosition, direction, charTypeFlags);
		}

		::System::Int32 FindUnassignedEditPositionFrom(::System::Int32 position, ::System::Boolean direction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDUNASSIGNEDEDITPOSITIONFROM_OFFSET))(this, position, direction);
		}

		::System::Int32 FindUnassignedEditPositionInRange(::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Boolean direction)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDUNASSIGNEDEDITPOSITIONINRANGE_OFFSET))(this, startPosition, endPosition, direction);
		}

		static ::System::Boolean GetOperationResultFromHint(::System::ComponentModel::MaskedTextResultHint hint)
		{
			return ((::System::Boolean(*)(::System::ComponentModel::MaskedTextResultHint))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GETOPERATIONRESULTFROMHINT_OFFSET))(hint);
		}

		::System::Boolean InsertAt(::System::Char input, ::System::Int32 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_OFFSET))(this, input, position);
		}

		::System::Boolean InsertAt_1(::System::Char input, ::System::Int32 position, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_1_OFFSET))(this, input, position, testPosition, resultHint);
		}

		::System::Boolean InsertAt_2(::System::String* input, ::System::Int32 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_2_OFFSET))(this, input, position);
		}

		::System::Boolean InsertAt_3(::System::String* input, ::System::Int32 position, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_3_OFFSET))(this, input, position, testPosition, resultHint);
		}

		::System::Boolean InsertAtInt(::System::String* input, ::System::Int32 position, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint, ::System::Boolean testOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTATINT_OFFSET))(this, input, position, testPosition, resultHint, testOnly);
		}

		static ::System::Boolean IsAscii(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISASCII_OFFSET))(c);
		}

		static ::System::Boolean IsAciiAlphanumeric(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISACIIALPHANUMERIC_OFFSET))(c);
		}

		static ::System::Boolean IsAlphanumeric(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISALPHANUMERIC_OFFSET))(c);
		}

		static ::System::Boolean IsAsciiLetter(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISASCIILETTER_OFFSET))(c);
		}

		::System::Boolean IsAvailablePosition(::System::Int32 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISAVAILABLEPOSITION_OFFSET))(this, position);
		}

		::System::Boolean IsEditPosition(::System::Int32 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISEDITPOSITION_OFFSET))(this, position);
		}

		static ::System::Boolean IsEditPosition_1(::System::ComponentModel::MaskedTextProvider_CharDescriptor* charDescriptor)
		{
			return ((::System::Boolean(*)(::System::ComponentModel::MaskedTextProvider_CharDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISEDITPOSITION_1_OFFSET))(charDescriptor);
		}

		static ::System::Boolean IsLiteralPosition(::System::ComponentModel::MaskedTextProvider_CharDescriptor* charDescriptor)
		{
			return ((::System::Boolean(*)(::System::ComponentModel::MaskedTextProvider_CharDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISLITERALPOSITION_OFFSET))(charDescriptor);
		}

		static ::System::Boolean IsPrintableChar(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISPRINTABLECHAR_OFFSET))(c);
		}

		static ::System::Boolean IsValidInputChar(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISVALIDINPUTCHAR_OFFSET))(c);
		}

		static ::System::Boolean IsValidMaskChar(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISVALIDMASKCHAR_OFFSET))(c);
		}

		static ::System::Boolean IsValidPasswordChar(::System::Char c)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISVALIDPASSWORDCHAR_OFFSET))(c);
		}

		::System::Boolean Remove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVE_OFFSET))(this);
		}

		::System::Boolean Remove_1(::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVE_1_OFFSET))(this, testPosition, resultHint);
		}

		::System::Boolean RemoveAt(::System::Int32 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEAT_OFFSET))(this, position);
		}

		::System::Boolean RemoveAt_1(::System::Int32 startPosition, ::System::Int32 endPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEAT_1_OFFSET))(this, startPosition, endPosition);
		}

		::System::Boolean RemoveAt_2(::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEAT_2_OFFSET))(this, startPosition, endPosition, testPosition, resultHint);
		}

		::System::Boolean RemoveAtInt(::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint, ::System::Boolean testOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEATINT_OFFSET))(this, startPosition, endPosition, testPosition, resultHint, testOnly);
		}

		::System::Boolean Replace(::System::Char input, ::System::Int32 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_OFFSET))(this, input, position);
		}

		::System::Boolean Replace_1(::System::Char input, ::System::Int32 position, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_1_OFFSET))(this, input, position, testPosition, resultHint);
		}

		::System::Boolean Replace_2(::System::Char input, ::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_2_OFFSET))(this, input, startPosition, endPosition, testPosition, resultHint);
		}

		::System::Boolean Replace_3(::System::String* input, ::System::Int32 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_3_OFFSET))(this, input, position);
		}

		::System::Boolean Replace_4(::System::String* input, ::System::Int32 position, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_4_OFFSET))(this, input, position, testPosition, resultHint);
		}

		::System::Boolean Replace_5(::System::String* input, ::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_5_OFFSET))(this, input, startPosition, endPosition, testPosition, resultHint);
		}

		::System::Void ResetChar(::System::Int32 testPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_RESETCHAR_OFFSET))(this, testPosition);
		}

		::System::Void ResetString(::System::Int32 startPosition, ::System::Int32 endPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_RESETSTRING_OFFSET))(this, startPosition, endPosition);
		}

		::System::Boolean Set(::System::String* input)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_OFFSET))(this, input);
		}

		::System::Boolean Set_1(::System::String* input, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_1_OFFSET))(this, input, testPosition, resultHint);
		}

		::System::Void SetChar(::System::Char input, ::System::Int32 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SETCHAR_OFFSET))(this, input, position);
		}

		::System::Void SetChar_1(::System::Char input, ::System::Int32 position, ::System::ComponentModel::MaskedTextProvider_CharDescriptor* charDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Int32, ::System::ComponentModel::MaskedTextProvider_CharDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SETCHAR_1_OFFSET))(this, input, position, charDescriptor);
		}

		::System::Void SetString(::System::String* input, ::System::Int32 testPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SETSTRING_OFFSET))(this, input, testPosition);
		}

		::System::Boolean TestChar(::System::Char input, ::System::Int32 position, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTCHAR_OFFSET))(this, input, position, resultHint);
		}

		::System::Boolean TestEscapeChar(::System::Char input, ::System::Int32 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTESCAPECHAR_OFFSET))(this, input, position);
		}

		::System::Boolean TestEscapeChar_1(::System::Char input, ::System::Int32 position, ::System::ComponentModel::MaskedTextProvider_CharDescriptor* charDex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32, ::System::ComponentModel::MaskedTextProvider_CharDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTESCAPECHAR_1_OFFSET))(this, input, position, charDex);
		}

		::System::Boolean TestSetChar(::System::Char input, ::System::Int32 position, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTSETCHAR_OFFSET))(this, input, position, resultHint);
		}

		::System::Boolean TestSetString(::System::String* input, ::System::Int32 position, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTSETSTRING_OFFSET))(this, input, position, testPosition, resultHint);
		}

		::System::Boolean TestString(::System::String* input, ::System::Int32 position, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTSTRING_OFFSET))(this, input, position, testPosition, resultHint);
		}

		::System::String* ToDisplayString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TODISPLAYSTRING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Boolean ignorePasswordChar)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_1_OFFSET))(this, ignorePasswordChar);
		}

		::System::String* ToString_2(::System::Int32 startPosition, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_2_OFFSET))(this, startPosition, length);
		}

		::System::String* ToString_3(::System::Boolean ignorePasswordChar, ::System::Int32 startPosition, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_3_OFFSET))(this, ignorePasswordChar, startPosition, length);
		}

		::System::String* ToString_4(::System::Boolean includePrompt, ::System::Boolean includeLiterals)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_4_OFFSET))(this, includePrompt, includeLiterals);
		}

		::System::String* ToString_5(::System::Boolean includePrompt, ::System::Boolean includeLiterals, ::System::Int32 startPosition, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_5_OFFSET))(this, includePrompt, includeLiterals, startPosition, length);
		}

		::System::String* ToString_6(::System::Boolean ignorePasswordChar, ::System::Boolean includePrompt, ::System::Boolean includeLiterals, ::System::Int32 startPosition, ::System::Int32 length)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_6_OFFSET))(this, ignorePasswordChar, includePrompt, includeLiterals, startPosition, length);
		}

		::System::Boolean VerifyChar(::System::Char input, ::System::Int32 position, ::System::ComponentModel::MaskedTextResultHint& hint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYCHAR_OFFSET))(this, input, position, hint);
		}

		::System::Boolean VerifyEscapeChar(::System::Char input, ::System::Int32 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYESCAPECHAR_OFFSET))(this, input, position);
		}

		::System::Boolean VerifyString(::System::String* input)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYSTRING_OFFSET))(this, input);
		}

		::System::Boolean VerifyString_1(::System::String* input, ::System::Int32& testPosition, ::System::ComponentModel::MaskedTextResultHint& resultHint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::ComponentModel::MaskedTextResultHint&))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYSTRING_1_OFFSET))(this, input, testPosition, resultHint);
		}
	};
}
