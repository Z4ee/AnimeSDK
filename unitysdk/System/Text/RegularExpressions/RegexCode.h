#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class ArgumentException; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class RegexBoyerMoore; }
namespace System::Text::RegularExpressions { class RegexPrefix; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_MAKEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x19A74C90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_OPCODEBACKTRACKS_OFFSET UNITYSDK_OFFSET(0x19A74BB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_OPCODESIZE_OFFSET UNITYSDK_OFFSET(0x19A74BD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A74AD0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexCode_TypeDefinitionIndex = 2731;

	class RegexCode : public ::System::Object
	{
	public:
		// static const ::System::Int32 Onerep = 0x0; // 0x0
		// static const ::System::Int32 Notonerep = 0x1; // 0x0
		// static const ::System::Int32 Setrep = 0x2; // 0x0
		// static const ::System::Int32 Oneloop = 0x3; // 0x0
		// static const ::System::Int32 Notoneloop = 0x4; // 0x0
		// static const ::System::Int32 Setloop = 0x5; // 0x0
		// static const ::System::Int32 Onelazy = 0x6; // 0x0
		// static const ::System::Int32 Notonelazy = 0x7; // 0x0
		// static const ::System::Int32 Setlazy = 0x8; // 0x0
		// static const ::System::Int32 One = 0x9; // 0x0
		// static const ::System::Int32 Notone = 0xA; // 0x0
		// static const ::System::Int32 Set = 0xB; // 0x0
		// static const ::System::Int32 Multi = 0xC; // 0x0
		// static const ::System::Int32 Ref = 0xD; // 0x0
		// static const ::System::Int32 Bol = 0xE; // 0x0
		// static const ::System::Int32 Eol = 0xF; // 0x0
		// static const ::System::Int32 Boundary = 0x10; // 0x0
		// static const ::System::Int32 Nonboundary = 0x11; // 0x0
		// static const ::System::Int32 Beginning = 0x12; // 0x0
		// static const ::System::Int32 Start = 0x13; // 0x0
		// static const ::System::Int32 EndZ = 0x14; // 0x0
		// static const ::System::Int32 End = 0x15; // 0x0
		// static const ::System::Int32 Nothing = 0x16; // 0x0
		// static const ::System::Int32 Lazybranch = 0x17; // 0x0
		// static const ::System::Int32 Branchmark = 0x18; // 0x0
		// static const ::System::Int32 Lazybranchmark = 0x19; // 0x0
		// static const ::System::Int32 Nullcount = 0x1A; // 0x0
		// static const ::System::Int32 Setcount = 0x1B; // 0x0
		// static const ::System::Int32 Branchcount = 0x1C; // 0x0
		// static const ::System::Int32 Lazybranchcount = 0x1D; // 0x0
		// static const ::System::Int32 Nullmark = 0x1E; // 0x0
		// static const ::System::Int32 Setmark = 0x1F; // 0x0
		// static const ::System::Int32 Capturemark = 0x20; // 0x0
		// static const ::System::Int32 Getmark = 0x21; // 0x0
		// static const ::System::Int32 Setjump = 0x22; // 0x0
		// static const ::System::Int32 Backjump = 0x23; // 0x0
		// static const ::System::Int32 Forejump = 0x24; // 0x0
		// static const ::System::Int32 Testref = 0x25; // 0x0
		// static const ::System::Int32 Goto = 0x26; // 0x0
		// static const ::System::Int32 Prune = 0x27; // 0x0
		// static const ::System::Int32 Stop = 0x28; // 0x0
		// static const ::System::Int32 ECMABoundary = 0x29; // 0x0
		// static const ::System::Int32 NonECMABoundary = 0x2A; // 0x0
		// static const ::System::Int32 Mask = 0x3F; // 0x0
		// static const ::System::Int32 Rtl = 0x40; // 0x0
		// static const ::System::Int32 Back = 0x80; // 0x0
		// static const ::System::Int32 Back2 = 0x100; // 0x0
		// static const ::System::Int32 Ci = 0x200; // 0x0
		::System::Collections::Hashtable* _caps; // 0x10
		::Il2CppArray<::System::String*>* _strings; // 0x18
		::System::Text::RegularExpressions::RegexPrefix* _fcPrefix; // 0x20
		::System::Text::RegularExpressions::RegexBoyerMoore* _bmPrefix; // 0x28
		::Il2CppArray<::System::Int32>* _codes; // 0x30
		::System::Boolean _rightToLeft; // 0x38
		::System::Int32 _capsize; // 0x3C
		::System::Int32 _trackcount; // 0x40
		::System::Int32 _anchors; // 0x44

		::System::Void _ctor(::Il2CppArray<::System::Int32>* codes, ::System::Collections::Generic::List_1<::System::String*>* stringlist, ::System::Int32 trackcount, ::System::Collections::Hashtable* caps, ::System::Int32 capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix, ::System::Text::RegularExpressions::RegexPrefix* fcPrefix, ::System::Int32 anchors, ::System::Boolean rightToLeft)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Collections::Hashtable*, ::System::Int32, ::System::Text::RegularExpressions::RegexBoyerMoore*, ::System::Text::RegularExpressions::RegexPrefix*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE__CTOR_OFFSET))(this, codes, stringlist, trackcount, caps, capsize, bmPrefix, fcPrefix, anchors, rightToLeft);
		}

		static ::System::Boolean OpcodeBacktracks(::System::Int32 Op)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_OPCODEBACKTRACKS_OFFSET))(Op);
		}

		static ::System::Int32 OpcodeSize(::System::Int32 Opcode)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_OPCODESIZE_OFFSET))(Opcode);
		}

		static ::System::ArgumentException* MakeException(::System::String* message)
		{
			return ((::System::ArgumentException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXCODE_MAKEEXCEPTION_OFFSET))(message);
		}
	};
}
