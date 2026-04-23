#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSTAGSINFO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E75E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSTAGSINFO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E7640)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSTAGSINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6DE9F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSTAGSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E75C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeDefinitionIndex = 35770;

	class IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSTAGSINFO__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Il2CppArray<::System::Byte>* pTagsBuffer, ::System::UInt32 unTagCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSTAGSINFO_INVOKE_OFFSET))(this, pTagsBuffer, unTagCount);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* pTagsBuffer, ::System::UInt32 unTagCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSTAGSINFO_BEGININVOKE_OFFSET))(this, pTagsBuffer, unTagCount, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__SETWORKINGCOLLISIONBOUNDSTAGSINFO_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
