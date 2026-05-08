#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_CANVAS_WILLRENDERCANVASES_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C3D8120)
#define UNITYENGINE_CANVAS_WILLRENDERCANVASES_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C3D8150)
#define UNITYENGINE_CANVAS_WILLRENDERCANVASES_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C3D7E20)
#define UNITYENGINE_CANVAS_WILLRENDERCANVASES__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D8110)

namespace UnityEngine
{
	inline static constexpr unsigned int Canvas_WillRenderCanvases_TypeDefinitionIndex = 7685;

	class Canvas_WillRenderCanvases : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_WILLRENDERCANVASES__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_WILLRENDERCANVASES_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_WILLRENDERCANVASES_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_CANVAS_WILLRENDERCANVASES_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
