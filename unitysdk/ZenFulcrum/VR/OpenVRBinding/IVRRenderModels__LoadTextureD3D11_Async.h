#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD5170)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD5200)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD4DE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD4DC0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__LoadTextureD3D11_Async_TypeDefinitionIndex = 30187;

	class IVRRenderModels__LoadTextureD3D11_Async : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError Invoke(::System::Int32 textureId, ::System::IntPtr pD3D11Device, ::System::IntPtr& ppD3D11Texture2D)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_INVOKE_OFFSET))(this, textureId, pD3D11Device, ppD3D11Texture2D);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 textureId, ::System::IntPtr pD3D11Device, ::System::IntPtr& ppD3D11Texture2D, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::IntPtr&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_BEGININVOKE_OFFSET))(this, textureId, pD3D11Device, ppD3D11Texture2D, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError EndInvoke(::System::IntPtr& ppD3D11Texture2D, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::IntPtr&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_ENDINVOKE_OFFSET))(this, ppD3D11Texture2D, result);
		}
	};
}
