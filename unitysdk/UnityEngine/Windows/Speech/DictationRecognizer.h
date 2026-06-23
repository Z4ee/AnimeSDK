#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Windows/Speech/ConfidenceLevel.h"
#include "unitysdk/UnityEngine/Windows/Speech/DictationCompletionCause.h"
#include "unitysdk/UnityEngine/Windows/Speech/DictationTopicConstraint.h"

namespace System { class String; }
namespace UnityEngine::Windows::Speech { class DictationRecognizer_DictationCompletedDelegate; }
namespace UnityEngine::Windows::Speech { class DictationRecognizer_DictationErrorHandler; }
namespace UnityEngine::Windows::Speech { class DictationRecognizer_DictationHypothesisDelegate; }
namespace UnityEngine::Windows::Speech { class DictationRecognizer_DictationResultDelegate; }

#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D4352C0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DESTROYTHREADED_OFFSET UNITYSDK_OFFSET(0x1D4352E0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1D4352D0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKECOMPLETEDEVENT_OFFSET UNITYSDK_OFFSET(0x1D435A60)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEERROREVENT_OFFSET UNITYSDK_OFFSET(0x1D435A70)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKEHYPOTHESISGENERATEDEVENT_OFFSET UNITYSDK_OFFSET(0x1D4354F0)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DICTATIONRECOGNIZER_INVOKERESULTGENERATEDEVENT_OFFSET UNITYSDK_OFFSET(0x1D435500)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D435440)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D435340)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D435320)
#define UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4352F0)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int DictationRecognizer_TypeDefinitionIndex = 5451;

	class DictationRecognizer : public ::System::Object
	{
	public:
		::System::IntPtr m_Recognizer; // 0x10
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate* DictationHypothesis; // 0x18
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate* DictationResult; // 0x20
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate* DictationComplete; // 0x28
		::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler* DictationError; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Windows::Speech::ConfidenceLevel minimumConfidence, ::UnityEngine::Windows::Speech::DictationTopicConstraint topic)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Windows::Speech::ConfidenceLevel, ::UnityEngine::Windows::Speech::DictationTopicConstraint))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER__CTOR_1_OFFSET))(this, minimumConfidence, topic);
		}

		static ::System::IntPtr Create(::System::Object* self, ::UnityEngine::Windows::Speech::ConfidenceLevel minimumConfidence, ::UnityEngine::Windows::Speech::DictationTopicConstraint topicConstraint)
		{
			return ((::System::IntPtr(*)(::System::Object*, ::UnityEngine::Windows::Speech::ConfidenceLevel, ::UnityEngine::Windows::Speech::DictationTopicConstraint))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_CREATE_OFFSET))(self, minimumConfidence, topicConstraint);
		}

		static ::System::Void Destroy(::System::IntPtr self)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DESTROY_OFFSET))(self);
		}

		static ::System::Void DestroyThreaded(::System::IntPtr self)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DESTROYTHREADED_OFFSET))(self);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_DICTATIONRECOGNIZER_DISPOSE_OFFSET))(this);
		}

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
