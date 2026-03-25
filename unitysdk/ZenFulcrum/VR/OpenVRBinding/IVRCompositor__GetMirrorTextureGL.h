#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB22F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB23A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB1F50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB1F30)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetMirrorTextureGL_TypeDefinitionIndex = 30092;

	class IVRCompositor__GetMirrorTextureGL : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::UInt32& pglTextureId, ::System::IntPtr pglSharedTextureHandle)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::UInt32&, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_INVOKE_OFFSET))(this, eEye, pglTextureId, pglSharedTextureHandle);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::UInt32& pglTextureId, ::System::IntPtr pglSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::UInt32&, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_BEGININVOKE_OFFSET))(this, eEye, pglTextureId, pglSharedTextureHandle, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::System::UInt32& pglTextureId, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETMIRRORTEXTUREGL_ENDINVOKE_OFFSET))(this, pglTextureId, result);
		}
	};
}
