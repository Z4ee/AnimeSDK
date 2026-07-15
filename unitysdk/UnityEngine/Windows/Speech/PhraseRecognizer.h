#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Windows/Speech/ConfidenceLevel.h"
#include "unitysdk/UnityEngine/Windows/Speech/SemanticMeaning.h"

namespace System { class String; }
namespace UnityEngine::Windows::Speech { class PhraseRecognizer_PhraseRecognizedDelegate; }

#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_INVOKEPHRASERECOGNIZEDEVENT_OFFSET UNITYSDK_OFFSET(0x1D22D0D0)
#define UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_MARSHALSEMANTICMEANING_OFFSET UNITYSDK_OFFSET(0x1D22D190)

namespace UnityEngine::Windows::Speech
{
	inline static constexpr unsigned int PhraseRecognizer_TypeDefinitionIndex = 4421;

	class PhraseRecognizer : public ::System::Object
	{
	public:
		::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate* OnPhraseRecognized; // 0x10
		::System::IntPtr m_Recognizer; // 0x18

		::System::Void InvokePhraseRecognizedEvent(::System::String* a1, ::UnityEngine::Windows::Speech::ConfidenceLevel a2, ::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>* a3, ::System::Int64 a4, ::System::Int64 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Windows::Speech::ConfidenceLevel, ::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_INVOKEPHRASERECOGNIZEDEVENT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>* MarshalSemanticMeaning(::System::IntPtr a1, ::System::IntPtr a2, ::System::IntPtr a3, ::System::Int32 a4)
		{
			return ((::Il2CppArray<::UnityEngine::Windows::Speech::SemanticMeaning>*(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_WINDOWS_SPEECH_PHRASERECOGNIZER_MARSHALSEMANTICMEANING_OFFSET))(a1, a2, a3, a4);
		}
	};
}
