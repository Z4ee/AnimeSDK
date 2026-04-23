#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVECOLLISIONBOUNDSTAGSINFO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6DD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVECOLLISIONBOUNDSTAGSINFO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6E6E30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVECOLLISIONBOUNDSTAGSINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6DEDB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVECOLLISIONBOUNDSTAGSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6E6DB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeDefinitionIndex = 35771;

	class IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVECOLLISIONBOUNDSTAGSINFO__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Il2CppArray<::System::Byte>* pTagsBuffer, ::System::UInt32& punTagCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVECOLLISIONBOUNDSTAGSINFO_INVOKE_OFFSET))(this, pTagsBuffer, punTagCount);
		}

		::System::IAsyncResult* BeginInvoke(::Il2CppArray<::System::Byte>* pTagsBuffer, ::System::UInt32& punTagCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVECOLLISIONBOUNDSTAGSINFO_BEGININVOKE_OFFSET))(this, pTagsBuffer, punTagCount, callback, object);
		}

		::System::Boolean EndInvoke(::System::UInt32& punTagCount, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__GETLIVECOLLISIONBOUNDSTAGSINFO_ENDINVOKE_OFFSET))(this, punTagCount, result);
		}
	};
}
