#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdQuad_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSINFO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5171B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSINFO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B517210)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B50EE50)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B517130)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeDefinitionIndex = 36065;

	class IVRChaperoneSetup__SetWorkingCollisionBoundsInfo : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSINFO_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSINFO_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSINFO_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
