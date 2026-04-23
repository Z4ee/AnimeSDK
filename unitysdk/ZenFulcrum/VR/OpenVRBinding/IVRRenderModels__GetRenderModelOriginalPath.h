#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELORIGINALPATH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A70EFF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELORIGINALPATH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A70F0A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELORIGINALPATH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A70E930)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELORIGINALPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70E910)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetRenderModelOriginalPath_TypeDefinitionIndex = 35919;

	class IVRRenderModels__GetRenderModelOriginalPath : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELORIGINALPATH__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::String* pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, ::System::UInt32 unOriginalPathLen, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError& peError)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELORIGINALPATH_INVOKE_OFFSET))(this, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, ::System::UInt32 unOriginalPathLen, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError& peError, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Text::StringBuilder*, ::System::UInt32, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELORIGINALPATH_BEGININVOKE_OFFSET))(this, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError, callback, object);
		}

		::System::UInt32 EndInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError& peError, ::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELORIGINALPATH_ENDINVOKE_OFFSET))(this, peError, result);
		}
	};
}
