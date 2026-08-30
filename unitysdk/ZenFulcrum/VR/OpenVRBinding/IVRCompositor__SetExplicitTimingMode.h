#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CED6720)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CED6770)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CED6710)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED66A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__SetExplicitTimingMode_TypeDefinitionIndex = 37759;

	class IVRCompositor__SetExplicitTimingMode : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__SETEXPLICITTIMINGMODE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
