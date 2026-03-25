#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/TextFormatState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18AC71A0)
#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18AC7230)
#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x18AC6D10)
#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC2E40)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerator_AfterWordWrapDel_TypeDefinitionIndex = 4937;

	class TextGenerator_AfterWordWrapDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::TextFormatState& formatState, ::System::Int32 lastUnderlinePos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_INVOKE_OFFSET))(this, formatState, lastUnderlinePos);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::TextFormatState& formatState, ::System::Int32 lastUnderlinePos, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_BEGININVOKE_OFFSET))(this, formatState, lastUnderlinePos, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::TextFormatState& formatState, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_ENDINVOKE_OFFSET))(this, formatState, result);
		}
	};
}
