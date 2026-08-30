#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB5A60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB5B10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB5A40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB59D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetMirrorTextureGL_TypeDefinitionIndex = 37753;

	class IVRCompositor__GetMirrorTextureGL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::UInt32& a2, ::System::IntPtr a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::UInt32&, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::UInt32& a2, ::System::IntPtr a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::UInt32&, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::System::UInt32& a1, ::System::IAsyncResult* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
