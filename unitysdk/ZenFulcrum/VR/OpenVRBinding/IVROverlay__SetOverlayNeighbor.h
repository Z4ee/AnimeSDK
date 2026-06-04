#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EOverlayDirection.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYNEIGHBOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B51FA50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYNEIGHBOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B51FB00)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYNEIGHBOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B51FA30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYNEIGHBOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51F9C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__SetOverlayNeighbor_TypeDefinitionIndex = 36176;

	class IVROverlay__SetOverlayNeighbor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYNEIGHBOR__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYNEIGHBOR_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection, ::System::UInt64, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYNEIGHBOR_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__SETOVERLAYNEIGHBOR_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
