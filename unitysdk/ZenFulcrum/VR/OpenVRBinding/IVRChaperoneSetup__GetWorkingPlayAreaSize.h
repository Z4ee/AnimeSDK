#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGPLAYAREASIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E7160)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGPLAYAREASIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E71D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGPLAYAREASIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6DC9D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGPLAYAREASIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E7140)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__GetWorkingPlayAreaSize_TypeDefinitionIndex = 35758;

	class IVRChaperoneSetup__GetWorkingPlayAreaSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGPLAYAREASIZE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Single& pSizeX, ::System::Single& pSizeZ)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGPLAYAREASIZE_INVOKE_OFFSET))(this, pSizeX, pSizeZ);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single& pSizeX, ::System::Single& pSizeZ, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGPLAYAREASIZE_BEGININVOKE_OFFSET))(this, pSizeX, pSizeZ, callback, object);
		}

		::System::Boolean EndInvoke(::System::Single& pSizeX, ::System::Single& pSizeZ, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETWORKINGPLAYAREASIZE_ENDINVOKE_OFFSET))(this, pSizeX, pSizeZ, result);
		}
	};
}
