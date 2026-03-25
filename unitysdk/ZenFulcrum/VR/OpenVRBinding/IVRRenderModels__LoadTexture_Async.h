#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURE_ASYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD55A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURE_ASYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD5610)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURE_ASYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD5250)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURE_ASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD5230)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__LoadTexture_Async_TypeDefinitionIndex = 30185;

	class IVRRenderModels__LoadTexture_Async : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURE_ASYNC__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError Invoke(::System::Int32 textureId, ::System::IntPtr& ppTexture)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::Int32, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURE_ASYNC_INVOKE_OFFSET))(this, textureId, ppTexture);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 textureId, ::System::IntPtr& ppTexture, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::IntPtr&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURE_ASYNC_BEGININVOKE_OFFSET))(this, textureId, ppTexture, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError EndInvoke(::System::IntPtr& ppTexture, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::IntPtr&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADTEXTURE_ASYNC_ENDINVOKE_OFFSET))(this, ppTexture, result);
		}
	};
}
