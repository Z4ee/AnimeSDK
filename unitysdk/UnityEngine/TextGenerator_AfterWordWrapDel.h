#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/TextFormatState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B34DB60)
#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B34DBF0)
#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B34D920)
#define UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B34DAE0)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerator_AfterWordWrapDel_TypeDefinitionIndex = 5023;

	class TextGenerator_AfterWordWrapDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::TextFormatState& a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::TextFormatState& a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::UnityEngine::TextFormatState& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERWORDWRAPDEL_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
