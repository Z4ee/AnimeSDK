#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdQuad_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPHYSICALBOUNDSINFO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAC120)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPHYSICALBOUNDSINFO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAC180)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPHYSICALBOUNDSINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA3BF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPHYSICALBOUNDSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAC100)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeDefinitionIndex = 30052;

	class IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPHYSICALBOUNDSINFO__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>* pQuadsBuffer, ::System::UInt32 unQuadsCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPHYSICALBOUNDSINFO_INVOKE_OFFSET))(this, pQuadsBuffer, unQuadsCount);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>* pQuadsBuffer, ::System::UInt32 unQuadsCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPHYSICALBOUNDSINFO_BEGININVOKE_OFFSET))(this, pQuadsBuffer, unQuadsCount, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGPHYSICALBOUNDSINFO_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
