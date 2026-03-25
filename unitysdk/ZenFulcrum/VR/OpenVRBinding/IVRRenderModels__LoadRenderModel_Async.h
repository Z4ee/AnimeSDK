#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD4D30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD4D90)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD4770)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD4750)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__LoadRenderModel_Async_TypeDefinitionIndex = 30183;

	class IVRRenderModels__LoadRenderModel_Async : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError Invoke(::System::String* pchRenderModelName, ::System::IntPtr& ppRenderModel)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::String*, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_INVOKE_OFFSET))(this, pchRenderModelName, ppRenderModel);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchRenderModelName, ::System::IntPtr& ppRenderModel, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::IntPtr&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_BEGININVOKE_OFFSET))(this, pchRenderModelName, ppRenderModel, callback, object);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError EndInvoke(::System::IntPtr& ppRenderModel, ::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::IntPtr&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_ENDINVOKE_OFFSET))(this, ppRenderModel, result);
		}
	};
}
