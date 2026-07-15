#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Compositor_CumulativeStats.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B224350)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2243E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B224340)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2242C0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetCumulativeStats_TypeDefinitionIndex = 36870;

	class IVRCompositor__GetCumulativeStats : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats& a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats& a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
