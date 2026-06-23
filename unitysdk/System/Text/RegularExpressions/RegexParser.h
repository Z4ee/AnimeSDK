#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

namespace System { class ArgumentException; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Text::RegularExpressions { class RegexCharClass; }
namespace System::Text::RegularExpressions { class RegexNode; }
namespace System::Text::RegularExpressions { class RegexReplacement; }
namespace System::Text::RegularExpressions { class RegexTree; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDALTERNATE_OFFSET UNITYSDK_OFFSET(0x1C1E3500)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_1_OFFSET UNITYSDK_OFFSET(0x1C1E3FE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_2_OFFSET UNITYSDK_OFFSET(0x1C1E41D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_OFFSET UNITYSDK_OFFSET(0x1C1E2280)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDGROUP_OFFSET UNITYSDK_OFFSET(0x1C1E37E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITNODE_OFFSET UNITYSDK_OFFSET(0x1C1E7B60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITNOTONE_OFFSET UNITYSDK_OFFSET(0x1C1E3F60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITONE_OFFSET UNITYSDK_OFFSET(0x1C1E2600)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITSET_OFFSET UNITYSDK_OFFSET(0x1C1E2690)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITTYPE_OFFSET UNITYSDK_OFFSET(0x1C1E3F00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ASSIGNNAMESLOTS_OFFSET UNITYSDK_OFFSET(0x1C1E7140)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CAPTURESLOTFROMNAME_OFFSET UNITYSDK_OFFSET(0x1C1E5C60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CHARAT_OFFSET UNITYSDK_OFFSET(0x1C1E2580)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CHARSRIGHT_OFFSET UNITYSDK_OFFSET(0x1C1E1D40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_COUNTCAPTURES_OFFSET UNITYSDK_OFFSET(0x1C1DE8F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_EMPTYOPTIONSSTACK_OFFSET UNITYSDK_OFFSET(0x1C1E6F90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_EMPTYSTACK_OFFSET UNITYSDK_OFFSET(0x1C1E35D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ESCAPE_OFFSET UNITYSDK_OFFSET(0x1C1E0810)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_HEXDIGIT_OFFSET UNITYSDK_OFFSET(0x1C1E6D00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISCAPTURENAME_OFFSET UNITYSDK_OFFSET(0x1C1E5C40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISCAPTURESLOT_OFFSET UNITYSDK_OFFSET(0x1C1E5BC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISMETACHAR_OFFSET UNITYSDK_OFFSET(0x1C1E0D20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISONLYTOPOPTION_OFFSET UNITYSDK_OFFSET(0x1C1E6E40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISQUANTIFIER_OFFSET UNITYSDK_OFFSET(0x1C1E21E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSPACE_OFFSET UNITYSDK_OFFSET(0x1C1E5F10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x1C1E2140)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSTOPPERX_OFFSET UNITYSDK_OFFSET(0x1C1E1DF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISTRUEQUANTIFIER_OFFSET UNITYSDK_OFFSET(0x1C1E1E90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MAKEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C1E35E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVELEFT_OFFSET UNITYSDK_OFFSET(0x1C1E3FD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHTGETCHAR_OFFSET UNITYSDK_OFFSET(0x1C1E4010)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHT_1_OFFSET UNITYSDK_OFFSET(0x1C1E5BA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHT_OFFSET UNITYSDK_OFFSET(0x1C1E1D30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURENAME_OFFSET UNITYSDK_OFFSET(0x1C1E6FB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURESLOT_OFFSET UNITYSDK_OFFSET(0x1C1E6EA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURES_OFFSET UNITYSDK_OFFSET(0x1C1E05E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_OPTIONFROMCODE_OFFSET UNITYSDK_OFFSET(0x1C1E6E60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C1E5720)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSEREPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1C1E0410)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSE_OFFSET UNITYSDK_OFFSET(0x1C1DE510)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPGROUP_OFFSET UNITYSDK_OFFSET(0x1C1E3910)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPKEEPOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C1E3450)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C1E39E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PUSHGROUP_OFFSET UNITYSDK_OFFSET(0x1C1E34B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PUSHOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C1E26F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RESET_OFFSET UNITYSDK_OFFSET(0x1C1DF0D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RIGHTCHAR_1_OFFSET UNITYSDK_OFFSET(0x1C1E5B20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RIGHTCHAR_OFFSET UNITYSDK_OFFSET(0x1C1E1D70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBACKSLASH_OFFSET UNITYSDK_OFFSET(0x1C1E3A70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBASICBACKSLASH_OFFSET UNITYSDK_OFFSET(0x1C1E6020)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBLANK_OFFSET UNITYSDK_OFFSET(0x1C1E15E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCAPNAME_OFFSET UNITYSDK_OFFSET(0x1C1E5A20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARCLASS_1_OFFSET UNITYSDK_OFFSET(0x1C1E4990)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARCLASS_OFFSET UNITYSDK_OFFSET(0x1C1E2680)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARESCAPE_OFFSET UNITYSDK_OFFSET(0x1C1E11D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCONTROL_OFFSET UNITYSDK_OFFSET(0x1C1E6D30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANDECIMAL_OFFSET UNITYSDK_OFFSET(0x1C1E4090)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANDOLLAR_OFFSET UNITYSDK_OFFSET(0x1C1E4220)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANGROUPOPEN_OFFSET UNITYSDK_OFFSET(0x1C1E2740)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANHEX_OFFSET UNITYSDK_OFFSET(0x1C1E6B40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANOCTAL_OFFSET UNITYSDK_OFFSET(0x1C1E6A50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C1E5D30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANREGEX_OFFSET UNITYSDK_OFFSET(0x1C1DF160)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANREPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1C1E05F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SETPATTERN_OFFSET UNITYSDK_OFFSET(0x1C1DE8C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_STARTGROUP_OFFSET UNITYSDK_OFFSET(0x1C1E1570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TEXTPOS_OFFSET UNITYSDK_OFFSET(0x1C1E7B70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TEXTTO_OFFSET UNITYSDK_OFFSET(0x1C1E7B80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TYPEFROMCODE_OFFSET UNITYSDK_OFFSET(0x1C1E5FB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x1C1E0DC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_UNIT_OFFSET UNITYSDK_OFFSET(0x1C1E7B50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONE_OFFSET UNITYSDK_OFFSET(0x1C1E5710)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONI_OFFSET UNITYSDK_OFFSET(0x1C1E2670)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONM_OFFSET UNITYSDK_OFFSET(0x1C1E3EF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONN_OFFSET UNITYSDK_OFFSET(0x1C1E5BB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C1E3F50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONX_OFFSET UNITYSDK_OFFSET(0x1C1E1D20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1E7B90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DE7D0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexParser_TypeDefinitionIndex = 2746;

	class RegexParser : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet__category()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(RegexParser_TypeDefinitionIndex)->GetStaticField(0x3650);
		}
		// static const ::System::Int32 MaxValueDiv10 = 0xCCCCCCC; // 0x0
		// static const ::System::Int32 MaxValueMod10 = 0x7; // 0x0
		// static const ::System::Byte Q = 0x5; // 0x0
		// static const ::System::Byte S = 0x4; // 0x0
		// static const ::System::Byte Z = 0x3; // 0x0
		// static const ::System::Byte X = 0x2; // 0x0
		// static const ::System::Byte E = 0x1; // 0x0
		::System::Text::RegularExpressions::RegexNode* _unit; // 0x10
		::System::String* _pattern; // 0x18
		::System::Text::RegularExpressions::RegexNode* _alternation; // 0x20
		::System::Text::RegularExpressions::RegexNode* _group; // 0x28
		::System::Text::RegularExpressions::RegexNode* _concatenation; // 0x30
		::Il2CppArray<::System::Int32>* _capnumlist; // 0x38
		::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexOptions>* _optionsStack; // 0x40
		::System::Collections::Hashtable* _capnames; // 0x48
		::System::Globalization::CultureInfo* _culture; // 0x50
		::System::Collections::Hashtable* _caps; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* _capnamelist; // 0x60
		::System::Text::RegularExpressions::RegexNode* _stack; // 0x68
		::System::Int32 _capcount; // 0x70
		::System::Int32 _captop; // 0x74
		::System::Text::RegularExpressions::RegexOptions _options; // 0x78
		::System::Boolean _ignoreNextParen; // 0x7C
		::System::Int32 _capsize; // 0x80
		::System::Int32 _currentPos; // 0x84
		::System::Int32 _autocap; // 0x88

		::System::Void _ctor(::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER__CTOR_OFFSET))(this, culture);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER__CCTOR_OFFSET))();
		}

		static ::System::Text::RegularExpressions::RegexTree* Parse(::System::String* re, ::System::Text::RegularExpressions::RegexOptions op)
		{
			return ((::System::Text::RegularExpressions::RegexTree*(*)(::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSE_OFFSET))(re, op);
		}

		static ::System::Text::RegularExpressions::RegexReplacement* ParseReplacement(::System::String* rep, ::System::Collections::Hashtable* caps, ::System::Int32 capsize, ::System::Collections::Hashtable* capnames, ::System::Text::RegularExpressions::RegexOptions op)
		{
			return ((::System::Text::RegularExpressions::RegexReplacement*(*)(::System::String*, ::System::Collections::Hashtable*, ::System::Int32, ::System::Collections::Hashtable*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSEREPLACEMENT_OFFSET))(rep, caps, capsize, capnames, op);
		}

		static ::System::String* Escape(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ESCAPE_OFFSET))(input);
		}

		static ::System::String* Unescape(::System::String* input)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_UNESCAPE_OFFSET))(input);
		}

		::System::Void SetPattern(::System::String* Re)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SETPATTERN_OFFSET))(this, Re);
		}

		::System::Void Reset(::System::Text::RegularExpressions::RegexOptions topopts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RESET_OFFSET))(this, topopts);
		}

		::System::Text::RegularExpressions::RegexNode* ScanRegex()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANREGEX_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ScanReplacement()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANREPLACEMENT_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexCharClass* ScanCharClass(::System::Boolean caseInsensitive)
		{
			return ((::System::Text::RegularExpressions::RegexCharClass*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARCLASS_OFFSET))(this, caseInsensitive);
		}

		::System::Text::RegularExpressions::RegexCharClass* ScanCharClass_1(::System::Boolean caseInsensitive, ::System::Boolean scanOnly)
		{
			return ((::System::Text::RegularExpressions::RegexCharClass*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARCLASS_1_OFFSET))(this, caseInsensitive, scanOnly);
		}

		::System::Text::RegularExpressions::RegexNode* ScanGroupOpen()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANGROUPOPEN_OFFSET))(this);
		}

		::System::Void ScanBlank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBLANK_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ScanBackslash()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBACKSLASH_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ScanBasicBackslash()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANBASICBACKSLASH_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ScanDollar()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANDOLLAR_OFFSET))(this);
		}

		::System::String* ScanCapname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCAPNAME_OFFSET))(this);
		}

		::System::Char ScanOctal()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANOCTAL_OFFSET))(this);
		}

		::System::Int32 ScanDecimal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANDECIMAL_OFFSET))(this);
		}

		::System::Char ScanHex(::System::Int32 c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANHEX_OFFSET))(this, c);
		}

		static ::System::Int32 HexDigit(::System::Char ch)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_HEXDIGIT_OFFSET))(ch);
		}

		::System::Char ScanControl()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCONTROL_OFFSET))(this);
		}

		::System::Boolean IsOnlyTopOption(::System::Text::RegularExpressions::RegexOptions option)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISONLYTOPOPTION_OFFSET))(this, option);
		}

		::System::Void ScanOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANOPTIONS_OFFSET))(this);
		}

		::System::Char ScanCharEscape()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_SCANCHARESCAPE_OFFSET))(this);
		}

		::System::String* ParseProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PARSEPROPERTY_OFFSET))(this);
		}

		::System::Int32 TypeFromCode(::System::Char ch)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TYPEFROMCODE_OFFSET))(this, ch);
		}

		static ::System::Text::RegularExpressions::RegexOptions OptionFromCode(::System::Char ch)
		{
			return ((::System::Text::RegularExpressions::RegexOptions(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_OPTIONFROMCODE_OFFSET))(ch);
		}

		::System::Void CountCaptures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_COUNTCAPTURES_OFFSET))(this);
		}

		::System::Void NoteCaptureSlot(::System::Int32 i, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURESLOT_OFFSET))(this, i, pos);
		}

		::System::Void NoteCaptureName(::System::String* name, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURENAME_OFFSET))(this, name, pos);
		}

		::System::Void NoteCaptures(::System::Collections::Hashtable* caps, ::System::Int32 capsize, ::System::Collections::Hashtable* capnames)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*, ::System::Int32, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_NOTECAPTURES_OFFSET))(this, caps, capsize, capnames);
		}

		::System::Void AssignNameSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ASSIGNNAMESLOTS_OFFSET))(this);
		}

		::System::Int32 CaptureSlotFromName(::System::String* capname)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CAPTURESLOTFROMNAME_OFFSET))(this, capname);
		}

		::System::Boolean IsCaptureSlot(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISCAPTURESLOT_OFFSET))(this, i);
		}

		::System::Boolean IsCaptureName(::System::String* capname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISCAPTURENAME_OFFSET))(this, capname);
		}

		::System::Boolean UseOptionN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONN_OFFSET))(this);
		}

		::System::Boolean UseOptionI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONI_OFFSET))(this);
		}

		::System::Boolean UseOptionM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONM_OFFSET))(this);
		}

		::System::Boolean UseOptionS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONS_OFFSET))(this);
		}

		::System::Boolean UseOptionX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONX_OFFSET))(this);
		}

		::System::Boolean UseOptionE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_USEOPTIONE_OFFSET))(this);
		}

		static ::System::Boolean IsSpecial(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSPECIAL_OFFSET))(ch);
		}

		static ::System::Boolean IsStopperX(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSTOPPERX_OFFSET))(ch);
		}

		static ::System::Boolean IsQuantifier(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISQUANTIFIER_OFFSET))(ch);
		}

		::System::Boolean IsTrueQuantifier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISTRUEQUANTIFIER_OFFSET))(this);
		}

		static ::System::Boolean IsSpace(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISSPACE_OFFSET))(ch);
		}

		static ::System::Boolean IsMetachar(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ISMETACHAR_OFFSET))(ch);
		}

		::System::Void AddConcatenate(::System::Int32 pos, ::System::Int32 cch, ::System::Boolean isReplacement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_OFFSET))(this, pos, cch, isReplacement);
		}

		::System::Void PushGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PUSHGROUP_OFFSET))(this);
		}

		::System::Void PopGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPGROUP_OFFSET))(this);
		}

		::System::Boolean EmptyStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_EMPTYSTACK_OFFSET))(this);
		}

		::System::Void StartGroup(::System::Text::RegularExpressions::RegexNode* openGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexNode*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_STARTGROUP_OFFSET))(this, openGroup);
		}

		::System::Void AddAlternate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDALTERNATE_OFFSET))(this);
		}

		::System::Void AddConcatenate_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_1_OFFSET))(this);
		}

		::System::Void AddConcatenate_2(::System::Boolean lazy, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDCONCATENATE_2_OFFSET))(this, lazy, min, max);
		}

		::System::Text::RegularExpressions::RegexNode* Unit()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_UNIT_OFFSET))(this);
		}

		::System::Void AddUnitOne(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITONE_OFFSET))(this, ch);
		}

		::System::Void AddUnitNotone(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITNOTONE_OFFSET))(this, ch);
		}

		::System::Void AddUnitSet(::System::String* cc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITSET_OFFSET))(this, cc);
		}

		::System::Void AddUnitNode(::System::Text::RegularExpressions::RegexNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexNode*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITNODE_OFFSET))(this, node);
		}

		::System::Void AddUnitType(::System::Int32 type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDUNITTYPE_OFFSET))(this, type);
		}

		::System::Void AddGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_ADDGROUP_OFFSET))(this);
		}

		::System::Void PushOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_PUSHOPTIONS_OFFSET))(this);
		}

		::System::Void PopOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPOPTIONS_OFFSET))(this);
		}

		::System::Boolean EmptyOptionsStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_EMPTYOPTIONSSTACK_OFFSET))(this);
		}

		::System::Void PopKeepOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_POPKEEPOPTIONS_OFFSET))(this);
		}

		::System::ArgumentException* MakeException(::System::String* message)
		{
			return ((::System::ArgumentException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MAKEEXCEPTION_OFFSET))(this, message);
		}

		::System::Int32 Textpos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TEXTPOS_OFFSET))(this);
		}

		::System::Void Textto(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_TEXTTO_OFFSET))(this, pos);
		}

		::System::Char MoveRightGetChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHTGETCHAR_OFFSET))(this);
		}

		::System::Void MoveRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHT_OFFSET))(this);
		}

		::System::Void MoveRight_1(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVERIGHT_1_OFFSET))(this, i);
		}

		::System::Void MoveLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_MOVELEFT_OFFSET))(this);
		}

		::System::Char CharAt(::System::Int32 i)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CHARAT_OFFSET))(this, i);
		}

		::System::Char RightChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RIGHTCHAR_OFFSET))(this);
		}

		::System::Char RightChar_1(::System::Int32 i)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_RIGHTCHAR_1_OFFSET))(this, i);
		}

		::System::Int32 CharsRight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXPARSER_CHARSRIGHT_OFFSET))(this);
		}
	};
}
