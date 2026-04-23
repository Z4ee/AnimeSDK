#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Windows/Speech/ConfidenceLevel.h"
#include "unitysdk/UnityEngine/Windows/Speech/SemanticMeaning.h"

namespace System { class String; }
namespace UnityEngine::Windows::Speech { class PhraseRecognizer_PhraseRecognizedDelegate; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_INVOKEPHRASERECOGNIZEDEVENT_OFFSET UNITYSDK_OFFSET(0x1A49ACB0)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_MARSHALSEMANTICMEANING_OFFSET UNITYSDK_OFFSET(0x1A49B200)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognizer_TypeDefinitionIndex = 4242;

	class PhraseRecognizer : public ::System::Object
	{
	public:
		::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate* OnPhraseRecognized; // 0x10
		::System::IntPtr m_Recognizer; // 0x18

		::System::Void InvokePhraseRecognizedEvent(::System::String* text, ::UnityEngine::Windows::Speech::ConfidenceLevel confidence, ::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>* semanticMeanings, ::System::Int64 phraseStartFileTime, ::System::Int64 phraseDurationTicks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel, ::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_INVOKEPHRASERECOGNIZEDEVENT_OFFSET))(this, text, confidence, semanticMeanings, phraseStartFileTime, phraseDurationTicks);
		}

		static ::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>* MarshalSemanticMeaning(::System::IntPtr keys, ::System::IntPtr values, ::System::IntPtr valueSizes, ::System::Int32 valueCount)
		{
			return ((::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>*(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_MARSHALSEMANTICMEANING_OFFSET))(keys, values, valueSizes, valueCount);
		}
	};
}
