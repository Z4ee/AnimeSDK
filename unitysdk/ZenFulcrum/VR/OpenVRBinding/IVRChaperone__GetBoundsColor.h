#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6790)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6860)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6DB890)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E6770)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__GetBoundsColor_TypeDefinitionIndex = 35752;

	class IVRChaperone__GetBoundsColor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pOutputColorArray, ::System::Int32 nNumOutputColors, ::System::Single flCollisionBoundsFadeDistance, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pOutputCameraColor)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::Int32, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_INVOKE_OFFSET))(this, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pOutputColorArray, ::System::Int32 nNumOutputColors, ::System::Single flCollisionBoundsFadeDistance, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pOutputCameraColor, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::Int32, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_BEGININVOKE_OFFSET))(this, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pOutputColorArray, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& pOutputCameraColor, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_ENDINVOKE_OFFSET))(this, pOutputColorArray, pOutputCameraColor, result);
		}
	};
}
