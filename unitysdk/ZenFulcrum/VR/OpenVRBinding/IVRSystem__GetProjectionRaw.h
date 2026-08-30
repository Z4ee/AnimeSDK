#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE3120)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE3220)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CEE30F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE3080)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetProjectionRaw_TypeDefinitionIndex = 37595;

	class IVRSystem__GetProjectionRaw : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void EndInvoke(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::IAsyncResult* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONRAW_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
