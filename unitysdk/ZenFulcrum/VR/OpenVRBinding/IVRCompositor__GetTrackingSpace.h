#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EDBF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6EDC20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6ED940)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6ED920)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetTrackingSpace_TypeDefinitionIndex = 35778;

	class IVRCompositor__GetTrackingSpace : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin Invoke()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETTRACKINGSPACE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
