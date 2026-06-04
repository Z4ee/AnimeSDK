#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B518D00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B518DB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B518CE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11__CTOR_OFFSET UNITYSDK_OFFSET(0x1B518C70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetMirrorTextureD3D11_TypeDefinitionIndex = 36110;

	class IVRCompositor__GetMirrorTextureD3D11 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::IntPtr a2, ::System::IntPtr& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::IntPtr a2, ::System::IntPtr& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::IntPtr, ::System::IntPtr&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::System::IntPtr& a1, ::System::IAsyncResult* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::IntPtr&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTURED3D11_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
