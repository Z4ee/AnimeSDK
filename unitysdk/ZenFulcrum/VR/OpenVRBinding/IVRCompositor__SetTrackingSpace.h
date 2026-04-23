#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ETrackingUniverseOrigin.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETTRACKINGSPACE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F0930)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETTRACKINGSPACE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F09A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETTRACKINGSPACE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F0640)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETTRACKINGSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F0620)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__SetTrackingSpace_TypeDefinitionIndex = 35777;

	class IVRCompositor__SetTrackingSpace : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETTRACKINGSPACE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETTRACKINGSPACE_INVOKE_OFFSET))(this, eOrigin);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin eOrigin, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::ETrackingUniverseOrigin, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETTRACKINGSPACE_BEGININVOKE_OFFSET))(this, eOrigin, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETTRACKINGSPACE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
