#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IDictionary; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection::Emit { class CustomAttributeBuilder; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Text::RegularExpressions { class CachedCodeEntry; }
namespace System::Text::RegularExpressions { class ExclusiveReference; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class MatchCollection; }
namespace System::Text::RegularExpressions { class MatchEvaluator; }
namespace System::Text::RegularExpressions { class RegexCode; }
namespace System::Text::RegularExpressions { class RegexCompilationInfo; }
namespace System::Text::RegularExpressions { class RegexRunnerFactory; }
namespace System::Text::RegularExpressions { class SharedReference; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_CACHECODE_OFFSET UNITYSDK_OFFSET(0x1DB95E70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_COMPILETOASSEMBLY_1_OFFSET UNITYSDK_OFFSET(0x1DB9A680)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_COMPILETOASSEMBLY_2_OFFSET UNITYSDK_OFFSET(0x1DB9A6C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_COMPILETOASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1DB9A640)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ESCAPE_OFFSET UNITYSDK_OFFSET(0x1DB96870)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GETGROUPNAMES_OFFSET UNITYSDK_OFFSET(0x1DB98100)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GETGROUPNUMBERS_OFFSET UNITYSDK_OFFSET(0x1DB98200)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_CACHESIZE_OFFSET UNITYSDK_OFFSET(0x1DB96970)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_CAPNAMES_OFFSET UNITYSDK_OFFSET(0x1DB976C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_CAPS_OFFSET UNITYSDK_OFFSET(0x1DB96BD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_MATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1DB980C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1DB980B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_RIGHTTOLEFT_OFFSET UNITYSDK_OFFSET(0x1DB980D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GROUPNAMEFROMNUMBER_OFFSET UNITYSDK_OFFSET(0x1DB98650)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GROUPNUMBERFROMNAME_OFFSET UNITYSDK_OFFSET(0x1DB98790)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_INITDEFAULTMATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1DB96620)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_INITIALIZEREFERENCES_OFFSET UNITYSDK_OFFSET(0x1DB95D90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_1_OFFSET UNITYSDK_OFFSET(0x1DB98AD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_2_OFFSET UNITYSDK_OFFSET(0x1DB98A50)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_3_OFFSET UNITYSDK_OFFSET(0x1DB98BA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_4_OFFSET UNITYSDK_OFFSET(0x1DB98C60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1DB98980)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_LOOKUPCACHEDANDUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB95AF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_1_OFFSET UNITYSDK_OFFSET(0x1DB99570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_2_OFFSET UNITYSDK_OFFSET(0x1DB994F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_3_OFFSET UNITYSDK_OFFSET(0x1DB99640)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_4_OFFSET UNITYSDK_OFFSET(0x1DB99710)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_OFFSET UNITYSDK_OFFSET(0x1DB99420)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_1_OFFSET UNITYSDK_OFFSET(0x1DB99150)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_2_OFFSET UNITYSDK_OFFSET(0x1DB990D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_3_OFFSET UNITYSDK_OFFSET(0x1DB99220)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_4_OFFSET UNITYSDK_OFFSET(0x1DB992E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_5_OFFSET UNITYSDK_OFFSET(0x1DB99380)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_OFFSET UNITYSDK_OFFSET(0x1DB99000)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_10_OFFSET UNITYSDK_OFFSET(0x1DB9A0B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_11_OFFSET UNITYSDK_OFFSET(0x1DB9A020)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x1DB99920)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_2_OFFSET UNITYSDK_OFFSET(0x1DB99830)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_3_OFFSET UNITYSDK_OFFSET(0x1DB999A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_4_OFFSET UNITYSDK_OFFSET(0x1DB99C80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_5_OFFSET UNITYSDK_OFFSET(0x1DB99A30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_6_OFFSET UNITYSDK_OFFSET(0x1DB99D20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_7_OFFSET UNITYSDK_OFFSET(0x1DB99E90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_8_OFFSET UNITYSDK_OFFSET(0x1DB99E00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_9_OFFSET UNITYSDK_OFFSET(0x1DB99F70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_OFFSET UNITYSDK_OFFSET(0x1DB997B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_RUN_OFFSET UNITYSDK_OFFSET(0x1DB98D00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SET_CACHESIZE_OFFSET UNITYSDK_OFFSET(0x1DB969D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SET_CAPNAMES_OFFSET UNITYSDK_OFFSET(0x1DB97B60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SET_CAPS_OFFSET UNITYSDK_OFFSET(0x1DB97100)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_1_OFFSET UNITYSDK_OFFSET(0x1DB9A2B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_2_OFFSET UNITYSDK_OFFSET(0x1DB9A230)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_3_OFFSET UNITYSDK_OFFSET(0x1DB9A380)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_4_OFFSET UNITYSDK_OFFSET(0x1DB9A4B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_5_OFFSET UNITYSDK_OFFSET(0x1DB9A420)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_OFFSET UNITYSDK_OFFSET(0x1DB9A160)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1DB96480)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB980F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x1DB968F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONC_OFFSET UNITYSDK_OFFSET(0x1DB9A550)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONINVARIANT_OFFSET UNITYSDK_OFFSET(0x1DB9A540)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONR_OFFSET UNITYSDK_OFFSET(0x1DB980E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_VALIDATEMATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1DB95A30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB9A560)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB95570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DB95990)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DB95A10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DB955E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1DB96300)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB95510)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Regex_TypeDefinitionIndex = 2717;

	class Regex : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::LinkedList_1<::System::Text::RegularExpressions::CachedCodeEntry*>** StaticGet_livecode()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::Text::RegularExpressions::CachedCodeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0x2620);
		}
		static ::System::TimeSpan* StaticGet_FallbackDefaultMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0xFB0);
		}
		static ::System::TimeSpan* StaticGet_InfiniteMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0xFB8);
		}
		static ::System::TimeSpan* StaticGet_MaximumMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0xFC0);
		}
		static ::System::TimeSpan* StaticGet_DefaultMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0xFC8);
		}
		static ::System::Int32* StaticGet_cacheSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0xFD0);
		}
		// static const ::System::String* DefaultMatchTimeout_ConfigKeyName; // 0x0
		// static const ::System::Int32 MaxOptionShift = 0xA; // 0x0
		::System::Text::RegularExpressions::RegexRunnerFactory* factory; // 0x10
		::System::Text::RegularExpressions::RegexCode* code; // 0x18
		::System::Collections::Hashtable* capnames; // 0x20
		::Il2CppArray<::System::String*>* capslist; // 0x28
		::System::String* pattern; // 0x30
		::System::Text::RegularExpressions::SharedReference* replref; // 0x38
		::System::Text::RegularExpressions::ExclusiveReference* runnerref; // 0x40
		::System::Collections::Hashtable* caps; // 0x48
		::System::Text::RegularExpressions::RegexOptions roptions; // 0x50
		::System::Int32 capsize; // 0x54
		::System::Boolean refsInitialized; // 0x58
		::System::TimeSpan internalMatchTimeout; // 0x60

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

		::System::Void _ctor_3(::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_3_OFFSET))(this, pattern, options, matchTimeout);
		}

		::System::Void _ctor_4(::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout, ::System::Boolean useCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_4_OFFSET))(this, pattern, options, matchTimeout, useCache);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_5_OFFSET))(this, info, context);
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

		static ::System::String* Unescape(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_UNESCAPE_OFFSET))(str);
		}

