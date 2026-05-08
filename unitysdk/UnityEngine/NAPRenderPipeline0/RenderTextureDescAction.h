#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC20580)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC205F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC20240)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC20230)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderTextureDescAction_TypeDefinitionIndex = 5912;

	class RenderTextureDescAction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::RenderTextureDescriptor& desc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCACTION_INVOKE_OFFSET))(this, desc);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::RenderTextureDescriptor& desc, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCACTION_BEGININVOKE_OFFSET))(this, desc, callback, object);
		}

		::System::Void EndInvoke(::UnityEngine::RenderTextureDescriptor& desc, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTEXTUREDESCACTION_ENDINVOKE_OFFSET))(this, desc, result);
		}
	};
}
