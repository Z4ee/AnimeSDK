#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1B1F5A10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CHARINCLASS_OFFSET UNITYSDK_OFFSET(0x1B1F58B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CHARINSET_OFFSET UNITYSDK_OFFSET(0x1B1F5880)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CHECKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B1F5090)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWLPOS_OFFSET UNITYSDK_OFFSET(0x1B1F59F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CRAWL_OFFSET UNITYSDK_OFFSET(0x1B1F5950)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOCHECKTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B1F5340)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLECRAWL_OFFSET UNITYSDK_OFFSET(0x1B1F58C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLESTACK_OFFSET UNITYSDK_OFFSET(0x1B1F5450)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_DOUBLETRACK_OFFSET UNITYSDK_OFFSET(0x1B1F54E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ENSURESTORAGE_OFFSET UNITYSDK_OFFSET(0x1B1F5410)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_INITMATCH_OFFSET UNITYSDK_OFFSET(0x1B1F50B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1B1F5570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISECMABOUNDARY_OFFSET UNITYSDK_OFFSET(0x1B1F56F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_ISMATCHED_OFFSET UNITYSDK_OFFSET(0x1B1F5D10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHINDEX_OFFSET UNITYSDK_OFFSET(0x1B1F5C50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_MATCHLENGTH_OFFSET UNITYSDK_OFFSET(0x1B1F5C80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_POPCRAWL_OFFSET UNITYSDK_OFFSET(0x1B1F59B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_SCAN_1_OFFSET UNITYSDK_OFFSET(0x1B1F4CA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_SCAN_OFFSET UNITYSDK_OFFSET(0x1B1F4C40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_STARTTIMEOUTWATCH_OFFSET UNITYSDK_OFFSET(0x1B1F5030)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TIDYMATCH_OFFSET UNITYSDK_OFFSET(0x1B1F5300)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_TRANSFERCAPTURE_OFFSET UNITYSDK_OFFSET(0x1B1F5AB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_UNCAPTURE_OFFSET UNITYSDK_OFFSET(0x1B1F5CB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1F4C30)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexRunner_TypeDefinitionIndex = 2749;

	class RegexRunner : public ::System::Object
	{
	public:
		// static const ::System::Int32 TimeoutCheckFrequency = 0x3E8; // 0x0
		::System::Text::RegularExpressions::Match* runmatch; // 0x10
		::System::Text::RegularExpressions::Regex* runregex; // 0x18
		::Il2CppArray<::System::Int32>* runcrawl; // 0x20
		::Il2CppArray<::System::Int32>* runtrack; // 0x28
		::Il2CppArray<::System::Int32>* runstack; // 0x30
		::System::String* runtext; // 0x38
		::System::Boolean ignoreTimeout; // 0x40
		::System::Int32 timeoutOccursAt; // 0x44
		::System::Int32 runtextstart; // 0x48
		::System::Int32 timeoutChecksToSkip; // 0x4C
		::System::Int32 runtrackcount; // 0x50
		::System::Int32 runtrackpos; // 0x54
		::System::Int32 runcrawlpos; // 0x58
		::System::Int32 runtextbeg; // 0x5C
		::System::Int32 timeout; // 0x60
		::System::Int32 runtextend; // 0x64
		::System::Int32 runstackpos; // 0x68
		::System::Int32 runtextpos; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER__CTOR_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Match* Scan(::System::Text::RegularExpressions::Regex* regex, ::System::String* text, ::System::Int32 textbeg, ::System::Int32 textend, ::System::Int32 textstart, ::System::Int32 prevlen, ::System::Boolean quick)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_SCAN_OFFSET))(this, regex, text, textbeg, textend, textstart, prevlen, quick);
		}

		::System::Text::RegularExpressions::Match* Scan_1(::System::Text::RegularExpressions::Regex* regex, ::System::String* text, ::System::Int32 textbeg, ::System::Int32 textend, ::System::Int32 textstart, ::System::Int32 prevlen, ::System::Boolean quick, ::System::TimeSpan timeout)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::Text::RegularExpressions::Regex*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_SCAN_1_OFFSET))(this, regex, text, textbeg, textend, textstart, prevlen, quick, timeout);
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

		static ::System::Boolean CharInSet(::System::Char ch, ::System::String* set, ::System::String* category)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CHARINSET_OFFSET))(ch, set, category);
		}

		static ::System::Boolean CharInClass(::System::Char ch, ::System::String* charClass)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXRUNNER_CHARINCLASS_OFFSET))(ch, charClass);
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
