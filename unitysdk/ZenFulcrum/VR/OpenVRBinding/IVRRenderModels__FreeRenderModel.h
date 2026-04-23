#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREERENDERMODEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A70B3A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREERENDERMODEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A70B3F0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREERENDERMODEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A70B0B0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREERENDERMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70B090)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__FreeRenderModel_TypeDefinitionIndex = 35904;

	class IVRRenderModels__FreeRenderModel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREERENDERMODEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr pRenderModel)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREERENDERMODEL_INVOKE_OFFSET))(this, pRenderModel);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr pRenderModel, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREERENDERMODEL_BEGININVOKE_OFFSET))(this, pRenderModel, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__FREERENDERMODEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
