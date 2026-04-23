#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A720370)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A7203E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A720020)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A720000)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetRecommendedRenderTargetSize_TypeDefinitionIndex = 35652;

	class IVRSystem__GetRecommendedRenderTargetSize : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::UInt32& pnWidth, ::System::UInt32& pnHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_INVOKE_OFFSET))(this, pnWidth, pnHeight);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_BEGININVOKE_OFFSET))(this, pnWidth, pnHeight, callback, object);
		}

		::System::Void EndInvoke(::System::UInt32& pnWidth, ::System::UInt32& pnHeight, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETRECOMMENDEDRENDERTARGETSIZE_ENDINVOKE_OFFSET))(this, pnWidth, pnHeight, result);
		}
	};
}
