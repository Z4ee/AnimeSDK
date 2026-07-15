#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix34_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEYETOHEADTRANSFORM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B231A70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEYETOHEADTRANSFORM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B231AE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEYETOHEADTRANSFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B231A50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEYETOHEADTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2319E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetEyeToHeadTransform_TypeDefinitionIndex = 36738;

	class IVRSystem__GetEyeToHeadTransform : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEYETOHEADTRANSFORM__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEYETOHEADTRANSFORM_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEYETOHEADTRANSFORM_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix34_t(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETEYETOHEADTRANSFORM_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
