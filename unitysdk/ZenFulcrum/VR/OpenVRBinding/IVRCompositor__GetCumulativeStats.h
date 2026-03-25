#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/Compositor_CumulativeStats.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CAF740)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CAF7D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CAF3F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CAF3D0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__GetCumulativeStats_TypeDefinitionIndex = 30068;

	class IVRCompositor__GetCumulativeStats : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats& pStats, ::System::UInt32 nStatsSizeInBytes)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats&, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_INVOKE_OFFSET))(this, pStats, nStatsSizeInBytes);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats& pStats, ::System::UInt32 nStatsSizeInBytes, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats&, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_BEGININVOKE_OFFSET))(this, pStats, nStatsSizeInBytes, callback, object);
		}

		::System::Void EndInvoke(::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats& pStats, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::Compositor_CumulativeStats&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__GETCUMULATIVESTATS_ENDINVOKE_OFFSET))(this, pStats, result);
		}
	};
}
