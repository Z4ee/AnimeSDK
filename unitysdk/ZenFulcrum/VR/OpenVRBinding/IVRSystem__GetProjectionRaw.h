#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE41A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE42A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE3D30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE3D10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetProjectionRaw_TypeDefinitionIndex = 29934;

	class IVRSystem__GetProjectionRaw : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::Single& pfLeft, ::System::Single& pfRight, ::System::Single& pfTop, ::System::Single& pfBottom)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_INVOKE_OFFSET))(this, eEye, pfLeft, pfRight, pfTop, pfBottom);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::Single& pfLeft, ::System::Single& pfRight, ::System::Single& pfTop, ::System::Single& pfBottom, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_BEGININVOKE_OFFSET))(this, eEye, pfLeft, pfRight, pfTop, pfBottom, callback, object);
		}

		::System::Void EndInvoke(::System::Single& pfLeft, ::System::Single& pfRight, ::System::Single& pfTop, ::System::Single& pfBottom, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_ENDINVOKE_OFFSET))(this, pfLeft, pfRight, pfTop, pfBottom, result);
		}
	};
}
