#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETHIGHQUALITYOVERLAY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CED8540)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETHIGHQUALITYOVERLAY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CED8570)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETHIGHQUALITYOVERLAY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CED8530)
#define ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETHIGHQUALITYOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED84C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVROverlay__GetHighQualityOverlay_TypeDefinitionIndex = 37766;

	class IVROverlay__GetHighQualityOverlay : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETHIGHQUALITYOVERLAY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt64 Invoke()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETHIGHQUALITYOVERLAY_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETHIGHQUALITYOVERLAY_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVROVERLAY__GETHIGHQUALITYOVERLAY_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
