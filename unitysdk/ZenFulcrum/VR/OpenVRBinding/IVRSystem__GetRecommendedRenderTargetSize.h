#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC3310)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC3380)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFC3300)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC3280)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetRecommendedRenderTargetSize_TypeDefinitionIndex = 37593;

	class IVRSystem__GetRecommendedRenderTargetSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32& a1, ::System::UInt32& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::UInt32& a1, ::System::UInt32& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
