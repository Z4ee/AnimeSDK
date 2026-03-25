#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRRenderModelError.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELERRORNAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18CD2EC0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELERRORNAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18CD2F30)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELERRORNAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x18CD2BD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELERRORNAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD2BB0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetRenderModelErrorNameFromEnum_TypeDefinitionIndex = 30200;

	class IVRRenderModels__GetRenderModelErrorNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELERRORNAMEFROMENUM__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError error)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELERRORNAMEFROMENUM_INVOKE_OFFSET))(this, error);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError error, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRRenderModelError, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELERRORNAMEFROMENUM_BEGININVOKE_OFFSET))(this, error, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELERRORNAMEFROMENUM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
