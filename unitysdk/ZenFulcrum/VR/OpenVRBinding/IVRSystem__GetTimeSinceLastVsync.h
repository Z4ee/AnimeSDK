#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B526CA0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B526D10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B526C90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B526C10)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetTimeSinceLastVsync_TypeDefinitionIndex = 35957;

	class IVRSystem__GetTimeSinceLastVsync : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Single& a1, ::System::UInt64& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single& a1, ::System::UInt64& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single&, ::System::UInt64&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::Single& a1, ::System::UInt64& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::UInt64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
