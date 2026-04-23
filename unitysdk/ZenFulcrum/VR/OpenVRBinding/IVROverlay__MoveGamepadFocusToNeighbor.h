#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EOverlayDirection.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVROverlayError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__MOVEGAMEPADFOCUSTONEIGHBOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A701020)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__MOVEGAMEPADFOCUSTONEIGHBOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7010B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__MOVEGAMEPADFOCUSTONEIGHBOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A700CC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__MOVEGAMEPADFOCUSTONEIGHBOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A700CA0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__MoveGamepadFocusToNeighbor_TypeDefinitionIndex = 35877;

	class IVROverlay__MoveGamepadFocusToNeighbor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__MOVEGAMEPADFOCUSTONEIGHBOR__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError Invoke(::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection eDirection, ::System::UInt64 ulFrom)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection, ::System::UInt64))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__MOVEGAMEPADFOCUSTONEIGHBOR_INVOKE_OFFSET))(this, eDirection, ulFrom);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection eDirection, ::System::UInt64 ulFrom, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EOverlayDirection, ::System::UInt64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__MOVEGAMEPADFOCUSTONEIGHBOR_BEGININVOKE_OFFSET))(this, eDirection, ulFrom, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVROverlayError EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVROverlayError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__MOVEGAMEPADFOCUSTONEIGHBOR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
