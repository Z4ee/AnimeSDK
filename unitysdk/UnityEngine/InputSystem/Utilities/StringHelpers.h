#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/StringComparison.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/Substring.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CHARACTERSEPARATEDLISTSHAVEATLEASTONECOMMONELEMENT_OFFSET UNITYSDK_OFFSET(0x1B524C40)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1B524700)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B51EF50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_COUNTOCCURRENCES_OFFSET UNITYSDK_OFFSET(0x1B524B30)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_ESCAPE_OFFSET UNITYSDK_OFFSET(0x1B523FB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_EXPANDTEMPLATESTRING_OFFSET UNITYSDK_OFFSET(0x1B525A90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_FROMNICIFIEDMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1B5249C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_GETPLURAL_OFFSET UNITYSDK_OFFSET(0x1B524730)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_INVARIANTEQUALSIGNORECASE_OFFSET UNITYSDK_OFFSET(0x1B525A60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_ISPRINTABLE_OFFSET UNITYSDK_OFFSET(0x1B5257A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_NICIFYMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1B524880)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_PARSEINT_OFFSET UNITYSDK_OFFSET(0x1B525310)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_READSTRINGFROMBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1B525670)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_READSTRINGFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x1B525650)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_SPLIT_OFFSET UNITYSDK_OFFSET(0x1B524BE0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_TOKENIZE_OFFSET UNITYSDK_OFFSET(0x1B524B80)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_UNESCAPE_OFFSET UNITYSDK_OFFSET(0x1B5243A0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WITHALLWHITESPACESTRIPPED_OFFSET UNITYSDK_OFFSET(0x1B525840)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WRITESTRINGTOBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1B525460)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WRITESTRINGTOBUFFER_OFFSET UNITYSDK_OFFSET(0x1B525440)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int StringHelpers_TypeDefinitionIndex = 29428;

	class StringHelpers : public ::System::Object
	{
	public:
		static ::System::String* Escape(::System::String* str, ::System::String* chars, ::System::String* replacements)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_ESCAPE_OFFSET))(str, chars, replacements);
		}

		static ::System::String* Unescape(::System::String* str, ::System::String* chars, ::System::String* replacements)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_UNESCAPE_OFFSET))(str, chars, replacements);
		}

		static ::System::Boolean Contains(::System::String* str, ::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CONTAINS_OFFSET))(str, ch);
		}

		static ::System::Boolean Contains_1(::System::String* str, ::System::String* text, ::System::StringComparison comparison)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::StringComparison))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CONTAINS_1_OFFSET))(str, text, comparison);
		}

		static ::System::String* GetPlural(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_GETPLURAL_OFFSET))(str);
		}

		static ::System::String* NicifyMemorySize(::System::Int64 numBytes)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_NICIFYMEMORYSIZE_OFFSET))(numBytes);
		}

		static ::System::Boolean FromNicifiedMemorySize(::System::String* text, ::System::Int64& result, ::System::Int64 defaultMultiplier)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int64&, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_FROMNICIFIEDMEMORYSIZE_OFFSET))(text, result, defaultMultiplier);
		}

		static ::System::Int32 CountOccurrences(::System::String* str, ::System::Char ch)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_COUNTOCCURRENCES_OFFSET))(str, ch);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>* Tokenize(::System::String* str)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::Substring>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_TOKENIZE_OFFSET))(str);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* Split(::System::String* str, ::System::Func_2<::System::Char, ::System::Boolean>* predicate)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*, ::System::Func_2<::System::Char, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_SPLIT_OFFSET))(str, predicate);
		}

		static ::System::Boolean CharacterSeparatedListsHaveAtLeastOneCommonElement(::System::String* firstList, ::System::String* secondList, ::System::Char separator)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_CHARACTERSEPARATEDLISTSHAVEATLEASTONECOMMONELEMENT_OFFSET))(firstList, secondList, separator);
		}

		static ::System::Int32 ParseInt(::System::String* str, ::System::Int32 pos)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_PARSEINT_OFFSET))(str, pos);
		}

		static ::System::Boolean WriteStringToBuffer(::System::String* text, ::System::IntPtr buffer, ::System::Int32 bufferSizeInCharacters)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WRITESTRINGTOBUFFER_OFFSET))(text, buffer, bufferSizeInCharacters);
		}

		static ::System::Boolean WriteStringToBuffer_1(::System::String* text, ::System::IntPtr buffer, ::System::Int32 bufferSizeInCharacters, ::System::UInt32& offset)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WRITESTRINGTOBUFFER_1_OFFSET))(text, buffer, bufferSizeInCharacters, offset);
		}

		static ::System::String* ReadStringFromBuffer(::System::IntPtr buffer, ::System::Int32 bufferSize)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_READSTRINGFROMBUFFER_OFFSET))(buffer, bufferSize);
		}

		static ::System::String* ReadStringFromBuffer_1(::System::IntPtr buffer, ::System::Int32 bufferSize, ::System::UInt32& offset)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_READSTRINGFROMBUFFER_1_OFFSET))(buffer, bufferSize, offset);
		}

		static ::System::Boolean IsPrintable(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_ISPRINTABLE_OFFSET))(ch);
		}

		static ::System::String* WithAllWhitespaceStripped(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_WITHALLWHITESPACESTRIPPED_OFFSET))(str);
		}

		static ::System::Boolean InvariantEqualsIgnoreCase(::System::String* left, ::System::String* right)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_INVARIANTEQUALSIGNORECASE_OFFSET))(left, right);
		}

		static ::System::String* ExpandTemplateString(::System::String* template_, ::System::Func_2<::System::String*, ::System::String*>* mapFunc)
		{
			return ((::System::String*(*)(::System::String*, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_STRINGHELPERS_EXPANDTEMPLATESTRING_OFFSET))(template_, mapFunc);
		}
	};
}
