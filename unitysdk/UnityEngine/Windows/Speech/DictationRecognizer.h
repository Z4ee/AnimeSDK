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

#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKECOMPLETEDEVENT_OFFSET UNITYSDK_OFFSET(0x1A499A00)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEERROREVENT_OFFSET UNITYSDK_OFFSET(0x1A499D00)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEHYPOTHESISGENERATEDEVENT_OFFSET UNITYSDK_OFFSET(0x1A498F30)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKERESULTGENERATEDEVENT_OFFSET UNITYSDK_OFFSET(0x1A499490)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationRecognizer_TypeDefinitionIndex = 4244;

	class DictationRecognizer : public ::System::Object
	{
	public:
		::System::IntPtr m_Recognizer; // 0x10
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate* DictationHypothesis; // 0x18
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate* DictationResult; // 0x20
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate* DictationComplete; // 0x28
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler* DictationError; // 0x30

		::System::Void DictationRecognizer_InvokeHypothesisGeneratedEvent(::System::String* keyword)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEHYPOTHESISGENERATEDEVENT_OFFSET))(this, keyword);
		}

		::System::Void DictationRecognizer_InvokeResultGeneratedEvent(::System::String* keyword, ::UnityEngine::Windows::Speech::ConfidenceLevel minimumConfidence)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKERESULTGENERATEDEVENT_OFFSET))(this, keyword, minimumConfidence);
		}

		::System::Void DictationRecognizer_InvokeCompletedEvent(::UnityEngine::Windows::Speech::DictationCompletionCause cause)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::Speech::DictationCompletionCause))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKECOMPLETEDEVENT_OFFSET))(this, cause);
		}

		::System::Void DictationRecognizer_InvokeErrorEvent(::System::String* error, ::System::Int32 hresult)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEERROREVENT_OFFSET))(this, error, hresult);
		}
	};
}
