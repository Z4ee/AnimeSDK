#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVREye.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdMatrix44_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A71F160)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A71F210)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A71ED30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1A71ED10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetProjectionMatrix_TypeDefinitionIndex = 35653;

	class IVRSystem__GetProjectionMatrix : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t Invoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::Single fNearZ, ::System::Single fFarZ)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_INVOKE_OFFSET))(this, eEye, fNearZ, fFarZ);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVREye eEye, ::System::Single fNearZ, ::System::Single fFarZ, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVREye, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_BEGININVOKE_OFFSET))(this, eEye, fNearZ, fFarZ, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::HmdMatrix44_t(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETPROJECTIONMATRIX_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
