#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB4920)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB49A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFB4910)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB48A0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__FadeGrid_TypeDefinitionIndex = 37732;

	class IVRCompositor__FadeGrid : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FADEGRID_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
