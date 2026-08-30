#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FEDE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D7FEE50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D7F7430)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FED70)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__SetSceneColor_TypeDefinitionIndex = 37692;

	class IVRChaperone__SetSceneColor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
