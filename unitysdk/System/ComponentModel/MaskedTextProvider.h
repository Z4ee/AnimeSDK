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

#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_1_OFFSET UNITYSDK_OFFSET(0x1BEBC2E0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_2_OFFSET UNITYSDK_OFFSET(0x1BEBC4F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_3_OFFSET UNITYSDK_OFFSET(0x1BEBC520)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ADD_OFFSET UNITYSDK_OFFSET(0x1BEBC2B0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1BEBC670)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BEBC620)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_CLONE_OFFSET UNITYSDK_OFFSET(0x1BEBA9A0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDASSIGNEDEDITPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x1BEBBD10)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDASSIGNEDEDITPOSITIONINRANGE_OFFSET UNITYSDK_OFFSET(0x1BEBC780)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDEDITPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x1BEBC410)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDEDITPOSITIONINRANGE_1_OFFSET UNITYSDK_OFFSET(0x1BEBC7B0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDEDITPOSITIONINRANGE_OFFSET UNITYSDK_OFFSET(0x1BEBC950)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDNONEDITPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x1BEBCA50)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDNONEDITPOSITIONINRANGE_OFFSET UNITYSDK_OFFSET(0x1BEBCAA0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDPOSITIONINRANGE_OFFSET UNITYSDK_OFFSET(0x1BEBC970)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDUNASSIGNEDEDITPOSITIONFROM_OFFSET UNITYSDK_OFFSET(0x1BEBCAC0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_FINDUNASSIGNEDEDITPOSITIONINRANGE_OFFSET UNITYSDK_OFFSET(0x1BEBCB00)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GETOPERATIONRESULTFROMHINT_OFFSET UNITYSDK_OFFSET(0x1BEBCC40)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ALLOWPROMPTASINPUT_OFFSET UNITYSDK_OFFSET(0x1BEBA910)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ASCIIONLY_OFFSET UNITYSDK_OFFSET(0x1BEBB570)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ASSIGNEDEDITPOSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BEBA970)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_AVAILABLEEDITPOSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BEBA980)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_CULTURE_OFFSET UNITYSDK_OFFSET(0x1BEBBA10)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_DEFAULTPASSWORDCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBBA20)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_EDITPOSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1BEBA990)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_EDITPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1BEBBA30)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_INCLUDELITERALS_OFFSET UNITYSDK_OFFSET(0x1BEBB870)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_INCLUDEPROMPT_OFFSET UNITYSDK_OFFSET(0x1BEBB940)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_INVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x1BEBBC30)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ISPASSWORD_OFFSET UNITYSDK_OFFSET(0x1BEBBC00)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BEBC210)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_LASTASSIGNEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1BEBBC40)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1BEBBD70)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_MASKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1BEBBDA0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_MASKFULL_OFFSET UNITYSDK_OFFSET(0x1BEBBDB0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_MASK_OFFSET UNITYSDK_OFFSET(0x1BEBBD90)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_PASSWORDCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBBDC0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_PROMPTCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBBFB0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_RESETONPROMPT_OFFSET UNITYSDK_OFFSET(0x1BEBB750)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_RESETONSPACE_OFFSET UNITYSDK_OFFSET(0x1BEBB7B0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_GET_SKIPLITERALS_OFFSET UNITYSDK_OFFSET(0x1BEBB810)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BEB9FC0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTATINT_OFFSET UNITYSDK_OFFSET(0x1BEBCED0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_1_OFFSET UNITYSDK_OFFSET(0x1BEBCD70)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_2_OFFSET UNITYSDK_OFFSET(0x1BEBCD40)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_3_OFFSET UNITYSDK_OFFSET(0x1BEBCE10)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_INSERTAT_OFFSET UNITYSDK_OFFSET(0x1BEBCC50)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISACIIALPHANUMERIC_OFFSET UNITYSDK_OFFSET(0x1BEBDF20)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISALPHANUMERIC_OFFSET UNITYSDK_OFFSET(0x1BEBDF40)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISASCIILETTER_OFFSET UNITYSDK_OFFSET(0x1BEBDF70)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISASCII_OFFSET UNITYSDK_OFFSET(0x1BEBDF10)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISAVAILABLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1BEBDF80)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISEDITPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1BEBA8F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISEDITPOSITION_OFFSET UNITYSDK_OFFSET(0x1BEBC160)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISLITERALPOSITION_OFFSET UNITYSDK_OFFSET(0x1BEBE030)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISPRINTABLECHAR_OFFSET UNITYSDK_OFFSET(0x1BEB9F80)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISVALIDINPUTCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBE060)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISVALIDMASKCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBE0E0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_ISVALIDPASSWORDCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBBF30)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEATINT_OFFSET UNITYSDK_OFFSET(0x1BEBE2F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEAT_1_OFFSET UNITYSDK_OFFSET(0x1BEBE230)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEAT_2_OFFSET UNITYSDK_OFFSET(0x1BEBE290)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1BEBE1E0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1BEBE190)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1BEBE160)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x1BEBE9C0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_2_OFFSET UNITYSDK_OFFSET(0x1BEBEBE0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_3_OFFSET UNITYSDK_OFFSET(0x1BEBF110)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_4_OFFSET UNITYSDK_OFFSET(0x1BEBF140)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_5_OFFSET UNITYSDK_OFFSET(0x1BEBED60)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_REPLACE_OFFSET UNITYSDK_OFFSET(0x1BEBB720)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_RESETCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBC6D0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_RESETSTRING_OFFSET UNITYSDK_OFFSET(0x1BEBE750)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SETCHAR_1_OFFSET UNITYSDK_OFFSET(0x1BEBF460)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SETCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBDCE0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SETSTRING_OFFSET UNITYSDK_OFFSET(0x1BEBDD50)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_1_OFFSET UNITYSDK_OFFSET(0x1BEBF270)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_INCLUDELITERALS_OFFSET UNITYSDK_OFFSET(0x1BEBB8D0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_INCLUDEPROMPT_OFFSET UNITYSDK_OFFSET(0x1BEBB9A0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_ISPASSWORD_OFFSET UNITYSDK_OFFSET(0x1BEBBC10)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_OFFSET UNITYSDK_OFFSET(0x1BEBF240)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_PASSWORDCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBBDD0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_PROMPTCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBBFC0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_RESETONPROMPT_OFFSET UNITYSDK_OFFSET(0x1BEBB5D0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_RESETONSPACE_OFFSET UNITYSDK_OFFSET(0x1BEBB640)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_SET_SKIPLITERALS_OFFSET UNITYSDK_OFFSET(0x1BEBB6B0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBD5B0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTESCAPECHAR_1_OFFSET UNITYSDK_OFFSET(0x1BEBF5E0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTESCAPECHAR_OFFSET UNITYSDK_OFFSET(0x1BEBEB70)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTSETCHAR_OFFSET UNITYSDK_OFFSET(0x1BEBC460)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTSETSTRING_OFFSET UNITYSDK_OFFSET(0x1BEBC5E0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TESTSTRING_OFFSET UNITYSDK_OFFSET(0x1BEBD380)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TODISPLAYSTRING_OFFSET UNITYSDK_OFFSET(0x1BEBF7F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1BEC00E0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1BEC0200)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x1BEC0300)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_4_OFFSET UNITYSDK_OFFSET(0x1BEC0410)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_5_OFFSET UNITYSDK_OFFSET(0x1BEC0450)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_6_OFFSET UNITYSDK_OFFSET(0x1BEBFB40)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BEBFA20)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYCHAR_OFFSET UNITYSDK_OFFSET(0x1BEC0480)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYESCAPECHAR_OFFSET UNITYSDK_OFFSET(0x1BEC04D0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYSTRING_1_OFFSET UNITYSDK_OFFSET(0x1BEC05B0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER_VERIFYSTRING_OFFSET UNITYSDK_OFFSET(0x1BEC0570)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEC05F0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEB9E90)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BEB9EC0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BEB9EF0)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BEB9F20)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1BEB9F50)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1BEB9A90)
#define SYSTEM_COMPONENTMODEL_MASKEDTEXTPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB9A60)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MaskedTextProvider_TypeDefinitionIndex = 2944;

	class MaskedTextProvider : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_maskTextProviderType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x3680);
		}
		static ::System::Int32* StaticGet_INCLUDE_PROMPT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13C0);
		}
		static ::System::Int32* StaticGet_SKIP_SPACE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13C4);
		}
		static ::System::Int32* StaticGet_RESET_ON_PROMPT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13C8);
		}
		static ::System::Int32* StaticGet_RESET_ON_LITERALS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13CC);
		}
		static ::System::Int32* StaticGet_INCLUDE_LITERALS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13D0);
		}
		static ::System::Int32* StaticGet_ALLOW_PROMPT_AS_INPUT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MaskedTextProvider_TypeDefinitionIndex)->GetStaticField(0x13D4);
		}
		static ::System::Int32* StaticGet_ASCII_ONLY()
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
		::System::Text::StringBuilder* testString; // 0x20
		::System::String* mask; // 0x28
		::System::Int32 optionalEditChars; // 0x30
		::System::Int32 requiredEditChars; // 0x34
		::System::Int32 assignedCharCount; // 0x38
		::System::Char passwordChar; // 0x3C
		::System::Char promptChar; // 0x3E
		::System::Int32 requiredCharCount; // 0x40
		::System::Collections::Specialized::BitVector32 flagState; // 0x44

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
