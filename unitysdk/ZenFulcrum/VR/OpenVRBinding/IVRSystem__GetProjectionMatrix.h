#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix44_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B526190)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B526240)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B526150)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5260E0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetProjectionMatrix_TypeDefinitionIndex = 35953;

	class IVRSystem__GetProjectionMatrix : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye a1, ::System::Single a2, ::System::Single a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
