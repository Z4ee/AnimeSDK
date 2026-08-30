#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Windows/Speech/ConfidenceLevel.h"
#include "unitysdk/UnityEngine/Windows/Speech/SemanticMeaning.h"

namespace System { class String; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x3BC8020)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognizedEventArgs_TypeDefinitionIndex = 4443;

	struct alignas(8) PhraseRecognizedEventArgs
	{
		::UnityEngine::Windows::Speech::ConfidenceLevel confidence; // 0x10
		::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>* semanticMeanings; // 0x18
		::System::String* text; // 0x20
		::System::DateTime phraseStartTime; // 0x28
		::System::TimeSpan phraseDuration; // 0x30

		::System::Void _ctor(::System::String* a1, ::UnityEngine::Windows::Speech::ConfidenceLevel a2, ::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>* a3, ::System::DateTime a4, ::System::TimeSpan a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel, ::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>*, ::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZEDEVENTARGS__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
