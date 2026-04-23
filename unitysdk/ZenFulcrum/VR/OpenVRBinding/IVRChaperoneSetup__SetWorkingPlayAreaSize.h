#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPLAYAREASIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E7A90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPLAYAREASIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E7B10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPLAYAREASIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E7720)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPLAYAREASIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E7700)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__SetWorkingPlayAreaSize_TypeDefinitionIndex = 35764;

	class IVRChaperoneSetup__SetWorkingPlayAreaSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPLAYAREASIZE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Single sizeX, ::System::Single sizeZ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPLAYAREASIZE_INVOKE_OFFSET))(this, sizeX, sizeZ);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single sizeX, ::System::Single sizeZ, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPLAYAREASIZE_BEGININVOKE_OFFSET))(this, sizeX, sizeZ, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPLAYAREASIZE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
