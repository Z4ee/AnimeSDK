#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B522580)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B522610)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B522560)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5224F0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__LoadTextureD3D11_Async_TypeDefinitionIndex = 36207;

	class IVRRenderModels__LoadTextureD3D11_Async : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError Invoke(::System::Int32 a1, ::System::IntPtr a2, ::System::IntPtr& a3)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::IntPtr a2, ::System::IntPtr& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::IntPtr&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError EndInvoke(::System::IntPtr& a1, ::System::IAsyncResult* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::IntPtr&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURED3D11_ASYNC_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
