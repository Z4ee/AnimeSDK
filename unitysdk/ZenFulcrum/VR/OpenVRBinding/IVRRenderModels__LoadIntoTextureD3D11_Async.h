#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBEF20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBEF90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBEF10)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBEEA0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__LoadIntoTextureD3D11_Async_TypeDefinitionIndex = 37849;

	class IVRRenderModels__LoadIntoTextureD3D11_Async : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError Invoke(::System::Int32 a1, ::System::IntPtr a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::IntPtr a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADINTOTEXTURED3D11_ASYNC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
