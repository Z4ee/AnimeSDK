#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text::RegularExpressions { class CachedCodeEntry; }
namespace System::Text::RegularExpressions { class ExclusiveReference; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class MatchCollection; }
namespace System::Text::RegularExpressions { class MatchEvaluator; }
namespace System::Text::RegularExpressions { class RegexCode; }
namespace System::Text::RegularExpressions { class RegexRunnerFactory; }
namespace System::Text::RegularExpressions { class SharedReference; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_CACHECODE_OFFSET UNITYSDK_OFFSET(0x1A17C8A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ESCAPE_OFFSET UNITYSDK_OFFSET(0x1A17D200)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_MATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A17D5E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1A17D5D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_RIGHTTOLEFT_OFFSET UNITYSDK_OFFSET(0x1A17D5F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GROUPNAMEFROMNUMBER_OFFSET UNITYSDK_OFFSET(0x1A179650)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GROUPNUMBERFROMNAME_OFFSET UNITYSDK_OFFSET(0x1A1792C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_INITDEFAULTMATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A17CFD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_INITIALIZEREFERENCES_OFFSET UNITYSDK_OFFSET(0x1A17C800)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_1_OFFSET UNITYSDK_OFFSET(0x1A17D720)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_2_OFFSET UNITYSDK_OFFSET(0x1A17D660)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_3_OFFSET UNITYSDK_OFFSET(0x1A17D770)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_4_OFFSET UNITYSDK_OFFSET(0x1A17D7F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1A17D620)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_LOOKUPCACHEDANDUPDATE_OFFSET UNITYSDK_OFFSET(0x1A17C230)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_1_OFFSET UNITYSDK_OFFSET(0x1A17DA80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_2_OFFSET UNITYSDK_OFFSET(0x1A17DB50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_3_OFFSET UNITYSDK_OFFSET(0x1A17DBE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_OFFSET UNITYSDK_OFFSET(0x1A17DA40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_1_OFFSET UNITYSDK_OFFSET(0x1A17D8A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_2_OFFSET UNITYSDK_OFFSET(0x1A17D960)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_3_OFFSET UNITYSDK_OFFSET(0x1A17D9D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_OFFSET UNITYSDK_OFFSET(0x1A17D860)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x1A17DD70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_2_OFFSET UNITYSDK_OFFSET(0x1A17DCB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_3_OFFSET UNITYSDK_OFFSET(0x1A17DDD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_4_OFFSET UNITYSDK_OFFSET(0x1A17E010)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_5_OFFSET UNITYSDK_OFFSET(0x1A17DE30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_6_OFFSET UNITYSDK_OFFSET(0x1A17E540)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_7_OFFSET UNITYSDK_OFFSET(0x1A17E5C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_8_OFFSET UNITYSDK_OFFSET(0x1A17E630)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_9_OFFSET UNITYSDK_OFFSET(0x1A17E6E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_OFFSET UNITYSDK_OFFSET(0x1A17DC60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_RUN_OFFSET UNITYSDK_OFFSET(0x1A179C50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_1_OFFSET UNITYSDK_OFFSET(0x1A17ECC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_2_OFFSET UNITYSDK_OFFSET(0x1A17EC60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_3_OFFSET UNITYSDK_OFFSET(0x1A17ED40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_4_OFFSET UNITYSDK_OFFSET(0x1A17EDE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_OFFSET UNITYSDK_OFFSET(0x1A17EBE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A17CE50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A17D610)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONINVARIANT_OFFSET UNITYSDK_OFFSET(0x1A17F4E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONR_OFFSET UNITYSDK_OFFSET(0x1A17D600)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_VALIDATEMATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A17C190)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A17F8A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A17BC70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A17C140)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A17BCC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A17CD00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17BC40)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Regex_TypeDefinitionIndex = 2486;

	class Regex : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::LinkedList_1<::System::Text::RegularExpressions::CachedCodeEntry*>** StaticGet_livecode()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::Text::RegularExpressions::CachedCodeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0x106E0);
		}
		static ::System::TimeSpan* StaticGet_InfiniteMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0x5220);
		}
		static ::System::TimeSpan* StaticGet_MaximumMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0x5228);
		}
		static ::System::Int32* StaticGet_cacheSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0x5230);
		}
		static ::System::TimeSpan* StaticGet_DefaultMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0x5238);
		}
		static ::System::TimeSpan* StaticGet_FallbackDefaultMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0x5240);
		}
		::System::Text::RegularExpressions::SharedReference* replref; // 0x10
		::System::Collections::Hashtable* capnames; // 0x18
		::System::String* pattern; // 0x20
		::Il2CppArray<::System::String*>* capslist; // 0x28
		::System::Text::RegularExpressions::ExclusiveReference* runnerref; // 0x30
		::System::Text::RegularExpressions::RegexRunnerFactory* factory; // 0x38
		::System::Collections::Hashtable* caps; // 0x40
		::System::Text::RegularExpressions::RegexCode* code; // 0x48
		::System::TimeSpan internalMatchTimeout; // 0x50
		::System::Boolean refsInitialized; // 0x58
		::System::Text::RegularExpressions::RegexOptions roptions; // 0x5C
		::System::Int32 capsize; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* pattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_1_OFFSET))(this, pattern);
		}

		::System::Void _ctor_2(::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_2_OFFSET))(this, pattern, options);
		}

		::System::Void _ctor_3(::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout, ::System::Boolean useCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_3_OFFSET))(this, pattern, options, matchTimeout, useCache);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_4_OFFSET))(this, info, context);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CCTOR_OFFSET))();
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* si, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, si, context);
		}

		static ::System::Void ValidateMatchTimeout(::System::TimeSpan matchTimeout)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_VALIDATEMATCHTIMEOUT_OFFSET))(matchTimeout);
		}

		static ::System::TimeSpan InitDefaultMatchTimeout()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_INITDEFAULTMATCHTIMEOUT_OFFSET))();
		}

		static ::System::String* Escape(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ESCAPE_OFFSET))(str);
		}

		::System::Text::RegularExpressions::RegexOptions get_Options()
		{
			return ((::System::Text::RegularExpressions::RegexOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_OPTIONS_OFFSET))(this);
		}

		::System::TimeSpan get_MatchTimeout()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_MATCHTIMEOUT_OFFSET))(this);
		}

		::System::Boolean get_RightToLeft()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_RIGHTTOLEFT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_TOSTRING_OFFSET))(this);
		}

		::System::String* GroupNameFromNumber(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GROUPNAMEFROMNUMBER_OFFSET))(this, i);
		}

		::System::Int32 GroupNumberFromName(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GROUPNUMBERFROMNAME_OFFSET))(this, name);
		}

		static ::System::Boolean IsMatch(::System::String* input, ::System::String* pattern)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_OFFSET))(input, pattern);
		}

		static ::System::Boolean IsMatch_1(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_1_OFFSET))(input, pattern, options);
		}

		static ::System::Boolean IsMatch_2(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_2_OFFSET))(input, pattern, options, matchTimeout);
		}

		::System::Boolean IsMatch_3(::System::String* input)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_3_OFFSET))(this, input);
		}

		::System::Boolean IsMatch_4(::System::String* input, ::System::Int32 startat)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_4_OFFSET))(this, input, startat);
		}

		static ::System::Text::RegularExpressions::Match* Match(::System::String* input, ::System::String* pattern)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_OFFSET))(input, pattern);
		}

		static ::System::Text::RegularExpressions::Match* Match_1(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_1_OFFSET))(input, pattern, options, matchTimeout);
		}

		::System::Text::RegularExpressions::Match* Match_2(::System::String* input)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_2_OFFSET))(this, input);
		}

		::System::Text::RegularExpressions::Match* Match_3(::System::String* input, ::System::Int32 startat)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_3_OFFSET))(this, input, startat);
		}

		static ::System::Text::RegularExpressions::MatchCollection* Matches(::System::String* input, ::System::String* pattern)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_OFFSET))(input, pattern);
		}

		static ::System::Text::RegularExpressions::MatchCollection* Matches_1(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_1_OFFSET))(input, pattern, options, matchTimeout);
		}

		::System::Text::RegularExpressions::MatchCollection* Matches_2(::System::String* input)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_2_OFFSET))(this, input);
		}

		::System::Text::RegularExpressions::MatchCollection* Matches_3(::System::String* input, ::System::Int32 startat)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_3_OFFSET))(this, input, startat);
		}

		static ::System::String* Replace(::System::String* input, ::System::String* pattern, ::System::String* replacement)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_OFFSET))(input, pattern, replacement);
		}

		static ::System::String* Replace_1(::System::String* input, ::System::String* pattern, ::System::String* replacement, ::System::Text::RegularExpressions::RegexOptions options)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_1_OFFSET))(input, pattern, replacement, options);
		}

		static ::System::String* Replace_2(::System::String* input, ::System::String* pattern, ::System::String* replacement, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_2_OFFSET))(input, pattern, replacement, options, matchTimeout);
		}

		::System::String* Replace_3(::System::String* input, ::System::String* replacement)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_3_OFFSET))(this, input, replacement);
		}

		::System::String* Replace_4(::System::String* input, ::System::String* replacement, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_4_OFFSET))(this, input, replacement, count);
		}

		::System::String* Replace_5(::System::String* input, ::System::String* replacement, ::System::Int32 count, ::System::Int32 startat)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_5_OFFSET))(this, input, replacement, count, startat);
		}

		static ::System::String* Replace_6(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::MatchEvaluator* evaluator)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_6_OFFSET))(input, pattern, evaluator);
		}

		static ::System::String* Replace_7(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::MatchEvaluator* evaluator, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_7_OFFSET))(input, pattern, evaluator, options, matchTimeout);
		}

		::System::String* Replace_8(::System::String* input, ::System::Text::RegularExpressions::MatchEvaluator* evaluator)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_8_OFFSET))(this, input, evaluator);
		}

		::System::String* Replace_9(::System::String* input, ::System::Text::RegularExpressions::MatchEvaluator* evaluator, ::System::Int32 count, ::System::Int32 startat)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_9_OFFSET))(this, input, evaluator, count, startat);
		}

		static ::Il2CppArray<::System::String*>* Split(::System::String* input, ::System::String* pattern)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_OFFSET))(input, pattern);
		}

		static ::Il2CppArray<::System::String*>* Split_1(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_1_OFFSET))(input, pattern, options);
		}

		static ::Il2CppArray<::System::String*>* Split_2(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_2_OFFSET))(input, pattern, options, matchTimeout);
		}

		::Il2CppArray<::System::String*>* Split_3(::System::String* input)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_3_OFFSET))(this, input);
		}

		::Il2CppArray<::System::String*>* Split_4(::System::String* input, ::System::Int32 count, ::System::Int32 startat)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_4_OFFSET))(this, input, count, startat);
		}

		::System::Void InitializeReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_INITIALIZEREFERENCES_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Match* Run(::System::Boolean quick, ::System::Int32 prevlen, ::System::String* input, ::System::Int32 beginning, ::System::Int32 length, ::System::Int32 startat)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_RUN_OFFSET))(this, quick, prevlen, input, beginning, length, startat);
		}

		static ::System::Text::RegularExpressions::CachedCodeEntry* LookupCachedAndUpdate(::System::String* key)
		{
			return ((::System::Text::RegularExpressions::CachedCodeEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_LOOKUPCACHEDANDUPDATE_OFFSET))(key);
		}

		::System::Text::RegularExpressions::CachedCodeEntry* CacheCode(::System::String* key)
		{
			return ((::System::Text::RegularExpressions::CachedCodeEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_CACHECODE_OFFSET))(this, key);
		}

		::System::Boolean UseOptionR()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONR_OFFSET))(this);
		}

		::System::Boolean UseOptionInvariant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONINVARIANT_OFFSET))(this);
		}
	};
}
