#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELNAME_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A70E860)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELNAME_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A70E8E0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELNAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A70E4D0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A70E4B0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRRenderModels__GetRenderModelName_TypeDefinitionIndex = 35910;

	class IVRRenderModels__GetRenderModelName : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELNAME__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt32 Invoke(::System::UInt32 unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, ::System::UInt32 unRenderModelNameLen)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELNAME_INVOKE_OFFSET))(this, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
		}

		::System::IAsyncResult* BeginInvoke(::System::UInt32 unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, ::System::UInt32 unRenderModelNameLen, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::UInt32, ::System::Text::StringBuilder*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELNAME_BEGININVOKE_OFFSET))(this, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen, callback, object);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRRENDERMODELS__GETRENDERMODELNAME_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
