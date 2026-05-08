#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Windows/Speech/SpeechError.h"
#include "unitysdk/UnityEngine/Windows/Speech/SpeechSystemStatus.h"

namespace UnityEngine::Windows::Speech { class PhraseRecognitionSystem_ErrorDelegate; }
namespace UnityEngine::Windows::Speech { class PhraseRecognitionSystem_StatusDelegate; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKEERROREVENT_OFFSET UNITYSDK_OFFSET(0x1AD5C750)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKESTATUSCHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x1AD5CA60)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognitionSystem_TypeDefinitionIndex = 5445;

	class PhraseRecognitionSystem : public ::System::Object
	{
	public:
		static ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate** StaticGet_OnStatusChanged()
		{
			return (::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate**)Il2CppClass::FromTypeDefinitionIndex(PhraseRecognitionSystem_TypeDefinitionIndex)->GetStaticField(0x51A0);
		}
		static ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate** StaticGet_OnError()
		{
			return (::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate**)Il2CppClass::FromTypeDefinitionIndex(PhraseRecognitionSystem_TypeDefinitionIndex)->GetStaticField(0x51A8);
		}

		static ::System::Void PhraseRecognitionSystem_InvokeErrorEvent(::UnityEngine::Windows::Speech::SpeechError errorCode)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::Speech::SpeechError))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKEERROREVENT_OFFSET))(errorCode);
		}

		static ::System::Void PhraseRecognitionSystem_InvokeStatusChangedEvent(::UnityEngine::Windows::Speech::SpeechSystemStatus status)
		{
			return ((::System::Void(*)(::UnityEngine::Windows::Speech::SpeechSystemStatus))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNITIONSYSTEM_PHRASERECOGNITIONSYSTEM_INVOKESTATUSCHANGEDEVENT_OFFSET))(status);
		}
	};
}
