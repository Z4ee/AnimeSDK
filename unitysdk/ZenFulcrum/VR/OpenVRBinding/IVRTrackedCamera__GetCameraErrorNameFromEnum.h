#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRTrackedCameraError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAERRORNAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE9CB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAERRORNAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE9D20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAERRORNAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE99C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAERRORNAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE99A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRTrackedCamera__GetCameraErrorNameFromEnum_TypeDefinitionIndex = 29982;

	class IVRTrackedCamera__GetCameraErrorNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAERRORNAMEFROMENUM__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError eCameraError)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAERRORNAMEFROMENUM_INVOKE_OFFSET))(this, eCameraError);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError eCameraError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRTrackedCameraError, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAERRORNAMEFROMENUM_BEGININVOKE_OFFSET))(this, eCameraError, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRTRACKEDCAMERA__GETCAMERAERRORNAMEFROMENUM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
