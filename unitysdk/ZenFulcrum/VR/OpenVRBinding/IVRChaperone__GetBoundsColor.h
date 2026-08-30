#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdColor_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB2910)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB29E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFAB4F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB2890)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__GetBoundsColor_TypeDefinitionIndex = 37693;

	class IVRChaperone__GetBoundsColor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a1, ::System::Int32 a2, ::System::Single a3, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a4)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::Int32, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a1, ::System::Int32 a2, ::System::Single a3, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::Int32, ::System::Single, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a1, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::ZenFulcrum::VR::OpenVRBinding::HmdColor_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETBOUNDSCOLOR_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
