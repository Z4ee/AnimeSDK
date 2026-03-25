#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x18756BE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CHECKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x18756A80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWLPOS_OFFSET UNITYSDK_OFFSET(0x18756CA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWL_OFFSET UNITYSDK_OFFSET(0x187607B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOCHECKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x18760590)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLECRAWL_OFFSET UNITYSDK_OFFSET(0x18760740)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLESTACK_OFFSET UNITYSDK_OFFSET(0x18760660)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLETRACK_OFFSET UNITYSDK_OFFSET(0x187606D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ENSURESTORAGE_OFFSET UNITYSDK_OFFSET(0x18750D70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_INITMATCH_OFFSET UNITYSDK_OFFSET(0x18760350)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISBOUNDARY_OFFSET UNITYSDK_OFFSET(0x18756CC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISECMABOUNDARY_OFFSET UNITYSDK_OFFSET(0x18756DE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x18756AA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHINDEX_OFFSET UNITYSDK_OFFSET(0x18756ED0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHLENGTH_OFFSET UNITYSDK_OFFSET(0x18756F00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_POPCRAWL_OFFSET UNITYSDK_OFFSET(0x18760850)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_SCAN_OFFSET UNITYSDK_OFFSET(0x187451C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_STARTTIMEOUTWATCH_OFFSET UNITYSDK_OFFSET(0x187602F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TIDYMATCH_OFFSET UNITYSDK_OFFSET(0x18760550)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TRANSFERCAPTURE_OFFSET UNITYSDK_OFFSET(0x18756AD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_UNCAPTURE_OFFSET UNITYSDK_OFFSET(0x18756C40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x18750BB0)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexRunner_TypeDefinitionIndex = 2515;

	class RegexRunner : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* runcrawl; // 0x10
		::System::String* runtext; // 0x18
		::Il2CppArray<::System::Int32>* runstack; // 0x20
		::System::Text::RegularExpressions::Regex* runregex; // 0x28
		::System::Text::RegularExpressions::Match* runmatch; // 0x30
		::Il2CppArray<::System::Int32>* runtrack; // 0x38
		::System::Int32 runtextbeg; // 0x40
		::System::Int32 timeoutChecksToSkip; // 0x44
		::System::Boolean ignoreTimeout; // 0x48
		::System::Int32 timeout; // 0x4C
		::System::Int32 timeoutOccursAt; // 0x50
		::System::Int32 runtextend; // 0x54
		::System::Int32 runcrawlpos; // 0x58
		::System::Int32 runtextstart; // 0x5C
		::System::Int32 runstackpos; // 0x60
		::System::Int32 runtrackcount; // 0x64
		::System::Int32 runtextpos; // 0x68
		::System::Int32 runtrackpos; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER__CTOR_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Match* Scan(::System::Text::RegularExpressions::Regex* regex, ::System::String* text, ::System::Int32 textbeg, ::System::Int32 textend, ::System::Int32 textstart, ::System::Int32 prevlen, ::System::Boolean quick, ::System::TimeSpan timeout)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_SCAN_OFFSET))(this, regex, text, textbeg, textend, textstart, prevlen, quick, timeout);
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

		::System::Text::RegularExpressions::Match* TidyMatch(::System::Boolean quick)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TIDYMATCH_OFFSET))(this, quick);
		}

		::System::Void EnsureStorage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ENSURESTORAGE_OFFSET))(this);
		}

		::System::Boolean IsBoundary(::System::Int32 index, ::System::Int32 startpos, ::System::Int32 endpos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISBOUNDARY_OFFSET))(this, index, startpos, endpos);
		}

		::System::Boolean IsECMABoundary(::System::Int32 index, ::System::Int32 startpos, ::System::Int32 endpos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISECMABOUNDARY_OFFSET))(this, index, startpos, endpos);
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

		::System::Void Crawl(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWL_OFFSET))(this, i);
		}

		::System::Int32 Popcrawl()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_POPCRAWL_OFFSET))(this);
		}

		::System::Int32 Crawlpos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWLPOS_OFFSET))(this);
		}

		::System::Void Capture(::System::Int32 capnum, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CAPTURE_OFFSET))(this, capnum, start, end);
		}

		::System::Void TransferCapture(::System::Int32 capnum, ::System::Int32 uncapnum, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TRANSFERCAPTURE_OFFSET))(this, capnum, uncapnum, start, end);
		}

		::System::Void Uncapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_UNCAPTURE_OFFSET))(this);
		}

		::System::Boolean IsMatched(::System::Int32 cap)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISMATCHED_OFFSET))(this, cap);
		}

		::System::Int32 MatchIndex(::System::Int32 cap)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHINDEX_OFFSET))(this, cap);
		}

		::System::Int32 MatchLength(::System::Int32 cap)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHLENGTH_OFFSET))(this, cap);
		}
	};
}
