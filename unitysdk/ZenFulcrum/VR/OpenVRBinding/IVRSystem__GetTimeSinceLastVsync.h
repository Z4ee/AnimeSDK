#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CE6040)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CE60B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CE5CE0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE5CC0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetTimeSinceLastVsync_TypeDefinitionIndex = 29937;

	class IVRSystem__GetTimeSinceLastVsync : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Single& pfSecondsSinceLastVsync, ::System::UInt64& pulFrameCounter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::UInt64&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_INVOKE_OFFSET))(this, pfSecondsSinceLastVsync, pulFrameCounter);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single& pfSecondsSinceLastVsync, ::System::UInt64& pulFrameCounter, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single&, ::System::UInt64&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_BEGININVOKE_OFFSET))(this, pfSecondsSinceLastVsync, pulFrameCounter, callback, object);
		}

		::System::Boolean EndInvoke(::System::Single& pfSecondsSinceLastVsync, ::System::UInt64& pulFrameCounter, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::UInt64&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETTIMESINCELASTVSYNC_ENDINVOKE_OFFSET))(this, pfSecondsSinceLastVsync, pulFrameCounter, result);
		}
	};
}
