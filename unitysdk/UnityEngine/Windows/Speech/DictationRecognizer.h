#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Windows/Speech/ConfidenceLevel.h"
#include "unitysdk/UnityEngine/Windows/Speech/DictationCompletionCause.h"

namespace System { class String; }
namespace UnityEngine::Windows::Speech { class DictationRecognizer_DictationCompletedDelegate; }
namespace UnityEngine::Windows::Speech { class DictationRecognizer_DictationErrorHandler; }
namespace UnityEngine::Windows::Speech { class DictationRecognizer_DictationHypothesisDelegate; }
namespace UnityEngine::Windows::Speech { class DictationRecognizer_DictationResultDelegate; }

#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKECOMPLETEDEVENT_OFFSET UNITYSDK_OFFSET(0x1B2E9830)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEERROREVENT_OFFSET UNITYSDK_OFFSET(0x1B2E9860)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEHYPOTHESISGENERATEDEVENT_OFFSET UNITYSDK_OFFSET(0x1B2E97D0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKERESULTGENERATEDEVENT_OFFSET UNITYSDK_OFFSET(0x1B2E9800)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationRecognizer_TypeDefinitionIndex = 4418;

	class DictationRecognizer : public ::System::Object
	{
	public:
		::System::IntPtr m_Recognizer; // 0x10
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate* DictationHypothesis; // 0x18
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate* DictationResult; // 0x20
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate* DictationComplete; // 0x28
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler* DictationError; // 0x30

		::System::Void DictationRecognizer_InvokeHypothesisGeneratedEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEHYPOTHESISGENERATEDEVENT_OFFSET))(this, a1);
		}

		::System::Void DictationRecognizer_InvokeResultGeneratedEvent(::System::String* a1, ::UnityEngine::Windows::Speech::ConfidenceLevel a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKERESULTGENERATEDEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void DictationRecognizer_InvokeCompletedEvent(::UnityEngine::Windows::Speech::DictationCompletionCause a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::Speech::DictationCompletionCause))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKECOMPLETEDEVENT_OFFSET))(this, a1);
		}

		::System::Void DictationRecognizer_InvokeErrorEvent(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEERROREVENT_OFFSET))(this, a1, a2);
		}
	};
}
