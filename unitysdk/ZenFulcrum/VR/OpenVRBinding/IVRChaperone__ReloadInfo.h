#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__RELOADINFO_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB560)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__RELOADINFO_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAB590)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__RELOADINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C9FC80)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__RELOADINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAB540)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__ReloadInfo_TypeDefinitionIndex = 30030;

	class IVRChaperone__ReloadInfo : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__RELOADINFO__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__RELOADINFO_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__RELOADINFO_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__RELOADINFO_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
