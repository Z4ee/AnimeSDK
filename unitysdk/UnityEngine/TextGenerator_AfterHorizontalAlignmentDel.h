#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/TextFormatState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB7CA0)
#define UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB7D10)
#define UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB7800)
#define UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB7C30)

namespace UnityEngine
{
	inline static constexpr unsigned int TextGenerator_AfterHorizontalAlignmentDel_TypeDefinitionIndex = 5038;

	class TextGenerator_AfterHorizontalAlignmentDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTDEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::TextFormatState& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTDEL_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::TextFormatState& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTDEL_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::UnityEngine::TextFormatState& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextFormatState&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTGENERATOR_AFTERHORIZONTALALIGNMENTDEL_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
