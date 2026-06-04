#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1AFF3380)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CHECKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AFF3220)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWLPOS_OFFSET UNITYSDK_OFFSET(0x1AFF3430)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWL_OFFSET UNITYSDK_OFFSET(0x1AFFD460)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOCHECKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1AFFD240)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLECRAWL_OFFSET UNITYSDK_OFFSET(0x1AFFD3F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLESTACK_OFFSET UNITYSDK_OFFSET(0x1AFFD310)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLETRACK_OFFSET UNITYSDK_OFFSET(0x1AFFD380)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ENSURESTORAGE_OFFSET UNITYSDK_OFFSET(0x1AFEDE00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_INITMATCH_OFFSET UNITYSDK_OFFSET(0x1AFFD000)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1AFF3450)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISECMABOUNDARY_OFFSET UNITYSDK_OFFSET(0x1AFF3570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x1AFF3240)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHINDEX_OFFSET UNITYSDK_OFFSET(0x1AFF3660)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHLENGTH_OFFSET UNITYSDK_OFFSET(0x1AFF3690)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_POPCRAWL_OFFSET UNITYSDK_OFFSET(0x1AFFD500)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_SCAN_OFFSET UNITYSDK_OFFSET(0x1AFE33A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_STARTTIMEOUTWATCH_OFFSET UNITYSDK_OFFSET(0x1AFFCFA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TIDYMATCH_OFFSET UNITYSDK_OFFSET(0x1AFFD200)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TRANSFERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1AFF3270)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_UNCAPTURE_OFFSET UNITYSDK_OFFSET(0x1AFF33E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFEDC30)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexRunner_TypeDefinitionIndex = 2516;

	class RegexRunner : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* runstack; // 0x10
		::Il2CppArray<::System::Int32>* runtrack; // 0x18
		::System::String* runtext; // 0x20
		::Il2CppArray<::System::Int32>* runcrawl; // 0x28
		::System::Text::RegularExpressions::Regex* runregex; // 0x30
		::System::Text::RegularExpressions::Match* runmatch; // 0x38
		::System::Int32 runtextstart; // 0x40
		::System::Int32 runtrackcount; // 0x44
		::System::Int32 timeout; // 0x48
		::System::Int32 runtextend; // 0x4C
		::System::Int32 timeoutOccursAt; // 0x50
		::System::Int32 timeoutChecksToSkip; // 0x54
		::System::Int32 runtextpos; // 0x58
		::System::Int32 runtrackpos; // 0x5C
		::System::Int32 runcrawlpos; // 0x60
		::System::Int32 runstackpos; // 0x64
		::System::Int32 runtextbeg; // 0x68
		::System::Boolean ignoreTimeout; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER__CTOR_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Match* Scan(::System::Text::RegularExpressions::Regex* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::TimeSpan a8)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_SCAN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void StartTimeoutWatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_STARTTIMEOUTWATCH_OFFSET))(this);
		}

		::System::Void CheckTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CHECKTIMEOUT_OFFSET))(this);
		}

		::System::Void DoCheckTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOCHECKTIMEOUT_OFFSET))(this);
		}

		::System::Void InitMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_INITMATCH_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Match* TidyMatch(::System::Boolean a1)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TIDYMATCH_OFFSET))(this, a1);
		}

		::System::Void EnsureStorage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ENSURESTORAGE_OFFSET))(this);
		}

		::System::Boolean IsBoundary(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISBOUNDARY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsECMABoundary(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISECMABOUNDARY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoubleTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLETRACK_OFFSET))(this);
		}

		::System::Void DoubleStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLESTACK_OFFSET))(this);
		}

		::System::Void DoubleCrawl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLECRAWL_OFFSET))(this);
		}

		::System::Void Crawl(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWL_OFFSET))(this, a1);
		}

		::System::Int32 Popcrawl()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_POPCRAWL_OFFSET))(this);
		}

		::System::Int32 Crawlpos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWLPOS_OFFSET))(this);
		}

		::System::Void Capture(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CAPTURE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TransferCapture(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TRANSFERCAPTURE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Uncapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_UNCAPTURE_OFFSET))(this);
		}

		::System::Boolean IsMatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISMATCHED_OFFSET))(this, a1);
		}

		::System::Int32 MatchIndex(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHINDEX_OFFSET))(this, a1);
		}

		::System::Int32 MatchLength(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHLENGTH_OFFSET))(this, a1);
		}
	};
}
