#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD46B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD4720)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD4360)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD4340)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__LoadIntoTextureD3D11_Async_TypeDefinitionIndex = 30188;

	class IVRRenderModels__LoadIntoTextureD3D11_Async : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError Invoke(::System::Int32 textureId, ::System::IntPtr pDstTexture)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_INVOKE_OFFSET))(this, textureId, pDstTexture);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 textureId, ::System::IntPtr pDstTexture, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_BEGININVOKE_OFFSET))(this, textureId, pDstTexture, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
