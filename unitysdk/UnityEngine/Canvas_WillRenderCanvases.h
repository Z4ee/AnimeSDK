#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_CANVAS_WILLRENDERCANVASES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B36D9A0)
#define UNITYENGINE_CANVAS_WILLRENDERCANVASES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B36D9D0)
#define UNITYENGINE_CANVAS_WILLRENDERCANVASES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B36D910)
#define UNITYENGINE_CANVAS_WILLRENDERCANVASES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B36D930)

namespace UnityEngine
{
	inline static constexpr unsigned int Canvas_WillRenderCanvases_TypeDefinitionIndex = 5345;

	class Canvas_WillRenderCanvases : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_WILLRENDERCANVASES__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_WILLRENDERCANVASES_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_WILLRENDERCANVASES_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_WILLRENDERCANVASES_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
