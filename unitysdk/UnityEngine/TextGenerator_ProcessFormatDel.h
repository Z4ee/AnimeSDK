#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/TextFormat.h"
#include "unitysdk/UnityEngine/TextFormatChange.h"
#include "unitysdk/UnityEngine/TextFormatState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A502D80)
#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A502E50)
#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A501660)
#define UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FE860)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerator_ProcessFormatDel_TypeDefinitionIndex = 4942;

	class TextGenerator_ProcessFormatDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::TextFormatState& formatState, ::UnityEngine::TextFormatChange& formatChange, ::UnityEngine::TextFormat& currFormat, ::System::Single unitX)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::UnityEngine::TextFormatChange&, ::UnityEngine::TextFormat&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_INVOKE_OFFSET))(this, formatState, formatChange, currFormat, unitX);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::TextFormatState& formatState, ::UnityEngine::TextFormatChange& formatChange, ::UnityEngine::TextFormat& currFormat, ::System::Single unitX, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::TextFormatState&, ::UnityEngine::TextFormatChange&, ::UnityEngine::TextFormat&, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_BEGININVOKE_OFFSET))(this, formatState, formatChange, currFormat, unitX, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::TextFormatState& formatState, ::UnityEngine::TextFormatChange& formatChange, ::UnityEngine::TextFormat& currFormat, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::UnityEngine::TextFormatChange&, ::UnityEngine::TextFormat&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_PROCESSFORMATDEL_ENDINVOKE_OFFSET))(this, formatState, formatChange, currFormat, result);
		}
	};
}
