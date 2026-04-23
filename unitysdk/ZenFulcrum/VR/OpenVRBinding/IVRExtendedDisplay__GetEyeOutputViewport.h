#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETEYEOUTPUTVIEWPORT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F33E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETEYEOUTPUTVIEWPORT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F34E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETEYEOUTPUTVIEWPORT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6F2F70)
#define ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETEYEOUTPUTVIEWPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F2F50)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRExtendedDisplay__GetEyeOutputViewport_TypeDefinitionIndex = 35699;

	class IVRExtendedDisplay__GetEyeOutputViewport : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETEYEOUTPUTVIEWPORT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::UInt32& pnX, ::System::UInt32& pnY, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETEYEOUTPUTVIEWPORT_INVOKE_OFFSET))(this, eEye, pnX, pnY, pnWidth, pnHeight);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::UInt32& pnX, ::System::UInt32& pnY, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETEYEOUTPUTVIEWPORT_BEGININVOKE_OFFSET))(this, eEye, pnX, pnY, pnWidth, pnHeight, callback, object);
		}

		::System::Void EndInvoke(::System::UInt32& pnX, ::System::UInt32& pnY, ::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVREXTENDEDDISPLAY__GETEYEOUTPUTVIEWPORT_ENDINVOKE_OFFSET))(this, pnX, pnY, pnWidth, pnHeight, result);
		}
	};
}
