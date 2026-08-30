#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/TextFormat.h"
#include "unitysdk/UnityEngine/TextFormatChange.h"
#include "unitysdk/UnityEngine/TextFormatState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB8010)
#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB80E0)
#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB7450)
#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB7F90)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerator_ProcessFormatDel_TypeDefinitionIndex = 5037;

	class TextGenerator_ProcessFormatDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::TextFormatState& a1, ::UnityEngine::TextFormatChange& a2, ::UnityEngine::TextFormat& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::UnityEngine::TextFormatChange&, ::UnityEngine::TextFormat&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::TextFormatState& a1, ::UnityEngine::TextFormatChange& a2, ::UnityEngine::TextFormat& a3, ::System::Single a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::TextFormatState&, ::UnityEngine::TextFormatChange&, ::UnityEngine::TextFormat&, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::UnityEngine::TextFormatState& a1, ::UnityEngine::TextFormatChange& a2, ::UnityEngine::TextFormat& a3, ::System::IAsyncResult* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::UnityEngine::TextFormatChange&, ::UnityEngine::TextFormat&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
