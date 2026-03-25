#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB5C0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB630)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C9FF50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAB5A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__SetSceneColor_TypeDefinitionIndex = 30031;

	class IVRChaperone__SetSceneColor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t color)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_INVOKE_OFFSET))(this, color);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t color, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_BEGININVOKE_OFFSET))(this, color, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__SETSCENECOLOR_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
