#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB1E50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB1F00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB1AB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB1A90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetMirrorTextureD3D11_TypeDefinitionIndex = 30090;

	class IVRCompositor__GetMirrorTextureD3D11 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::IntPtr pD3D11DeviceOrResource, ::System::IntPtr& ppD3D11ShaderResourceView)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_INVOKE_OFFSET))(this, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::IntPtr pD3D11DeviceOrResource, ::System::IntPtr& ppD3D11ShaderResourceView, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::IntPtr, ::System::IntPtr&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_BEGININVOKE_OFFSET))(this, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::System::IntPtr& ppD3D11ShaderResourceView, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::IntPtr&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_ENDINVOKE_OFFSET))(this, ppD3D11ShaderResourceView, result);
		}
	};
}
