#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdQuad_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B515F60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B515FD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B50E860)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B515EF0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__GetPlayAreaRect_TypeDefinitionIndex = 36049;

	class IVRChaperone__GetPlayAreaRect : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t& a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
