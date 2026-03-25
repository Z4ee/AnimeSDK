#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdQuad_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVEPHYSICALBOUNDSINFO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB930)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVEPHYSICALBOUNDSINFO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB990)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVEPHYSICALBOUNDSINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CA3FF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVEPHYSICALBOUNDSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAB910)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeDefinitionIndex = 30053;

	class IVRChaperoneSetup__GetLivePhysicalBoundsInfo : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVEPHYSICALBOUNDSINFO__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>* pQuadsBuffer, ::System::UInt32& punQuadsCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVEPHYSICALBOUNDSINFO_INVOKE_OFFSET))(this, pQuadsBuffer, punQuadsCount);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>* pQuadsBuffer, ::System::UInt32& punQuadsCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t>*, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVEPHYSICALBOUNDSINFO_BEGININVOKE_OFFSET))(this, pQuadsBuffer, punQuadsCount, callback, object);
		}

		::System::Boolean EndInvoke(::System::UInt32& punQuadsCount, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVEPHYSICALBOUNDSINFO_ENDINVOKE_OFFSET))(this, punQuadsCount, result);
		}
	};
}
