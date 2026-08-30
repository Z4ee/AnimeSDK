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

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_CACHECODE_OFFSET UNITYSDK_OFFSET(0x1E9F2E40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ESCAPE_OFFSET UNITYSDK_OFFSET(0x1E9F3760)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_MATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E9F3DE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1E9F3DD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GET_RIGHTTOLEFT_OFFSET UNITYSDK_OFFSET(0x1E9F3DF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GROUPNAMEFROMNUMBER_OFFSET UNITYSDK_OFFSET(0x1E9EFD20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GROUPNUMBERFROMNAME_OFFSET UNITYSDK_OFFSET(0x1E9EF920)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_INITDEFAULTMATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E9F3530)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_INITIALIZEREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E9F2DA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_1_OFFSET UNITYSDK_OFFSET(0x1E9F3F20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_2_OFFSET UNITYSDK_OFFSET(0x1E9F3E60)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_3_OFFSET UNITYSDK_OFFSET(0x1E9F3F70)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_4_OFFSET UNITYSDK_OFFSET(0x1E9F3FF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1E9F3E20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_LOOKUPCACHEDANDUPDATE_OFFSET UNITYSDK_OFFSET(0x1E9F2820)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_1_OFFSET UNITYSDK_OFFSET(0x1E9F4280)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_2_OFFSET UNITYSDK_OFFSET(0x1E9F4350)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_3_OFFSET UNITYSDK_OFFSET(0x1E9F43E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_OFFSET UNITYSDK_OFFSET(0x1E9F4240)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_1_OFFSET UNITYSDK_OFFSET(0x1E9F40A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_2_OFFSET UNITYSDK_OFFSET(0x1E9F4160)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_3_OFFSET UNITYSDK_OFFSET(0x1E9F41D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_OFFSET UNITYSDK_OFFSET(0x1E9F4060)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_1_OFFSET UNITYSDK_OFFSET(0x1E9F4570)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_2_OFFSET UNITYSDK_OFFSET(0x1E9F44B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_3_OFFSET UNITYSDK_OFFSET(0x1E9F45D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_4_OFFSET UNITYSDK_OFFSET(0x1E9F4920)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_5_OFFSET UNITYSDK_OFFSET(0x1E9F4630)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_6_OFFSET UNITYSDK_OFFSET(0x1E9F4E90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_7_OFFSET UNITYSDK_OFFSET(0x1E9F4EE0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_8_OFFSET UNITYSDK_OFFSET(0x1E9F4FC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_9_OFFSET UNITYSDK_OFFSET(0x1E9F5050)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_OFFSET UNITYSDK_OFFSET(0x1E9F4460)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_RUN_OFFSET UNITYSDK_OFFSET(0x1E9F0390)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_1_OFFSET UNITYSDK_OFFSET(0x1E9F56E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_2_OFFSET UNITYSDK_OFFSET(0x1E9F5680)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_3_OFFSET UNITYSDK_OFFSET(0x1E9F5760)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_4_OFFSET UNITYSDK_OFFSET(0x1E9F5800)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_OFFSET UNITYSDK_OFFSET(0x1E9F5600)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1E9F33B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9F3E10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONINVARIANT_OFFSET UNITYSDK_OFFSET(0x1E9F62A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_USEOPTIONR_OFFSET UNITYSDK_OFFSET(0x1E9F3E00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_VALIDATEMATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E9F2780)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F66D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9F2240)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E9F2730)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E9F2290)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1E9F3290)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F2210)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int Regex_TypeDefinitionIndex = 2497;

	class Regex : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::LinkedList_1<::System::Text::RegularExpressions::CachedCodeEntry*>** StaticGet_livecode()
		{
			return (::System::Collections::Generic::LinkedList_1<::System::Text::RegularExpressions::CachedCodeEntry*>**)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0x24990);
		}
		static ::System::TimeSpan* StaticGet_FallbackDefaultMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0xAFE0);
		}
		static ::System::TimeSpan* StaticGet_InfiniteMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0xAFE8);
		}
		static ::System::Int32* StaticGet_cacheSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0xAFF0);
		}
		static ::System::TimeSpan* StaticGet_DefaultMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0xAFF8);
		}
		static ::System::TimeSpan* StaticGet_MaximumMatchTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(Regex_TypeDefinitionIndex)->GetStaticField(0xB000);
		}
		::System::Collections::Hashtable* capnames; // 0x10
		::System::Text::RegularExpressions::ExclusiveReference* runnerref; // 0x18
		::System::Text::RegularExpressions::RegexRunnerFactory* factory; // 0x20
		::System::Text::RegularExpressions::SharedReference* replref; // 0x28
		::System::String* pattern; // 0x30
		::System::Text::RegularExpressions::RegexCode* code; // 0x38
		::Il2CppArray<::System::String*>* capslist; // 0x40
		::System::Collections::Hashtable* caps; // 0x48
		::System::Int32 capsize; // 0x50
		::System::TimeSpan internalMatchTimeout; // 0x58
		::System::Text::RegularExpressions::RegexOptions roptions; // 0x60
		::System::Boolean refsInitialized; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Text::RegularExpressions::RegexOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Text::RegularExpressions::RegexOptions a2, ::System::TimeSpan a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CTOR_4_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX__CCTOR_OFFSET))();
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		static ::System::Void ValidateMatchTimeout(::System::TimeSpan a1)
		{
			return ((::System::Void(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_VALIDATEMATCHTIMEOUT_OFFSET))(a1);
		}

		static ::System::TimeSpan InitDefaultMatchTimeout()
		{
			return ((::System::TimeSpan(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_INITDEFAULTMATCHTIMEOUT_OFFSET))();
		}

		static ::System::String* Escape(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ESCAPE_OFFSET))(a1);
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

		::System::String* GroupNameFromNumber(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GROUPNAMEFROMNUMBER_OFFSET))(this, a1);
		}

		::System::Int32 GroupNumberFromName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_GROUPNUMBERFROMNAME_OFFSET))(this, a1);
		}

		static ::System::Boolean IsMatch(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMatch_1(::System::String* a1, ::System::String* a2, ::System::Text::RegularExpressions::RegexOptions a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsMatch_2(::System::String* a1, ::System::String* a2, ::System::Text::RegularExpressions::RegexOptions a3, ::System::TimeSpan a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_2_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean IsMatch_3(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_3_OFFSET))(this, a1);
		}

		::System::Boolean IsMatch_4(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_ISMATCH_4_OFFSET))(this, a1, a2);
		}

		static ::System::Text::RegularExpressions::Match* Match(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_OFFSET))(a1, a2);
		}

		static ::System::Text::RegularExpressions::Match* Match_1(::System::String* a1, ::System::String* a2, ::System::Text::RegularExpressions::RegexOptions a3, ::System::TimeSpan a4)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Text::RegularExpressions::Match* Match_2(::System::String* a1)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_2_OFFSET))(this, a1);
		}

		::System::Text::RegularExpressions::Match* Match_3(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCH_3_OFFSET))(this, a1, a2);
		}

		static ::System::Text::RegularExpressions::MatchCollection* Matches(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_OFFSET))(a1, a2);
		}

		static ::System::Text::RegularExpressions::MatchCollection* Matches_1(::System::String* a1, ::System::String* a2, ::System::Text::RegularExpressions::RegexOptions a3, ::System::TimeSpan a4)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Text::RegularExpressions::MatchCollection* Matches_2(::System::String* a1)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_2_OFFSET))(this, a1);
		}

		::System::Text::RegularExpressions::MatchCollection* Matches_3(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Text::RegularExpressions::MatchCollection*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_MATCHES_3_OFFSET))(this, a1, a2);
		}

		static ::System::String* Replace(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Replace_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Text::RegularExpressions::RegexOptions a4)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* Replace_2(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Text::RegularExpressions::RegexOptions a4, ::System::TimeSpan a5)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::String* Replace_3(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_3_OFFSET))(this, a1, a2);
		}

		::System::String* Replace_4(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_4_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Replace_5(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_5_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::String* Replace_6(::System::String* a1, ::System::String* a2, ::System::Text::RegularExpressions::MatchEvaluator* a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_6_OFFSET))(a1, a2, a3);
		}

		static ::System::String* Replace_7(::System::String* a1, ::System::String* a2, ::System::Text::RegularExpressions::MatchEvaluator* a3, ::System::Text::RegularExpressions::RegexOptions a4, ::System::TimeSpan a5)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_7_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::String* Replace_8(::System::String* a1, ::System::Text::RegularExpressions::MatchEvaluator* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_8_OFFSET))(this, a1, a2);
		}

		::System::String* Replace_9(::System::String* a1, ::System::Text::RegularExpressions::MatchEvaluator* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Text::RegularExpressions::MatchEvaluator*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_REPLACE_9_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::String*>* Split(::System::String* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::String*>* Split_1(::System::String* a1, ::System::String* a2, ::System::Text::RegularExpressions::RegexOptions a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::String*>* Split_2(::System::String* a1, ::System::String* a2, ::System::Text::RegularExpressions::RegexOptions a3, ::System::TimeSpan a4)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::String*, ::System::String*, ::System::Text::RegularExpressions::RegexOptions, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_2_OFFSET))(a1, a2, a3, a4);
		}

		::Il2CppArray<::System::String*>* Split_3(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_3_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* Split_4(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_SPLIT_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitializeReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_INITIALIZEREFERENCES_OFFSET))(this);
		}

		::System::Text::RegularExpressions::Match* Run(::System::Boolean a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Text::RegularExpressions::Match*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_RUN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Text::RegularExpressions::CachedCodeEntry* LookupCachedAndUpdate(::System::String* a1)
		{
			return ((::System::Text::RegularExpressions::CachedCodeEntry*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_LOOKUPCACHEDANDUPDATE_OFFSET))(a1);
		}

		::System::Text::RegularExpressions::CachedCodeEntry* CacheCode(::System::String* a1)
		{
			return ((::System::Text::RegularExpressions::CachedCodeEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_CACHECODE_OFFSET))(this, a1);
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
