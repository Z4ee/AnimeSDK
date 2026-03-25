#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CB4C60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CB4CB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CB48F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB48D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__SetExplicitTimingMode_TypeDefinitionIndex = 30098;

	class IVRCompositor__SetExplicitTimingMode : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean bExplicitTimingMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_INVOKE_OFFSET))(this, bExplicitTimingMode);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean bExplicitTimingMode, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_BEGININVOKE_OFFSET))(this, bExplicitTimingMode, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
