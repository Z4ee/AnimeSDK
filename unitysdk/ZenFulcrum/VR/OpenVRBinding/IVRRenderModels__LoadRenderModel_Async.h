#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBF050)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBF0B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EFBF040)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBEFC0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__LoadRenderModel_Async_TypeDefinitionIndex = 37844;

	class IVRRenderModels__LoadRenderModel_Async : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC__CTOR_OFFSET))(this, a1, a2);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError Invoke(::System::String* a1, ::System::IntPtr& a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::String*, ::System::IntPtr&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::IntPtr& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::IntPtr&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError EndInvoke(::System::IntPtr& a1, ::System::IAsyncResult* a2)
		{
			return ((::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError(*)(::PVOID, ::System::IntPtr&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__LOADRENDERMODEL_ASYNC_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
