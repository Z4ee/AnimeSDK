#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ChaperoneCalibrationState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB360)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB390)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C9F2B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAB340)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__GetCalibrationState_TypeDefinitionIndex = 30027;

	class IVRChaperone__GetCalibrationState : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState Invoke()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
