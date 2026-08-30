#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/ChaperoneCalibrationState.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB2A80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB2AB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAB360)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB2A10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__GetCalibrationState_TypeDefinitionIndex = 37688;

	class IVRChaperone__GetCalibrationState : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState Invoke()
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::ChaperoneCalibrationState(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETCALIBRATIONSTATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
