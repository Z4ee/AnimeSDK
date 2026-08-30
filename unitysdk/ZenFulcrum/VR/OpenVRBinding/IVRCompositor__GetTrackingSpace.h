#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CED5DC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CED5DF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CED5DB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED5D40)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetTrackingSpace_TypeDefinitionIndex = 37719;

	class IVRCompositor__GetTrackingSpace : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin Invoke()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