		static ::System::Int32 get_CacheSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_CACHESIZE_OFFSET))();
		}

		static ::System::Void set_CacheSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SET_CACHESIZE_OFFSET))(value);
		}

		::System::Collections::IDictionary* get_Caps()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_CAPS_OFFSET))(this);
		}

		::System::Void set_Caps(::System::Collections::IDictionary* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SET_CAPS_OFFSET))(this, value);
		}

		::System::Collections::IDictionary* get_CapNames()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_CAPNAMES_OFFSET))(this);
		}

		::System::Void set_CapNames(::System::Collections::IDictionary* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SET_CAPNAMES_OFFSET))(this, value);
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

		::Il2CppArray<::System::String*>* GetGroupNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GETGROUPNAMES_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* GetGroupNumbers()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GETGROUPNUMBERS_OFFSET))(this);
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

		static ::System::Text::RegularExpressions::Match* Match_1(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_1_OFFSET))(input, pattern, options);
		}

		static ::System::Text::RegularExpressions::Match* Match_2(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_2_OFFSET))(input, pattern, options, matchTimeout);
		}

		::System::Text::RegularExpressions::Match* Match_3(::System::String* input)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_3_OFFSET))(this, input);
		}

		::System::Text::RegularExpressions::Match* Match_4(::System::String* input, ::System::Int32 startat)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_4_OFFSET))(this, input, startat);
		}

		::System::Text::RegularExpressions::Match* Match_5(::System::String* input, ::System::Int32 beginning, ::System::Int32 length)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_5_OFFSET))(this, input, beginning, length);
		}

		static ::System::Text::RegularExpressions::MatchCollection* Matches(::System::String* input, ::System::String* pattern)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_OFFSET))(input, pattern);
		}

		static ::System::Text::RegularExpressions::MatchCollection* Matches_1(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_1_OFFSET))(input, pattern, options);
		}

		static ::System::Text::RegularExpressions::MatchCollection* Matches_2(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_2_OFFSET))(input, pattern, options, matchTimeout);
		}

		::System::Text::RegularExpressions::MatchCollection* Matches_3(::System::String* input)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_3_OFFSET))(this, input);
		}

		::System::Text::RegularExpressions::MatchCollection* Matches_4(::System::String* input, ::System::Int32 startat)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_4_OFFSET))(this, input, startat);
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

		static ::System::String* Replace_7(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::MatchEvaluator* evaluator, ::System::Text::RegularExpressions::RegexOptions options)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_7_OFFSET))(input, pattern, evaluator, options);
		}

		static ::System::String* Replace_8(::System::String* input, ::System::String* pattern, ::System::Text::RegularExpressions::MatchEvaluator* evaluator, ::System::Text::RegularExpressions::RegexOptions options, ::System::TimeSpan matchTimeout)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_8_OFFSET))(input, pattern, evaluator, options, matchTimeout);
		}

		::System::String* Replace_9(::System::String* input, ::System::Text::RegularExpressions::MatchEvaluator* evaluator)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_9_OFFSET))(this, input, evaluator);
		}

		::System::String* Replace_10(::System::String* input, ::System::Text::RegularExpressions::MatchEvaluator* evaluator, ::System::Int32 count)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_10_OFFSET))(this, input, evaluator, count);
		}

		::System::String* Replace_11(::System::String* input, ::System::Text::RegularExpressions::MatchEvaluator* evaluator, ::System::Int32 count, ::System::Int32 startat)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_11_OFFSET))(this, input, evaluator, count, startat);
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

		::Il2CppArray<::System::String*>* Split_4(::System::String* input, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_4_OFFSET))(this, input, count);
		}

		::Il2CppArray<::System::String*>* Split_5(::System::String* input, ::System::Int32 count, ::System::Int32 startat)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_5_OFFSET))(this, input, count, startat);
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

		::System::Boolean UseOptionC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONC_OFFSET))(this);
		}

		::System::Boolean UseOptionR()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONR_OFFSET))(this);
		}

		::System::Boolean UseOptionInvariant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONINVARIANT_OFFSET))(this);
		}

		static ::System::Void CompileToAssembly(::Il2CppArray<::System::Text::RegularExpressions::RegexCompilationInfo*>* regexinfos, ::System::Reflection::AssemblyName* assemblyname)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Text::RegularExpressions::RegexCompilationInfo*>*, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_COMPILETOASSEMBLY_OFFSET))(regexinfos, assemblyname);
		}

		static ::System::Void CompileToAssembly_1(::Il2CppArray<::System::Text::RegularExpressions::RegexCompilationInfo*>* regexinfos, ::System::Reflection::AssemblyName* assemblyname, ::Il2CppArray<::System::Reflection::Emit::CustomAttributeBuilder*>* attributes)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Text::RegularExpressions::RegexCompilationInfo*>*, ::System::Reflection::AssemblyName*, ::Il2CppArray<::System::Reflection::Emit::CustomAttributeBuilder*>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_COMPILETOASSEMBLY_1_OFFSET))(regexinfos, assemblyname, attributes);
		}

		static ::System::Void CompileToAssembly_2(::Il2CppArray<::System::Text::RegularExpressions::RegexCompilationInfo*>* regexinfos, ::System::Reflection::AssemblyName* assemblyname, ::Il2CppArray<::System::Reflection::Emit::CustomAttributeBuilder*>* attributes, ::System::String* resourceFile)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Text::RegularExpressions::RegexCompilationInfo*>*, ::System::Reflection::AssemblyName*, ::Il2CppArray<::System::Reflection::Emit::CustomAttributeBuilder*>*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_COMPILETOASSEMBLY_2_OFFSET))(regexinfos, assemblyname, attributes, resourceFile);
		}
	};
}
