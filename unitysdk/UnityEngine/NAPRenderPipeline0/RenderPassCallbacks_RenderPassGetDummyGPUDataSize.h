#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSGETDUMMYGPUDATASIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D853BF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSGETDUMMYGPUDATASIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D853C20)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSGETDUMMYGPUDATASIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D853950)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSGETDUMMYGPUDATASIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D853930)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderPassCallbacks_RenderPassGetDummyGPUDataSize_TypeDefinitionIndex = 5699;

	class RenderPassCallbacks_RenderPassGetDummyGPUDataSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSGETDUMMYGPUDATASIZE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSGETDUMMYGPUDATASIZE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSGETDUMMYGPUDATASIZE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERPASSCALLBACKS_RENDERPASSGETDUMMYGPUDATASIZE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
