#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRCompositorError.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRSubmitFlags.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Texture_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VRTextureBounds_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB5E70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB5F40)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB5AB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB5A90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__Submit_TypeDefinitionIndex = 30062;

	class IVRCompositor__Submit : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::ZenFulcrum::VR::OpenVRBinding::Texture_t& pTexture, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pBounds, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags nSubmitFlags)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_INVOKE_OFFSET))(this, eEye, pTexture, pBounds, nSubmitFlags);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::ZenFulcrum::VR::OpenVRBinding::Texture_t& pTexture, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pBounds, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags nSubmitFlags, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_BEGININVOKE_OFFSET))(this, eEye, pTexture, pBounds, nSubmitFlags, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::Texture_t& pTexture, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& pBounds, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_ENDINVOKE_OFFSET))(this, pTexture, pBounds, result);
		}
	};
}
