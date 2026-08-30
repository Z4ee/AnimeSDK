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

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CED6BE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CED6CB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CED6BB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED6B40)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__Submit_TypeDefinitionIndex = 37723;

	class IVRCompositor__Submit : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::ZenFulcrum::VR::OpenVRBinding::Texture_t& a2, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a3, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags a4)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::ZenFulcrum::VR::OpenVRBinding::Texture_t& a2, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a3, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::ZenFulcrum::VR::OpenVRBinding::EVRSubmitFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError EndInvoke(::ZenFulcrum::VR::OpenVRBinding::Texture_t& a1, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t& a2, ::System::IAsyncResult* a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRCompositorError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Texture_t&, ::ZenFulcrum::VR::OpenVRBinding::VRTextureBounds_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SUBMIT_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
